#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct strbuf{
  int len;     //当前缓冲区（字符串）长度
  int alloc;   //当前缓冲区（字符串）容量
  char *buf;   //缓冲区（字符串）
};
//PART:A的函数原型
void strbuf_init(struct strbuf *sb,size_t alloc);
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc);
void strbuf_release(struct strbuf *sb);
void strbuf_swap(struct strbuf *a, struct strbuf *b);
char *strbuf_detach(struct strbuf *sb, size_t *sz);
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second);
void strbuf_reset(struct strbuf *sb);
//PARTB:B的函数原型
void strbuf_grow(struct strbuf *sb, size_t extra);
void strbuf_add(struct strbuf *sb, const void *data, size_t len);

int main(){
    struct strbuf sbuf1;
    struct strbuf sbuf2;
    strbuf_init(&sbuf1,10);

    strbuf_attach(&sbuf1,"xiyou",5,10);

    strbuf_release(&sbuf1);

    strbuf_swap(&sbuf1,&sbuf2);

    int sz=0;
    char*detachsb=strbuf_detach(&sbuf1,&sz) ;

    if(!strbuf_cmp(&sbuf1,&sbuf2))
    printf("These two structs is the same");
    else 
    printf("These two structs is not the same");

}
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
    strcpy(sb->buf,str);
    sb->len+=len;
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
    
}