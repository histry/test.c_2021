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
//	//������
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//����ð������//����9���������ڱȽ�
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//����j-1���������ڱȽ�
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
//	for (i = 0; i < sz - 1; i++)//����ð������//����9���������ڱȽ�
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//����j-1���������ڱȽ�
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
//	for (i =0; i < sz - 1 ; i++)//����ð������//����9���������ڱȽ�
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++)//����j-1���������ڱȽ�
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
//	for (i = 10-1; i > 0; i--)//����ð������//����9���������ڱȽ�
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)//����j-1���������ڱȽ�
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
//	for (i = 0; i < 3; i++)//��ӡÿһ�е�Ԫ��
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//��ӡ����ÿ��Ԫ�صĵ�ַ
//		{
//			printf("&arr[%d][%d]=%p\t",i,j, &arr[i][j]);
//		}
//		printf("\n");//ÿһ�к���
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)//��ӡÿһ�е�Ԫ��
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//��ӡ����ÿ��Ԫ��
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//ÿһ�к���
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int arr[3][4];//3��4��
//	int arr[][4] = {{1,2,3},{4,5}};//�п���ʡ�Ե����в���ʡ��,����һ����Ҫ��ʼ��
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
//	for (i = 0; i < (int)strlen(arr); i++)//����strlen ���ص����޷������Σ���Ҫǿ������ת��
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//����ȫ��ʼ��������Ԫ�ؽ�Ĭ�ϳ�ʼ��Ϊ0
//	int arr1[10] = {1,2,3,4};
//	// 1 2 3 4 0 0 0 0 0 0
//	char arr2[5] = {'a','b'};
//	//a b 0 0 0
//	char arr3[5] = "ab";
//	//a b \0 0 0
//	char arr4[5] = { "ab" };
//	//a b \0 0 0
//	char arr5[] = "abcdefg";//��δָ�������Сʱһ��Ҫ��ʼ�������ݳ�ʼ��������ȷ������Ԫ�أ�ȷ������ռ䳤��
//	//a b c d e f g \0
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[10];
//	//arr1�����������10�����ε�Ԫ��
//	char arr2[5];
//	//arr2�����������5���ַ��͵�Ԫ��
//	int n = 5;
//	int arr3[n];//����arr[]�ڵı��������λ����α��ʽ
//	return 0;
//}