#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if ( strcmp(password, "123456") == 0 )
		{
			printf("输入正确\n");
			break;
		}		
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}
//#include<string.h>
//int main()//交换打印
//{
//	char ch1[] = "hello world!!!!";
//	char ch2[] = "###############";
//	int sz = strlen(ch1)-1;
//	int mid=sz/2;
//	int i = 0;
//	for (i=0,sz;i<=mid;i++,sz--)
//	{
//		ch2[i] = ch1[i];
//		ch2[sz] = ch1[sz];
//		printf("%s\n", ch2);
//	}
//	return 0;
//}
//int main()//二分查找一定是查找有序的数组
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tage = 0;
//	printf("请输入要查找的数：");
//	scanf("%d", &tage);
//	int right = sz-1;//元素右下标
//	int left = 0;//元素右下标
//	int mid = (right+ left) / 2;//中间元素下标
//	while(left <= right)//元素左下标一定小于等于元素右下标
//	{
//		if (tage < arr[mid])//目标数小于中间元素时
//		{
//			right = mid-1;
//			mid = (right + left) / 2;
//		}
//		if (tage > arr[mid])//目标数大于中间元素时
//		{
//			left = mid+1;
//			mid = (right + left) / 2;
//		}
//		if(tage == arr[mid])
//		{
//			printf("找到了：下标为：%d\n",mid);
//			break;
//		}	
//	}
//	if (right < left)
//				printf("没找到\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tage = 0;
//	printf("请输入要查找的数：");
//	scanf("%d", &tage);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (tage == arr[i])
//		{
//			printf("找到了，这个数在这个有序数组的下标为：%d\n", i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("没找到\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum1 = 1;
//	int sum2 = 0;
//	for (i = 1; i <= n; i++)//1+1*2+1*2*3=9
//	{
//		sum1 = sum1 * i;
//		sum2 = sum2 + sum1;
//	}
//	printf("sum = %d", sum2);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	for (i=1;i<=n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 5;
//	int sum = 1;
//	for ( ; n > 0; n--)
//	{
//		sum = sum * i;//n个i相乘
//	}
//		printf("sum = %d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{	
//		for (; j < 10; j++)
//		{
//			printf("hehe");//10*10---将打印100个hehe
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i <= 9 ; i++)
//	{
//		printf("%d ", arr[i]);//打印arr[0]---->arr[9]
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i=0;i < 10;i++)
//	{
//			printf("%d ",arr[i]);//打印arr[0]---->arr[9]
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while ( i <= 10)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//创建循环变量
//	for (i = 1; i <= 10; i++)//循环10次
//	{
//		printf("%d ", i);//打印1-10,10个数字
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//循环条件的初始化
//	while (i < 10)//循环的判断条件
//	{
//		//功能实现
//		i++;//循环变量的调整
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//功能实现
//	}
//	do
//	{
//
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//记得打括号，优先级不一样
//	{
//		if (ch < '0' || ch>'9')//除了1-9的数字，其他的都不打印
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s", password);//scanf函数一遇到空格，回车等就会结束读取缓冲区内的字符
//	//我们输入的字符都是在储存在缓冲区这块空间中
//	//输入时输入空格，回车都会提示编译器开始读取储存区的字符
//	//scanf,getchar等输入函数，会读取我们在缓冲区存储的字符
//	//如果缓冲区中有字符,并且有输入函数的情况下，将直接读取
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//将缓冲区的字符（从空格开始往后）一一读取（直到读取完到\n结束）
//	{
//		;//空语句//不需要额外执行语句
//	}
//	printf("请确认(Y/N)\n");
//	ch = getchar();//读取\n
//	if (ch == 'Y')//注意字符一定要打‘’，因为不会报错但运行不了
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("放弃确认\n");
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	//char password[20] = 0;
//	char password[20];
//	scanf("%s", password);
//	printf("%s", password);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//end of file----EOF文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//getchar();//可以读取字符，但是读取的字符被随意的放在一块空间里，将找不到了
//	//putchar();//就没办法读取到上一步输入的字符了//不知道要打印的是什么，也会报错
//	//所以推荐将每个getchar的返回值（是该输入字符的ASCII码值）储存在一个变量里（好的代码习惯）
//	int ch = getchar();//接受getchar读取字符的ASCII码值
//	putchar(ch);//将根据变量中储存的ASCII码值，以此打印输入的字符,就不会随意打印储存区未读取的字符了
//	printf("\nch = %d", ch);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int ch = getchar();
//		getchar();
//		putchar(ch);
//	}
//	return 0;
//}