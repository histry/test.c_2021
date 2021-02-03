#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2.3,4,5 };

	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2.3,4,5 };
//	printf("%d ", sizeof(arr));//40
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2.3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//九趟冒泡排序//进行9次两两相邻比较
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//进行j-1次两两相邻比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//九趟冒泡排序//进行9次两两相邻比较
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//进行j-1次两两相邻比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i =0; i < sz - 1 ; i++)//九趟冒泡排序//进行9次两两相邻比较
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++)//进行j-1次两两相邻比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	for (i = 10-1; i > 0; i--)//九趟冒泡排序//进行9次两两相邻比较
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)//进行j-1次两两相邻比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)//打印每一行的元素
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//打印具体每个元素的地址
//		{
//			printf("&arr[%d][%d]=%p\t",i,j, &arr[i][j]);
//		}
//		printf("\n");//每一行后换行
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)//打印每一行的元素
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//打印具体每个元素
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//每一行后换行
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int arr[3][4];//3行4列
//	int arr[][4] = {{1,2,3},{4,5}};//行可以省略但是列不能省略,但是一定需要初始化
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("& arr[ %d ] = %p \n", i, &arr[i]);
//	}
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	for (i = 0; i < (int)strlen(arr); i++)//函数strlen 返回的是无符号整形，需要强制类型转换
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//不完全初始化，其后的元素将默认初始化为0
//	int arr1[10] = {1,2,3,4};
//	// 1 2 3 4 0 0 0 0 0 0
//	char arr2[5] = {'a','b'};
//	//a b 0 0 0
//	char arr3[5] = "ab";
//	//a b \0 0 0
//	char arr4[5] = { "ab" };
//	//a b \0 0 0
//	char arr5[] = "abcdefg";//当未指定数组大小时一定要初始化，根据初始化的内容确定数组元素，确定数组空间长度
//	//a b c d e f g \0
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[10];
//	//arr1数组用来存放10个整形的元素
//	char arr2[5];
//	//arr2数组用来存放5个字符型的元素
//	int n = 5;
//	int arr3[n];//错误，arr[]内的必须是整形或整形表达式
//	return 0;
//}