#define _CRT_SECURE_NO_WARNINGS 1

////打印一个整数的每一位
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void digit(int n)
//{
//	if (n > 9)
//	{
//		digit(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &n);
//	digit(n);
//	return 0;
//}
////求n的阶乘
//#include <stdio.h>
//#include <stdlib.h>
//
//int Factorial1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * Factorial1(n - 1);
//}
//
//int Factorial2(int n)
//{
//	int result = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		result = result * i;
//	}
//	return result;
//}
//
//int main()
//{
//	printf("%d\n", Factorial1(5));
//	printf("%d\n", Factorial2(5));
//	return 0;
//}
////将字符串中的字符反向排列
//#include <stdio.h>
//#include <stdlib.h>
//
//void reverse(char* str)
//{
//	char* first = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (str != first)
//	{
//		str--;
//		printf("%c", *str);
//	}
//
//}
//int main()
//{
//	char str[] = "hello";
//	reverse(str);
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	int i = 0;
//	int x = 1;
//	int y = 2;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + y * 1.0 / x;
//		int tmp = x;
//		x = y;
//		y = x + tmp;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[] = "hello";
//	char ch2[] = "world";
//	int a = strcmp(ch1, ch2);
//	if (a > 0)
//	{
//		printf("%s\n", ch1);
//		printf("%s\n", ch2);
//		printf("%d\n", a);
//	}
//	else if (a == 0)
//	{
//		printf("%s\n", ch1);
//		printf("%s\n", ch2);
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%s\n", ch1);
//		printf("%s\n", ch2);
//		printf("%d\n", a);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[] = "hello";
//	char ch2[] = "hehe";
//	strcpy(ch1,ch2);
//	printf("%s", ch1);
//	return 0;
//}
////将字符串中的字符反向排列
//#include <stdio.h>
//#include <stdlib.h>
//void reverse(char* str)
//{
//	char* first = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (str != first)
//	{
//		str--;
//		printf("%c", *str);
//	}
//}
//int main()
//{
//	char str[] = "hello";
//	reverse(str);
//	printf("\n");
//	return 0;
//}
//求一个非负整数的各数位之和
//#include <stdio.h>
//#include <stdlib.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	printf("%d\n", DigitSum(1729));
//	return 0;
//}
//// 求n ^ k
//#include <stdio.h>
//#include <stdlib.h>
//int Mi(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * Mi(n, k - 1);
//}
//int main()
//{
//	printf("%d\n", Mi(5, 3));
//	return 0;
//}
////求第 n 个斐波那契数
//#include <stdio.h>
//#include <stdlib.h>
//int Fib1(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fib1(n - 1) + Fib1(n - 2);
//}
//int Fib2(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	int num1 = 1, num2 = 1, result = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		result = num1 + num2;
//		num1 = num2;
//		num2 = result;
//	}
//	return result;
//}
//int main()
//{
//	printf("%d\n", Fib2(40));
//	printf("%d\n", Fib1(40));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//}