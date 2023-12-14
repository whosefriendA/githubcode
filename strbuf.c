#include "strbuf.h"
//PART:A
//初始化
void strbuf_init(struct strbuf *sb,size_t alloc){
    sb->len=0;
    sb->buf=(char*)malloc(alloc);
    sb->alloc=alloc;
}
//填充
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc){
   sb->len=len;
   sb->alloc=alloc;
   sb->buf=(char*)str;
}
//释放
void strbuf_release(struct strbuf *sb){
    free(sb->buf);
    sb->len=0;
    sb->buf=NULL;
    sb->alloc=0;
}
//交换
void strbuf_swap(struct strbuf *a, struct strbuf *b){
    int t1=a->len;
    a->len=b->len;
    b->len=t1;

    int t3=a->alloc;
    a->alloc=b->alloc;
    b->alloc=t3;

    char*t2=a->buf;
    a->buf=b->buf;
    b->buf=t2;
}
//分离
char *strbuf_detach(struct strbuf *sb, size_t *sz){
     
     *sz=sb->alloc;
     char* detachsb=sb->buf;

    sb->len=0;
    sb->alloc=0;
    sb->buf=NULL;
    return detachsb;
}
//比较
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second){
    if(first->buf==NULL&&second->buf==NULL)
    return 0;
    if(first->buf==NULL||second->buf==NULL){
        if(first->buf==NULL)
        return 1;
        else 
        return -1;
    }
    return strcmp(first->buf,second->buf);
}
//清空
void strbuf_reset(struct strbuf *sb){
    sb->buf=NULL;
    sb->len=0;
}

//PART:B

//确保空间够用
void strbuf_grow(struct strbuf *sb, size_t extra){
    if(sb->alloc<sb->len+extra){
        sb->buf=(char*)realloc(sb->buf,sb->alloc+extra);
        sb->alloc+=extra;
    }
}
//追加长度为len的数据
void strbuf_add(struct strbuf *sb, const void *data, size_t len){
    if(sb->buf==NULL){
    sb->len=len;
    sb->alloc=len+1;
    sb->buf=(char*)malloc(sb->alloc);
    }
    else {strbuf_grow(sb,len+1);
    memcpy(sb->buf+sb->len,data,len);
    sb->len+=len;
    sb->buf[sb->len]='\0';
    }
}
//追加一个字符
void strbuf_addch(struct strbuf *sb, int c){
    if(sb->alloc<sb->len+1){
    sb->buf=(char*)realloc(sb->buf,2*sb->alloc);
    sb->alloc+=1;
    }
    sb->buf[sb->len]=(char)c;
    sb->buf[sb->len+1]='\0';
    sb->len+=1;
}
//追加一个字符串
void strbuf_addstr(struct strbuf *sb, const char *s){
     strbuf_add(sb,s,strlen(s));
}
//向一个strbuf添加另一个strbuf的数据
void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2){
    if(sb->alloc<sb->len+sb2->len)
    while(sb->alloc<sb->len+sb2->len){
        sb->buf=(char*)realloc(sb->buf,2*sb->alloc);
        sb->alloc*=2;
    }
    memcpy(sb->buf+sb->len,sb2->buf,sb2->len);
    sb->len+=sb2->len;
    sb->buf[sb->len]='\0';
}
//设置字符串长度
void strbuf_setlen(struct strbuf *sb, size_t len){
    if(len>sb->alloc)
    len=sb->alloc;
    sb->len=len;
    sb->buf[len]='\0';
}
//计算 sb 目前仍可以向后追加的字符串长度
size_t strbuf_avail(const struct strbuf *sb){
    return sb->alloc-sb->len-1;
}
//向 sb 内存坐标为 pos 位置插入长度为 len 的数据 data
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len){
    if(pos>len){
    printf("错误的内存坐标值");
    return;
    }

    if(sb->alloc<sb->len+len)
    while(sb->alloc<sb->len+len){
        sb->buf=(char*)realloc(sb->buf,2*sb->alloc);
        sb->alloc*=2;
    }
    
    memmove(sb->buf+len+pos,sb->buf+pos,sb->len-pos+1);
    memcpy(sb->buf+pos,data,len);
    sb->len+=len;
}
//PART:C

//去除 sb 缓冲区左端的所有 空格，tab, '\t'
void strbuf_ltrim(struct strbuf *sb){
    int i=0;
    while(sb->buf[i]==' '||sb->buf[i]=='\t')
    i++;
     memmove(sb->buf,sb->buf+i,sb->len-i+1);
        sb->len-=i;
}
//去除 sb 缓冲区右端的所有 空格，tab, '\t'
void strbuf_rtrim(struct strbuf *sb){
    while (sb->buf[sb->len - 1] == ' ' || sb->buf[sb->len - 1] == '\t'){
        sb->buf[sb->len] = '\0';
        sb->len-=1;
    }
}
//删除 sb 缓冲区从 pos 坐标长度为 len 的内容
void strbuf_remove(struct strbuf *sb, size_t pos, size_t len){
     if(pos>len){
    printf("错误的内存坐标值");
    return;
    }
    memmove(sb->buf+pos,sb->buf+pos+len,sb->len-len-pos);
    sb->len-=len;
}
//PART:D

//sb 增长hint?hint:8192大小，然后将文件描述符为fd的所有文件内容追加到sb中
ssize_t strbuf_read(struct strbuf *sb, int fd, size_t hint){
    strbuf_grow(sb,hint?hint:8192);
    FILE*fp=fdopen(fd,"r");
    for(char c;(c=fgetc(fp))!=EOF;strbuf_addch(sb,c));
    return sb->len;
}
//将文件句柄为 fp 的一行内容（抛弃换行符）读取到 sb
int strbuf_getline(struct strbuf *sb, FILE *fp){
    char ch;
     if (sb->buf == NULL) {
        sb->alloc = 128;
        sb->buf = (char *)malloc(sb->alloc);
        sb->len = 0;
    }
    while ((ch = fgetc(fp)) != EOF && ch != '\n'){
    if(sb->len==sb->alloc)
    sb->buf=(char*)realloc(sb->buf,sb->alloc*2);
    sb->buf[sb->len++] = ch;
    }
    sb->buf[sb->len] = '\0';
    return 0;
}
//challenge

//1.
struct strbuf **strbuf_split_buf(const char *str, size_t len, int terminator, int max) {
    struct strbuf **psb = (struct strbuf **) malloc(sizeof(struct strbuf *) * (max + 1));
    for (int dex = 0, flag = 0, n = 0; dex <= len && n < max; dex++) {
        while (str[flag] == terminator) 
        dex = flag++ + 2;
        if (dex == len || dex > flag && str[dex] == terminator) {
            psb[n] = (struct strbuf *) malloc(sizeof(struct strbuf));

            strbuf_init(psb[n], 0);
            strbuf_add(psb[n], str + flag, dex - flag);

            while (str[dex] == terminator) flag = dex++;
            psb[++n] = NULL;
        }
    }
    return psb;
}

//2.
bool strbuf_begin_judge(char* target_str, const char* str, int strnlen){
   if(str==NULL)
   return true;
    return !strncmp(target_str,str,strlen(str));
}

//3.
char* strbuf_get_mid_buf(char* target_buf, int begin, int end, int len){
    if(target_buf==NULL||begin<0||end<begin||end>len)
    return NULL;
    char* new_buf=(char*)malloc(end-begin+2);
    memcpy(new_buf,target_buf+begin,end-begin);
    new_buf[end-begin]='\0';
    return new_buf;
}