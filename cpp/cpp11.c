#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
//字符串字面量
// int main()
// {
//   printf("%s %p %c","wtf","howcani",*"forget");
//     return 0;
// }
// int main()             
// {
//     char ch[20];
//     gets(ch);
//     puts(ch);
//     return 0;
// }
//gets,puts,fgets,fputs函数
// int main()
// {
//     char ch[5];
//     while(fgets(ch,5,stdin)!=NULL&&ch[0]!="12345")
//     fputs(ch,stdout);
// fputs(ch,stdout);
//     return 0;
// }
//1.
// char* shuru(int *n)
// { char arr[n];
//   for(int i=0;i<n;i++)
//      arr[i]=getchar();
//     return arr;
// }
//2.bool is_within(char cha,char*p){
// int flag=0;
// for(int i=0;p[i]!='\0';i++)
// if(p[i]==cha)
// flag=1;
// return flag;
// }
// int main(){
//     char cha;
//     bool result=0;
//     cha=getchar();
//     char ch[20];
//     fgets(ch,20,stdin);
//     char* p=ch;
//     result=is_within(cha,p);
//     printf("%c",cha);
//     printf("%s",ch);
//     printf("%d",result);
// }
// char* shuru(int *n)
// { char arr[n];
//   for(int i=0;i<n;i++)
//     fgets(arr[i],1,stdin);
//     return arr;
// }
//6.
// bool is_within(char cha,char*p){
// int flag=0;
// for(int i=0;p[i]!='\0';i++)
// if(p[i]==cha)
// flag=1;
// return flag;
// }
// int main(){
//     char cha;
//     bool result=0;
//     cha=getchar();
//     char ch[20];
//     fgets(ch,20,stdin);
//     char* p=ch;
//     result=is_within(cha,p);
//     printf("%c",cha);
//     printf("%s",ch);
//     printf("%d",result);
// }
//13
int main(int argc,char*argv[]){
for(int i=0;i<sizeof(argv[1])/sizeof(argv[1][0];i++))
{
    char t=argv[1][i];
    argv[1][i]=argv[1][sizeof(argv[1])/sizeof(argv[1][0])];
    argv[1][sizeof(argv[1])/sizeof(argv[1][0])]=t;
}
for(int i=0;i<sizeof(argv[1])/sizeof(argv[1][0]);i++)
printf("%s",argv[1][i]);
}