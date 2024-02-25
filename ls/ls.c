#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>
#include<limits.h>
#include<dirent.h>
#include<grp.h>
#include<pwd.h>
#include<errno.h>
#include<stdlib.h>
bool para_a = false;
bool para_l = false;
bool para_t = false;
bool para_r = false;
bool para_R = false;
bool para_i = false;
bool para_s = false;
struct fileinfo
{
    char name[257];
    struct stat *stat;
};
void do_ls(char *dirname);
