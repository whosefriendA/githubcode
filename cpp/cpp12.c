#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//4.
// int ident(int count,int n){
//     count==n ? return count : return ident(count++);
// }
// int main(){
//     int n;
//     int count;
//     n=getchar();
//     for(int i=0;i<n;i++)
//     count=ident(count,n);
// printf("%d",count==n);
// }
//5.
// int roll(){
//     int n=rand()%10+1;
//     return n;
// }
// int main(){
//     int num[100];
//     for(int i=0;i<100;i+=)
//     num[i]=roll();
//     for(int i=0;i<99;i++)
//     for(int j=0;j<10;j++)
//         if(num[i]<num[i+1])
//            {
//             int t=num[i];
//             num[i]=num[i+1];
//             num[i]=t;
//            }
// }
//6.
// int roll(){
//     int n=rand()%10+1;
//     return n;
// }
// int main(){
//     int num[1000];
//     int count[10]={0};
//     for(int x=1;x<11;x++)
//     {
//     for(int i=0;i<1000;i++)
//     num[i]=roll(x);
//     for(int i=0;i<999;i++)
//      switch(num[i])
//       {case 1 :
//       count[0]++;
//       break;
//       case 2 :
//       count[1]++;
//       break;
//       case 3:
//       count[2]++;
//       break;
//       case 4:
//       count[3]++;
//       break;
//       case 5:
//       count[4]++;
//       break;
//       case 6:
//       count[5]++;
//       break;
//       case 7:
//       count[6]++;
//       break;
//       case 8:
//       count[7]++;
//       break;
//       case 9:
//       count[8]++;
//       break;
//       case 10:
//       count[9]++;
//       break;}
//     for(int i=0;i<10;i++)
//     {
//         printf("%d",count[i]);
//     }
//     }
// }