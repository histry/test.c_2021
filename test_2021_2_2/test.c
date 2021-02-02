#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void hanoi(int n, char source, char goal, char temp)
//{
//	if (n == 1)
//	{
//		printf("Move %d :from %c to %c\n", n, source, goal); //将第n个盘子从source移动到goal
//	}
//	else
//	{
//		hanoi(n - 1, source, goal, temp);//将n-1个盘子借助goal从source移动到temp
//
//		printf("Move %d :from %c to %c\n", n, source, goal); //将第n个盘子从source移动到goal
//
//		hanoi(n - 1, temp, goal, source);//将n-1个盘子借助source从temp移动到goal
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入盘子的个数：");
//	scanf("%d", &n);
//
//	hanoi(n, 'A', 'B', 'C');
//
//	return 0;
//}
//#include<stdio.h>
//void hanoi(int n, char source, char goal, char temp)
//{
//	if (n == 1)
//	{
//		printf("Move %d :from %c to %c\n", n, source, goal); //将第n个盘子从source移动到goal
//	}
//	else
//	{
//		hanoi(n - 1, source, goal, temp);//将n-1个盘子借助goal从source移动到temp
//
//		printf("Move %d :from %c to %c\n", n, source, goal); //将第n个盘子从source移动到goal
//
//		hanoi(n - 1, temp, goal, source);//将n-1个盘子借助source从temp移动到goal
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入盘子的个数：");
//	scanf("%d", &n);
//
//	hanoi(n, 'A', 'B', 'C');//借助B杆将A中盘移动到C上
//
//	return 0;
//}
//#include<stdio.h>
//void move(int n, char source, char goal)
//{
//	printf("Move %d :from %c to %c\n", n, source, goal);
//}
//void hanoi(int n, char source, char goal, char temp)
//{
//	if (n == 1)
//	{
//		move(n, source, goal);//将第n个盘子从source移动到goal
//	}
//	else
//	{
//		hanoi(n - 1, source, goal, temp);//将n-1个盘子借助goal从source移动到temp
//
//		move(n, source, goal);//将第n个盘子从source移动到goal
//
//		hanoi(n - 1, temp, goal, source);//将n-1个盘子借助source从temp移动到goal
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入盘子的个数：");
//	scanf("%d", &n);
//
//	hanoi(n, 'A', 'B', 'C');
//
//	return 0;
//}
//#include<stdio.h>
//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n > 2)
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int Facl(int n)
//{
//	if (n > 1)
//	{
//		return n * Facl(n - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int Facl(int n)
//{
//	int sum = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//后一个元素的地址
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;//计数器
//		str++;//后一个元素的地址
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr上传的是首元素地址
//	printf("%d\n", len);
//
//	return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if (n >= 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		printf("%d ", n % 10);
//		print(n / 10);
//	}
//	else
//		printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//#include<stdio.h>
//
//#include"Add.h"
//int main()
//{
//	int sum = Add(10, 20);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
////函数的声明
//int Add(int x, int y);
//
//int main()
//{
//	int sum = Add(10, 20);
//	printf("%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}