#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//第九章编程练习
//1.
//2.
// void chline (char ch,int i,int j)
// {
    // for(int x=0;x<i;x++)
    // {for(int y;y<j;y++)
    //   printf("%c",ch);
    //   printf("\n");
    //   }
// }
// int main()
// {
    // char ch;
    // int i,j;
    // scanf("%d %d",&i,&j);
    // scanf("%c",&ch);
    // chline(ch);
    // return 0;
// }
//6.
// void sort(double*a,double*b,double*c)
// {
//    if(*a>*b&&*a>*c)
//    {
//     if(*b>*c)//a>b>c
//     {*a=*c;*b=*b;*c=*a;}
//     else//a>c>b 
//     {*a=*b;int t=*c;*c=*b;*b=t;}
//    }
//    else if(*b>*c&&*b>*a)
//    {
//     if(*a>*c)//c<a<b
//     {int t=*c;int y=*b;*c=y;*b=*a;*a=t;}
//     else//b>c>a
//     {int t=*b;*b=*c;*c=t;}
//    }
//    else{
//     if(a<b)//a<b<c
//     ;
//     else//b<a<c
//     {int t=*b;*b=*a;*a=t;}
//    }
// }
// int main()
// {
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     sort(&a,&b,&c);
//     printf("%lf %lf %lf",a,b,c);
//     return 0;
// }
//7.
// void judge(char ch)
// {
//   if(ch<=90&&ch>=65)
//   printf("%d",ch-64);
// else if(ch<=122&&ch>=97)
// printf("%d",ch-96);
// else printf("-1");
// }
// int main()
// {
//     char ch[100];
//     scanf("%s",ch);
//     for(int i=0;ch[i]>0;i++)
//      judge(ch[i]);
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5,};
//     int *p=arr;
//     printf("%d\n",*(arr+1));
//     printf("%d\n",*(&arr[0]+1));
//     printf("%d\n",*(&(arr+1)));
//     printf("%d\n",*(p+1));
//     return 0;
// }
//十
//6.
// void turnsort(char*arr,int length)
// {
// char t;
// for(int i=0;i<length/2;i++)
// {
//     t=arr[i];
//     arr[i]=arr[length-i];
//     arr[length-i]=t;
// }
// }
// int main()
// {
//     char arr[5]={'a','b','c','d','e'};
//     turnsort(arr,5);
//     for(int i=0;i<5;i++)
//     printf("%c",arr[i]);
//     return 0;
// }
//9.
// void cp(int a,int b,double arr1[a][b])
// {
//     static double arr2[3][5];
//     static int c=a;
//     static int d=b;
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//         arr2[i][j]=arr1[i][j];
// }
// void pr(int a,int b,double arr1[a][b])
// {
// for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//         printf("%lf",arr1[i][j]);
//     for(int i=0;i<c;i++)
//     for(int j=0;j<d;j++)
//         printf("%lf",arr2[i][j]);

// }
// int main()
// {
//     int a=3;
//     int b=5;
// double arr1[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; 
// cp(a,b,arr1);
// pr(a,b,arr1);
//     return 0;
// }
void input(double arr[][5],int a,int b);
void ave1(double arr[][5],int a,int b,int*sum);
void avesum(double arr[][5],int a,int b,int *p1);
void maxfunc(double arr[][5],int a,int b,int *p2);
void output(int sum[3],int allsum,int max);
int main()
{
    double arr[3][5];
    int sum[3]={0,0,0,};
    int allsum=0;
    int *p1=&allsum;
    int max=0;
    int*p2=&max;
    input(arr[0],3,5);
    ave1(arr[0],3,5,sum);
    avesum(arr[0],3,5,p1);
    maxfunc(arr[0],3,5,p2);
    output(sum[3],allsum,max); 
    return 0;
}
void input(double arr[][5],int a,int b)
{
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    scanf("%d",&arr[i][j]);
}
void ave1(double arr[][5],int a,int b,int *sum)
{for(int i=0;i<a;i++)
    for(int j=0;j,b;j++)
    sum[i]+=arr[i][j];
}
void avesum(double arr[][5],int a,int b,int* p1)
{
for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
*p1+=arr[i][j];
}
void maxfunc(double arr[][5],int a,int b,int*p2)
{
  for(int i=0;i<a;i++)
  for(int j=0;j<b;j++)
     if(arr[i][j]>*p2)
        *p2=arr[i][j];
}
void output(int sum[3],int allsum,int max)
{
   for(int i=0;i<3;i++)
   printf("%d",sum[i]/5);
printf("\n");
printf("%d",allsum/15);
printf("%d",max);
}