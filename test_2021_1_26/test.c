#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int x = 0;
	int min = 0;
	scanf("%d", &min);
	for (i = 1; i < n; i++)
	{
		scanf("%d", &x);
		if ( x < min)
		{
			min = x;
		}
	}
	printf("min = %d\n",min);
	return 0;
}
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
//		sum = sum + y * 1.0 / x ;
//		int tmp = x;
//		x = y;
//		y = x + tmp;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		sum = sum + (i*1.0 + 1.0) / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	int i = 0;
//		printf("pow(3,0) = 1\n");
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * 3;
//		printf("pow(3,%d) = %d\n", i, sum);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long int sum = 1 ;
//	int i = 0;
//	if(n>1)
//		printf("pow(%d,0) = 1\n", n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * n;
//		printf("pow(%d,%d) = %d\n", n, i, sum);
//	}
//	return 0;
//}
//int Add(int a, int b)
////int(函数的返回类型)Add（函数名）（int a,int b）(函数的形式参数为int类型的变量)
////没有分号
//{
//	//函数内的变量只在函数调用后申请，函数调用结束后销毁
//	int z = a + b;//函数的实现
//}
//	return z;//z函数的返回值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	//函数的调用 Add(a,b);a,b为函数的实际参数
//	//函数调用时将实际参数传递给形式参数
//	//相当于函数实际值的赋值给形式参数
//	//
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hello\n");
//goto again;
//	printf("hehe\n");
//again:
//	printf("haha\n");
//	return 0;
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
