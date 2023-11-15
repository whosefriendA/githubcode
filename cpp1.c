#include<stdio.h>
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
