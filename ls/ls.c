#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdlib.h>
void ls(char[]);
int main(int argc,char** argv)
{
    if(argc==1) ls(".";)
    else{
while(--argc){
    printf("%s : \n",*++argv)
    ls(*argv);
}
}
}
void ls(char dirname[])
{
    DIR *dir_ptr;
    struct dirent *direntp;
    if((dir_ptr=opendir(dirname))==NULL){
        fprintf(stderr,"ls1: Canot open %s\n",dirname);
    }else{
        while((direntp =readdir(dir_ptr)) !=NULL){
            printf("%s\n",direntp ->d_name);
        }
        int flag;
        if((flag =closedir(dir_ptr))==-1){
            perror("ls1:Cannot close dir");
            exit(0);
        }
    }
}