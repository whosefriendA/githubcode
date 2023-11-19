#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<limits.h>
#include<float.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
//int main(void)
//{
//    short big=65536;
//    printf("%hd\n",big);
//    return 0;
//
//}
//int main(void)
//{
//	float good = 1.1e-3f;
//		printf("%f\n", good);
//	return 0;
//}
//int main(void)
//{
//	int ch;
//	scanf("%d",&ch);
//	printf("%d is %c\n",ch,ch);
//
//
//
//
//	return 0;
//}
//int main(void)
//{
//	char beep = 7;
//	printf("%c", beep);
//	printf("Startlrd by the sudden sound, Sally shouted");
//	printf("\n\"By the Great Pumpkin,what was that!\"");
//
//
//
//
//
//	return 0;
//}
//int main(void)
//{
//	char arr1[] = "abcdefghijklmnopqrstuvwxyz";
//	printf("%d",strlen(arr1));
//	return 0;
//}
//int main()
//{
//	float abc = 1.0;
//	printf("%e", abc);
//	return 0;
//}
//int main(void)
//{
//	int input;
//		scanf("%d", &input);
//	input = input / 2;
//	printf("%d", input);
//	return 0;
//
//
//
//}数据类型大小值
//int main(void)
//{
//	printf("*%d*\n", CHAR_BIT);
//	printf("%d\n", CHAR_MAX);
//	printf("%d\n",CHAR_MIN);
//	printf("%d\n",SCHAR_MAX);
//	printf("%d\n",SCHAR_MIN);
//	printf("%d\n",SHRT_MAX);
//	return 0;
//}选择语句
//int main(vid)
//{
//	int input = 0;
//		printf("你要好好学习吗？\n");
//		scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("自由\n");
//	}
//	else
//	{
//		printf("die");
//	}
//	return 0;
//}循环语句
//
//以创建函数的方式来编写一个加法程序
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//		int n2 = 0;
//		scanf("%d %d", &n1, &n2);
//		int sum = Add(n1, n2);
//			printf("%d\n", sum);
//
//
//	return 0;
//}
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of %s sells for$%f.\nThat is%f%% oflist.", BOOK,cost, percent);
//	return 0;
//}
//int main(void)
//{
//	int test = 0;
//	scanf("%o", &test);
//	printf("%d", test);
//	return 0;
//}
//int main()
//{
//	float weight, height, BMI;
//	scanf("%f %f", &weight, &height);
//	BMI = weight / (height * height);
//	printf("%f", BMI);
//	return 0;
//}
//void what(int n);
//int main()
//{
//	int abc=5;
//	char ch='!';
//	float fl=6.0;
//	what(abc);
//	what(ch);
//	what(fl);
//
//	
//
//	return 0;
//}
//void what(int n)
//{
//	while (n-- > 0)
//		printf("&");
//	printf("\n");
//}
//int main(void)
//{
//	int num1,num3;
//	char num2[100];
//	char zero[20];
//	scanf("%s",&num2);
//	printf("\"%-20s\"",num2);
//	return 0;
//}
//int main()
//{
//	double num1 = 1.0/3.0;
//	float num2 = 1.0 / 3.0;
//	printf("%.6f %.6f\n", num1, num2);
//	printf("%.12f %.12f\n", num1, num2);
//	printf("%d %d", FLT_DIG, DBL_DIG);
//	return 0;
//}
//int main()
//{
//	char name[20] = "wanggang";
//	int width = 10;
//	int num = 10;
//	printf("%*s %d", width, name, num);
//	return 0;
//#define YIBAI03 103
//int main()
//{
//	int n = 96;
//	while (n++ < YIBAI03)
//	
//		printf("%5c",n);
//		printf("\n");
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	while (num++<= 10)
//	printf("%d", num);
//	printf("\nend");
//	return 0;
//}
//使用分变小时和秒
//#define sixty 60
//int main()
//{
//	int hour, second, minute;
//	minute = 0;
//	second = 0;
//	
//	while (scanf("%d", &minute) > 0)
//	{
//		hour = minute/sixty;
//		second = minute % sixty;
//		printf("%d\n%d", hour, second);
//	}
//	return 0;
//}
//通过函数调用给输入值立方
//void cube(double n);
//int main()
//{
//	double num = 0;
//	scanf("%lf", &num);
//	cube(num);
//	return 0;
//}
//void cube(double n)
//{
//	n = n * n * n;
//	printf("%lf", n);
//DO WHILE语句
//int main()
//{
//	int num1 = 0;
//	int num2 = 10;
//	do printf("%5d", num1);
//	while (++num1<num2);
//	return 0;          
//}嵌套循环的实例
//int main()
//{
//	int row;
//	char ch;
//	for (row = 0; row < 6; row++)
//	{
//		for (ch = 'A'; ch <('A'+ 10); ch++)
//			printf("%c", ch);
//	}
//	return 0;
//}
//MAX
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = 0;
//	if (a > b)
//	{
//		if (a > c) { max = a; }
//		else { max = c; }
//	}
//	else {
//		if (b > c) { max = b; }
//		else { max = c; }
//	}
//	printf("%d", max);
//	return 0;
//}计算一些数字中奇数偶数的数量
//int main()
//{
//	int number;
//	int 奇数量 = 0;
//	int 偶数量 = 0;
//	while(scanf("%d",&number)!=0)
//	{
//		if (number % 2 == 1)
//				奇数量++;
//		else 偶数量++;
//	}
//	printf("%d %d",奇数量,偶数量);
//	return 0;
//}
////int main()
//{
//	int a[][5] = { 2,54,563,4563,456,3,324,76,45,345, };
//	int i = 0;
//	int num = 0;
//  num= sizeof(a) / sizeof(a[0]);
//		printf("%d", );
//	return 0;
//}通过输入的成绩给出评价
//int main()
//{
//	int grade = 0;
//	char ch;
//	scanf("%d", &grade);
//	if (grade <= 100 && grade >= 80)
//		ch = 'A';
//	else {
//		if (grade < 80 && grade >= 60)
//			ch = 'B';
//		else ch = 'C';
//	}
//		switch(ch)
//		{
//	case'A':
//		printf("you get a good grades!");
//		break;
//	case'B':
//		printf("you need to work harder!");
//		break;
//	case'C':
//		printf("you are a failure!");
//		break;
//		};
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x1, x2, y1, y2;
//    double distance = 0;
//    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
//    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//    printf("%f", distance);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    float v1, v2;
//    scanf("%.1f %.1f %.1f", &a, &b, &c);
//    v1 = ((-b + sqrt(b * b - 4 * a * c)) /2 * a);
//    v2 = ((-b - sqrt(b * b - 4 * a * c)) /2 * a);
//    printf("v1=%.2f v2=%.2f", v1, v2);
//    return 0;
//}
//int main(int argc, const char* argv[])
//{
//    char s[] = "hello";
//    char* p = strchr(s, 'l');
//    char* t = (char*)malloc(strlen(p) + 1);
//    strcpy(t, p);
//    printf("%s", t);
//    free(t);
//    return 0;
//}
//int mycmp(const char* s1, const char* s2)
//{
//    while (*s1 == *s2 && *s1 != '\0')
//    {
//        s1++;
//        s2++;
//    }
//    return *s1 - *s2;
//}
//int main()
//{
//    char s1[] = "a,b,c";
//    char s2[] = "a,b,c";
//    printf("%f", mycmp(s1, s2));
//    return 0;
// }结构体
// int main()
//{
//    struct point {
//        int x;
//        int y;
//    }p1, p2;
//    p1.x = 5;
//    p1.y = 6;
//    p2.x = 2;
//    p2.y = 4;
//    p1 = (struct point){ 1,1 };
//    struct point* pdate = &p1;
//    printf("%i %i\n%i %i", p1.x, p1.y, p2.x, p2.y);
//    printf("%p", pdate);
//    return 0;
//    }
// 
// 
//  
// 
// 
// 
// 
// 
// 
// 打印多少个=
//int main()
//{
//	unsigned int i = 1;
//	do
//	{
//		i--;
//		putchar('=');
//	} while (i >=0);
//}
//交换变量值的五种方法
//1
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	return 0;
//}
//2
//void change(int* a, int* b);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	change(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void change(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//3
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//4
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a * b;
//	b = a / b;
//	a = a / b;
//	printf("%d %d", a, b);
//	return 0;
//}
//5
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
// 
// 
//4
int count = 100;
int process(int num){
while(1)
switch (num) {
case 0:
	num = num ^ 99 ^ 88 ^ 99 ^ 88 | 10;
case 15:
	num = num ^ 5;
	break;
case 8:
	num = 1 << num;
	num -= num++;
	break;
case 10:
	num = num + -3;
	count = count + num++;
	break;
case 2:
	--num;
case 5:
	return (1 << num);
default:
	num = num & 1 ? num + 1 : num;
}
}
int main()
{
	int start = 0;
	int answer = process(start);
	printf("answer==%d\n", answer);
	return 0;
}
//测试
//int main()
//{
//	int a = 1;
//	a = a + -3;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	num = num ^ 99 ^ 88 ^ 99 ^ 88 | 10;
//	printf("%d", num);
//}


