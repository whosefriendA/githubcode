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
//13.
// void input(double arr[][5],int a,int b);
// void ave1(double arr[][5],int a,int b,int*sum);
// void avesum(double arr[][5],int a,int b,int *p1);
// void maxfunc(double arr[][5],int a,int b,int *p2);
// void output(int *sum,int *p1,int *p2);
// int main()
// {
//     double arr[3][5];
//     int sum[3]={0,0,0,};
//     int allsum=0;
//     int *p1=&allsum;
//     int max=0;
//     int*p2=&max;
//     input(arr[0],3,5);
//     ave1(arr[0],3,5,sum);
//     avesum(arr[0],3,5,p1);
//     maxfunc(arr[0],3,5,p2);
//     output(sum,allsum,max); 
//     return 0;
// }
// void input(double arr[][5],int a,int b)
// {
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&arr[i][j]);
// }
// void ave1(double arr[][5],int a,int b,int *sum)
// {for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     sum[i]=sum[i]+arr[i][j];
// }
// void avesum(double arr[][5],int a,int b,int* p1)
// {
// for(int i=0;i<a;i++)
// for(int j=0;j<b;j++)
// *p1+=arr[i][j];
// }
// void maxfunc(double arr[][5],int a,int b,int*p2)
// {
//   for(int i=0;i<a;i++)
//   for(int j=0;j<b;j++)
//      if(arr[i][j]>*p2)
//         *p2=arr[i][j]; 
// }
// void output(int *sum,int *p1,int *p2)
// {
//    for(int i=0;i<3;i++)
//    printf("%d ",sum[i]/5);
// printf("\n");
// printf("%d",*p1/15);
// printf("\n");
// printf("%d",*p2);
// }