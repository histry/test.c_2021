#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int Is_Prime(int i)//素数是只有1和本身能整除
{
	int j = 0;
	for (j = 2; j < sqrt(i); j++)
	{
		if (i % j == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (Is_Prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
//#include <stdio.h>
//int Is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (Is_leap_year(n) == 1)
//		printf("%d是闰年\n", n);
//	else 
//		printf("%d不是闰年\n", n);
//	return 0;
//}
//#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//int Sum(int n)
//{
//	if (n > 0)
//	{
//		return n * Sum(n - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Sum(n);
//	printf("%d \n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	int i = 0;//1*2*3=6
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d \n", sum);
//	return 0;
//}
//#include <stdio.h>
//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k < 0)
//	{
//		return 1.0 /(Pow(n, -k));
//	}
//	else
//		return 1.0;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int Digitsum(int a)
//{
//	if (a / 10)
//	{
//		return Digitsum(a / 10) + a % 10;
//	}
//	else
//		return a;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = Digitsum(a);
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse(char ch[])
//{
//		int tmp = ch[0];
//		int len = my_strlen(ch);
//		ch[0] = ch[len - 1];
//		ch[len - 1] = '\0';
//		if(strlen(ch+1)>2)
//		reverse(ch + 1, len);
//		ch[len - 1] = tmp;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	reverse(ch);
//	printf("%s", ch);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse(char ch[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		char c = ch[left];
//		ch[left] = ch[right];
//		ch[right] = c;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//	int len = my_strlen(ch);
//	reverse(ch, len);
//	printf("%s", ch);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str, int len)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//#include <string.h>
//void reverse(char ch[],int len)
//{
//	int left = 0;
//	int right = len - 1;
//	
//	while (left <= right)
//	{
//		char c = ch[left];
//		ch[left] = ch[right];
//		ch[right] = c;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//	int len = strlen(ch);
//	reverse(ch,len);
//	printf("%s", ch);
//	return 0;
//}
//#include <stdio.h>
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d   b =%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d   b =%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);;
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//void swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = { 6,7,8,9,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	
//	swap(arr1, arr2, sz);
//	print(arr1, sz);
//	printf("\n");
//	print(arr2, sz);
//	
//	return 0;
//}
//#include <stdio.h>
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	reverse(arr, sz);
//	print(arr, sz);
//	
//	return 0;
//}