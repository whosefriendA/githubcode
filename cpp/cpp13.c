#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.
// int main(){
//     int t=0;
//     char ch[100];
//     FILE *fp;
//     int count=0;
//     if((fp=fopen("newfile","w"))==NULL){
//         exit(EXIT_FAILURE);
//     }
//     fscanf(stdin,"%s",ch);
//     fprintf(fp,"%s",ch);
//     fclose(fp);
//     fopen("newfile","r");
//     while((t=getc(fp))!=EOF){
//      putc(t,stdout);
//      count++;
//     }
//     fclose(fp);
//     printf("%d",count);
//     return 0;
// }
//2.
int main(int argc,char*argv[]){
    if(argc<3)
    exit(EXIT_FAILURE);
     FILE *fp1;
     FILE *fp2;
    if((fp1=fopen(argv[1],"rb"))==NULL)
    exit(EXIT_FAILURE);
    if((fp2=fopen(argv[2],"wb"))==NULL)
    exit(EXIT_FAILURE);
    
}