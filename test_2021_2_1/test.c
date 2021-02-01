#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	//结果是啥？
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//#include<stdio.h>
//void Add(int *p, int x, int y)
//{
//	(*p)++;
//	int z = x + y;
//}
//int main()
//{
//	int num = 0;
//	Add(&num, 5, 100);
//	printf("num = %d\n", num);
//
//	Add(&num, 5, 100);
//	printf("num = %d\n", num);
//
//	Add(&num, 5, 100);
//	printf("num = %d\n", num);
//
//	return 0;
//}
//#include<stdio.h>
////二分查找
////在某个有序的数组中具体查找某个数
//int binary_search(int arr[], int k, int sz)//传递的数组arr实际上是数组首元素的地址
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//注意sz在函数外面求取
//	int k = 7;
//	int ret = binary_search(arr, k ,sz);
//	if (ret == -1)
//	{
//		printf("在此数组中找不到这个数\n");
//	}
//	else
//		printf("找到了，此数的下标为：%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
////是闰年返回1，不是闰年返回0；
//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//	{
//		return 1;
//	}
//	//只有这一种情况
//	return 0;
//}
//int main()
//{
//	//打印1000-2000之间的闰年
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断i是否为闰年
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
////是素数返回1，不是素数返回0；
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;//函数结束调用，break是跳出循环
//		}
//	}
//	/*if (j == i)*///只有这一种情况
//		return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
////传值调用
//void tmp(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//传址调用
//void tmp(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数的实现
//	tmp(&a, &b);
//
//	printf("a = %d\n", a );
//	printf("b = %d\n", b );
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", *pa);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
//#include<stdio.h>
////函数的定义
//int get_max(int x, int y)//形式参数
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数的实现
//	int max = get_max( a , b );//实参
//
//	printf("max = %d\n", max);
//	return 0;
//}
//#include<stdio.h>
//#include <string.h>//需要引相应的头文件
//
//int main()
//{
//	char arr[] = "hello world";
//	printf("%s\n", arr);
//
//	memset(arr,'*',5);//将arr1中内容放入arr2中
//	//hello world\0
//	//***** world\0
//	//注意：是''不是“”（默认“”内存在一个\0）
//
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//#include <string.h>//需要引相应的头文件
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "##############";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	strcpy(arr2, arr1);//将arr1中内容放入arr2中
//	//hello\0
//	//##############\0
//	//hello\0#######\0
//	//注意：arr2的字符串长度应该大于arr1的字符串长度
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define N 100
//int main()
//{
//	char arr1[N] = { 0 };
//	gets(arr1);
//	char arr2[N][N] = { 0 };
//	memset(arr2, 0, sizeof(arr2));
//	int arr3[10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (arr1[i] && arr1[i] != 0)
//	{
//		while (arr1[i] != ' ' && arr1[i] != 0)
//		{
//			k = 0;
//			arr2[j][k] = arr1[i];
//			printf("%c", arr2[j][k]);
//			k++;
//			i++;
//		}
//		printf("\n");
//		arr3[j] = k;
//		j++;
//		i++;
//	}
//	puts(arr3);
//	int max = 0;
//	k = 0;
//	for (i = 0; i < j; i++)
//	{
//		if (arr3[i] > max)
//		{
//			max = arr3[i];
//			k++;
//		}
//	}
//	for (i = 0; arr2[k][i]; i++)
//	{
//		printf("%c", arr2[k][i]);
//	}
//	return 0;
//}