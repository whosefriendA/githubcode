#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//1.
// int change(char* num);
// int main(){
//     char num[32];
//     fscanf(stdin,"%s",num);
//     printf("%d",change(num));
// }
// int change(char* num)
// {
//     int count=0;
//     int result=0;
//   for(int i=strlen(num)-1;i>=0;i--){
//     result+=(num[i]-'0')*(1<<count);
//     count++;
//   }
// return result;
// }
//2.
// int change(char* num);
// int main(int argc,char *argv[]){
//     int num1;
//     int num2;
//     if(argc<3)
//     exit(EXIT_FAILURE);
//     num1=change(argv[1]);
//     num2=change(argv[2]);
//     printf("%d",num1~num2);
//     printf("%d",num1&num2);
//     printf("%d",num1^num2);
//     printf("%d",num1|num2);
// }
// int change(char* num)
// {
//     int count=0;
//     int result=0;
//   for(int i=strlen(num)-1;i>=0;i--){
//     result+=(num[i]-'0')*(1<<count);
//     count++;
//   }
// return result;
// }
//3.
// int numofopen(int);
// int main(){
//     int num;
//     scanf("%d",num);
//     printf("%d",numofopen(num));
// }
// int numofopen(int num){
//     if(num>=0){
//         for(int i=0;i<32;i++)
//            if(num>(1<<i))
//             return i+1;
//     }
//     else
//     for(int i=0;i<32;i++)
//            if(num>(1<<i))
//             return i+2;
// }