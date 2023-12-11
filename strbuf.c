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
    if(sb->alloc<(sb->len+len+1)){
        sb->alloc*=2;
        sb->buf=(char*)realloc(sb->buf,sb->alloc);
    }
    memcpy(sb->buf+sb->len,str,len);
    sb->len+=len;
    sb->buf[sb->len]='\0';
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
    if(sb->alloc<sb->len+len)
    while(sb->alloc<sb->len+len){
        sb->buf=(char*)realloc(sb->buf,2*sb->alloc);
        sb->alloc*=2;
    }
    memcpy(sb->buf+sb->len,data,len);
    sb->len+=len;
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
    if(sb->alloc<sb->len+strlen(s)+1)
    while(sb->alloc<sb->len+strlen(s)+1){
        sb->buf=(char*)realloc(sb->buf,2*sb->alloc);
        sb->alloc*=2;
    }
    strcat(sb->buf,s);
    sb->len+=strlen(s)+1;
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
    return sb->alloc-sb->len;
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
    int i=sb->len-1;
    while(sb->buf[i]==' '||sb->buf[i]=='\t')
    i--;
    sb->buf[i]='\0';
    sb->len=i;
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
    size_t newalloc=hint?hint:8192;
    sb->buf=(char*)realloc(sb->buf,newalloc);
    sb->alloc=newalloc;

    ssize_t read_bytes;
    while(read_bytes=read(fd,sb->buf+sb->len,newalloc-sb->len)){
    sb->len+=read_bytes;
    if(sb->len==sb->alloc)
    sb->buf=(char*)realloc(sb->buf,newalloc*2);
    }
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