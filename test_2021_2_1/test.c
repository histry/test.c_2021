#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	//�����ɶ��
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
////���ֲ���
////��ĳ������������о������ĳ����
//int binary_search(int arr[], int k, int sz)//���ݵ�����arrʵ������������Ԫ�صĵ�ַ
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//ע��sz�ں���������ȡ
//	int k = 7;
//	int ret = binary_search(arr, k ,sz);
//	if (ret == -1)
//	{
//		printf("�ڴ��������Ҳ��������\n");
//	}
//	else
//		printf("�ҵ��ˣ��������±�Ϊ��%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
////�����귵��1���������귵��0��
//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//	{
//		return 1;
//	}
//	//ֻ����һ�����
//	return 0;
//}
//int main()
//{
//	//��ӡ1000-2000֮�������
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
////����������1��������������0��
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;//�����������ã�break������ѭ��
//		}
//	}
//	/*if (j == i)*///ֻ����һ�����
//		return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
////��ֵ����
//void tmp(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//��ַ����
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
//	//������ʵ��
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
////�����Ķ���
//int get_max(int x, int y)//��ʽ����
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//������ʵ��
//	int max = get_max( a , b );//ʵ��
//
//	printf("max = %d\n", max);
//	return 0;
//}
//#include<stdio.h>
//#include <string.h>//��Ҫ����Ӧ��ͷ�ļ�
//
//int main()
//{
//	char arr[] = "hello world";
//	printf("%s\n", arr);
//
//	memset(arr,'*',5);//��arr1�����ݷ���arr2��
//	//hello world\0
//	//***** world\0
//	//ע�⣺��''���ǡ�����Ĭ�ϡ����ڴ���һ��\0��
//
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//#include <string.h>//��Ҫ����Ӧ��ͷ�ļ�
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "##############";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	strcpy(arr2, arr1);//��arr1�����ݷ���arr2��
//	//hello\0
//	//##############\0
//	//hello\0#######\0
//	//ע�⣺arr2���ַ�������Ӧ�ô���arr1���ַ�������
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