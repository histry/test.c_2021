#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	return 0;
}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;//str 里面存储的是数组首元素地址
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end -start;//地址-地址=中间元素个数
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(&arr);
//	printf("%d \n", len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	int i = 0;
//	
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num[10] = { 0,6,5,7,8,4,2,1,9,3 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int f = 1;
//		int j = 0;
//		for ( j = 0; j < 9-i; j++)
//		{
//			if (num[j] > num[j+1])
//			{
//				int t = num[j];
//				num[j] = num[j+1];
//				num[j+1] = t;
//				f = 0;
//			}
//		}
//		if (f == 1)
//			break;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}
///*
//四平方和
//四平方和定理，又称为拉格朗日定理：
//每个正整数都可以表示为至多4个正整数的平方和。
//如果把0包括进去，就正好可以表示为4个数的平方和。
//
//比如：
//5 = 0^2 + 0^2 + 1^2 + 2^2
//7 = 1^2 + 1^2 + 1^2 + 2^2
//（^符号表示乘方的意思）
//
//对于一个给定的正整数，可能存在多种平方和的表示法。
//要求你对4个数排序：
//0 <= a <= b <= c <= d
//并对所有的可能表示法按 a,b,c,d 为联合主键升序排列，最后输出第一个表示法
//
//程序输入为一个正整数N (N<5000000)
//要求输出4个非负整数，按从小到大排序，中间用空格分开
//
//例如，输入：
//5
//则程序应该输出：
//0 0 1 2
//
//再例如，输入：
//12
//则程序应该输出：
//0 2 2 2
//
//再例如，输入：
//773535
//则程序应该输出：
//1 1 267 838
//*/
//#include<stdio.h>
//void compare(int w, int x)
//{
//	int n = 0;
//	int q = 0;
//	if (w >= x)
//	{
//		n = w; 
//		q = x;
//	}
//	else
//	{
//		n = x;
//		q = w;
//	}
//	printf("%d %d", q, n);
//}
//
//int(*p)(int, int);//定义一个函数指针
//int (*k)(f, g, h, i);
//
//void Compare(int w, int x, int y, int z)
//{
//	int e, f;
//	e = 0; f = 0;
//	e = w + x - (*p)(w, x);
//	f = y + z - (*p)(y, z);
//	compare(e, f);
//	printf(" ");
//	compare((*p)(w, x), (*p)(y, z));
//}
//
//int main()
//{
//	int N, a, b, c, d;
//
//	scanf("%d", &N);
//
//	//int(*p)(int, int);//定义一个函数指针
//	p = compare;  //把函数compare赋给指针变量p, 使p指向Max函数
//	
//	/*int (*k)(f, g, h, i);*/
//	k = Compare;
//	
//	for (a = 0; a < N; a++)
//		for (b = 0; b < N; b++)
//			for (c = 0; c < N; c++)
//				for (d = 0; d < N; d++)
//				{
//					if (N == a * a + b * b + c * c + d * d)
//					{
//						(*k)(a, b, c, d);
//						printf("\n");
//					}
//				}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char* parr = &arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)
//	{
//		*(parr + i) = 1;
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char* parr = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(parr + i) = 1;
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	
//	char* pc = &a;
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	int* pa = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;//重点在调试的过程中观察内存的变化。
//	*pi = 0;//重点在调试的过程中观察内存的变化。
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //重点在调试的过程中观察内存的变化。
//	*pi = 0;   //重点在调试的过程中观察内存的变化。
//	return 0;
//	int a = 0;
//	int* pa = &a;
//
//	char b = 0;
//	char* pb = &b;
//	
//	float c = 0;
//	float* pc = &c;
//	
//	double d = 0;
//	double* pd = &d;
//	
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	double a;
//	printf("a = ");
//	scanf("%lf", &a);
//	printf("a = %f", a);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	  //将a的地址存放在p变量中，p就是一个指针变量。
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	return 0;
//}