#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define N 10//失败
//void fun(int* p, int n)
//{
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (*(p + j) < *(p + i))
//			{
//				int tmp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[N] = { 10,9,8,7,6,5,4,3,2,1 };
//	int n = N;
//	fun(arr, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%2d ", arr[i]);
//		//if ((i+1)%5==0)
//		//{
//		//	printf("\n");
//		//}
//	}
//	return 0;
//}



//int main()
//{ 
//	int a = 10;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}



//int a = 10;//全局变量
//int main()
//{ 
//	printf("%d\n", a);
//	int a = 20;//局部变量
//	printf("%d\n", a);
//	return 0;
//}



//int a = 10;//全局变量
//int main()
//{ 
//	printf("%d\n", a);
//	int b = 20;//局部变量
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	char ch = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	printf("%f\n", ch);
//	printf("%lf\n", ch);
//	printf("\n");
//	int a = 1;
//	printf("%c\n", a);
//	printf("%d\n", a);
//	printf("%f\n", a);
//	printf("%lf\n", a);
//	printf("\n");
//	float b = 2.1;
//	printf("%c\n", b);
//	printf("%d\n", b);
//	printf("%f\n", b);
//	printf("%lf\n", b);
//	printf("\n");
//	double c = 5.1;
//	printf("%c\n", c);
//	printf("%d\n", c);
//	printf("%f\n", c);
//	printf("%lf\n", c);
//	printf("\n");
//	return 0;
//}




//int main()
//{
//
//	printf("%d\n",sizeof(char));//1
//	
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(short));//2
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//	
//	return 0;
//}




//int main()
//{
//	char ch = 'a';
//	printf("%c\n", ch);
//	int a = 1;
//	printf("%d\n", a);
//	float b = 2.1;
//	printf("%f\n", b);
//	double c = 5.1;
//	printf("%lf\n", c);
//	return 0;
//}




//int main()
//{
//	printf("hello world");
//	//print function打印函数
//	//printf是C语言库函数中提供的函数
//	//所以要告诉编译器我们将使用printf这个函数
//	//需要引头文件stdio.h——>standard input output 标准输入输出
//	//#include<stdio.h>
//	return 0;
//}




//一个工程里main函数有且仅有一个
//int main()//main函数是程序的入口
//{
//    //程序执行内容
//	return 0;
//}
//void main()
//{
//	/*程序执行内容*/
//	/*printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");*/
//	//printf("hello world\n");
//	//printf("hello world\n");
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}