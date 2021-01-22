#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	return 0;
}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}

//int Max(int x, int y)//函数定义求最大值
//{
//	if (x > y)
//	{
//		return x;
//	}	
//	else
//		return y;
//}
//#define MAX(x,y) (x>y?x:y)//宏的定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);//函数定义求最大值
//	printf("max=%d\n", max); 
//
//	int mAx = MAX(a, b);
//	//相当于mAx = (x>y?x:y);
//	printf("mAx=%d\n", mAx);
//	return 0;
//}

//extern Add(int, int);//声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}
//int main()
//{
//	extern int g_val;//extern申请外部全局变量的关键字
//	printf("%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量//a创建的变量不销毁了
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)//将循环5次
//	{
//		test();//调用test函数
//		i++;
//	}
//	return 0;
//}
//void test()
//{
//	int a = 1;//每次a=1//函数调用时变量创建，函数结束后变量销毁
//	a++;//a=2
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)//将循环5次
//	{
//		test();//调用test函数
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int num1 = 10;//都是无符号整形的意思
//	typedef unsigned int u_int;//将unsigned int重新定义为（重新起个名为）u_int
//	u_int num2 = 20;//都是无符号整形的意思
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()为函数调用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[]--为下标引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);//20
//	printf("%d\n", max);
//	return 0;
//}

//0为假，非0为真
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	
//	int d = a && b;//&&逻辑与
//	printf("%d\n",d);//0
//	int e = b && c;
//	printf("%d\n", e);//1
//
//	int f = a || b;//&&逻辑非
//	printf("%d\n", f);//1
//	int g = b || c;
//	printf("%d\n", g);//1
//	
//	return 0;
//}

//int main()
//{
//	//++自增
//	//--自减
//	int a = 10;
//	//int b = ++a;//前置++，先++后执行本条语句//a=11,b=11
//	//int b = a++;//后置++，先执行本条语句后++//a=11,b=10
//	//int b = --a;//前置--，先--后执行本条语句//a=9,b=9
//	int b = a--;//后置--，先执行本条语句后--//a=9,b=10
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//~是按位取反的意思
//	printf("%d", b);//-1
//
//	//机器存储的是二进制的补码
//	//int是有符号位的整形
//	//int占4个字节32个bit位
//	//第一位为符号位剩下的31位为数值位
//	//正数的原码，反码，补码相同
//	//正数的符号位为0；负数的符号位为1
//	//负数的符号位不变，数值位按位取反得到反码
//	//负数的反码加1，得到补码
//
//	//0的补码为00000000000000000000000000000000
//	// ~0 为   11111111111111111111111111111111
//// ~0 的反码为 11111111111111111111111111111110
//// ~0 的原码为 10000000000000000000000000000001
//	//~0的十进制为：-1
//	return 0;
//}


//#include <stdlib.h>//system//Windows10以下版本才可正常执行
//#include<string.h>//strcmp
//int main()//关机程序
//{
//	char input[100] = { 0 };//存储输入的信息
//
//	system("shutdown -s -60");//关机命令
//
//again://一直循环
//	printf("你的电脑将在60秒后关机，请输入：我是猪，电脑将取消关机");
//	scanf("%s", input);//%s 字符串 
//	
//	if (strcmp(input, "我是猪") == 0)//判断输入的是否为 我是猪 strcmp--string compare
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		goto again;//一直循环
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("数组中只有一个的数：%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])//将数组每个元素与数组所有元素进行比较
//			{
//				count++; //因为起码会与自己比较所以会count++
//				//如果与其他元素比较后发现相等，count会>1
//			}
//		}
//		if (count == 1)//意思是整个数组中 等于1 的 数 有 >1 个
//		{
//			printf("数组中只有一个的数：%d\n", arr[i]);
//			break;//找到一个后跳出循环
//		}
//	}
//	return 0;
//}
	
//int main()//不借助第三个变量使得变量值交换//用按位异或法实现
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	//按(二进制)位异或//相同为0相异为1
//	a = a ^ b;//a=110
//	b = a ^ b;//b=011
//	a = a ^ b;//a=101
//
//	printf("交换后:a=%d b=%d\n", a, b);
//return 0;
//}
//#include<limits.h>
//int main()//不借助第三个变量使得变量值交换//用加减法实现
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	//整形溢出的问题
//	//整形int占4个字节32个bit位
//	//INT_MAX;//用来测试int存储的最大值
//	//int可存储的最大数字为：2147483647
//	//当a和b都非常大的时候，将a和b的值的和放入a中将可能会导致整形溢出
//	//那么a的值将会不准确,b的值也会不准确了
//
//	//总之采取这种方法
//	//a和b的范围将减少一半
//
//	a = a + b;//a为a和b的和
//	b = a - b;//a为a和b的和,b放的是a和b的和减去b的值,就是原来a的值
//	a = a - b;//a为a和b的和,a放的是a和b的和减去a的值,就是原来b的值
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()//借助第三个变量使得变量值交换
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	int c = a;
//	a = b;
//	b = c;
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}
