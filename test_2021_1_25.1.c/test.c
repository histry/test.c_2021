#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			int mul = 0;
			mul = i * j;
			printf("%d*%d=%-2d ", j, i, mul);
		}
		printf("\n");
	}
	return 0;
}
//int main()
//{
//	int arr[10] = { -10,-9,-8,-7,-6,-5,-4,-3,-2,-1 };
//	int max = arr[0];//max最大值不能一开始就赋值为0
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {-10,-9,-8,-7,-6,-5,-4,-3,-2,-1};
//	int max = 0;//max最大值不能一开始就赋值为0
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	//1.0/1+1.0/2+1.0/3+1.0/4........
//	//1.0+0.5+....
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	int flage = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + (1.0 / i)*flage;
//		flage = -1 * flage;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count ++;
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 9 == 0)
//		{
//			count++;//计数器，计算符合条件的次数
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i/2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i/2)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//打印100-200之间的素数//除了自己和1外不能被其他数整除
//	{
//		//判断i是否为素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)//有两种情况//1.break//2.j=i
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i >= 1000 && i <= 2000; i++)//1000-2000
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);//打印闰年
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=1000 ; i >= 1000 && i <= 2000 ; i++)//1000-2000
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);//打印闰年
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);//打印闰年
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int r = 0;
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int r = 0;
//	while ( m % n != 0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	while ( n <= 100 )
//	{
//		n = 3 * i;
//		if (n <= 100)
//			printf("%2d ", n);
//		if (i % 5 == 0 )
//			printf("\n");
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d#%d#%d", &a, &b, &c);//2 1 3
//		if (a < b)
//		{
//			int tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if (a < c)
//		{
//			int tmp = c;
//			c = a;
//			a = tmp;
//		}
//		if (b < c)
//		{
//			int tmp = b;
//			b = c;
//			c = tmp;
//		}
//	printf("%d %d %d", a, b, c);//3 2 1
//	return 0;
//}