//5
//typedef struct str {
//	short e1;
//	char e2;
//	char e3[6];
//	double e5;
//	int e6;
//}str;
//typedef union uni {
//	short e1;
//	char e2;
//	char e3[6];
//	struct str e4;
//	double e5;
//	int e6;
//}uni;
//int main() {
//	int x = sizeof(str);
//	int y = sizeof(uni);
//
//	printf("x=%d,y=%d\n",x, y);
//	printf("hello=%d\n", printf("3G=%d\n", --x == 23 && x-- == 22 && ++y == 9));
//	printf("x1=%d,y1=%d\n", x, y);
//	return 0;
//}
//
//6
//#define SQR(x) x*x
//int main()
//{
//	int i = 1, j = 2;
//
//	printf("%d\n", SQR(i + j));
//}
//7
//int main()
//{
//	int nums[2][5] = { {2,4,6,8,10},{12,14,16,18,20} };
//	int *ptr1 = (int*)(&nums + 1);
//	int *ptr2 = (int*)(&nums[0] + 1);
//
//	printf("*nums[0][4]+1=%d\n", nums[0][4] + 1);
//	printf("*(nums[0])+1=%d\n", *(nums[0]) + 1);
//
//	printf("*nums[0]+1=%d\n", *(nums[0] + 1));
//	printf("*nums[1]+1=%d\n", *(nums[1] + 1));
//	printf("*(nums+1)=%d\n", *(nums + 1));
//
//	printf("*(ptr2-1)=%d\n", *(ptr2 - 1));
//	printf("*(ptr-1)=%d\n", *(ptr1 - 1));
//	
//	return 0;
//}
//8
//int main()
//{
//	int a[3][4] = { {1,2,3,4},{3,4,5,6},{5,6,7,8,} };
//	int i;
//	int(*p)[4] = a, * q = a[0];
//
//	for (i = 0; i < 3; i++) {
//		if (i == 0)
//			(*p)[i + i / 2] = *q + 1;
//		else
//			p++, ++q;
//	}
//	for (i = 0; i < 3; i++) {
//		printf("a[%d][%d]=%d\n",i, i, a[i][i]);
//	}
//	printf("%d,%d\n", *((int*)p), *q);
//}
//9
