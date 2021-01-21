#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//计算数组元素个数的方式
//	//总空间除以每个元素所占的空间的大小
//	
//	int arr[10] = { 0 };//4*10=40//一个元素占4个字节，有10个元素所以总共占40个字节
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	printf("%d\n", sz);//10
//	return 0;
//}

//int main()
//{
//	//sizeof
//	//计算数组所占空间的大小，单位是字节
//	int arr[10] = { 0 };//4*10=40//一个元素占4个字节，有10个元素所以总共占40个字节
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr);
//	return 0;
//}

//int main()
//{
//	//sizeof
//	//计算变量所占空间的大小，单位是字节
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a );//4
//	//变量名不一定要打括号（）
//	//变量类型一定要打括号()
//	//最好都打上括号（）
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int );//错误
//	return 0;
//}

//int main()
//{
//	int a = +3;// + 一般都会省略
//	int b = -a;
//	return 0;
//}

//int main()
//{
//	//!逻辑非
//	//逻辑中0表示假
//	//非0表示真
//	int a = 10;
//	printf("%d\n", a);//10
//	printf("%d\n", !a);//0
//
//	int b = 0;
//	printf("%d\n", b);//0
//	printf("%d\n", !b);//1
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//将20赋值给a
//
//	a = a + 10;//将a+10赋值给a
//	a += 10;//给a自己加上10
//			//这两种写法完全等价
//
//	a *= 10;//符合赋值符
//	a = a * 10;
//
//	a /= 10;//符合赋值符
//	a = a / 10;
//	
//	a %= 10;//符合赋值符
//	a = a % 10;

//	a ^= 10;//符合赋值符
//	a = a ^ 10;
//	
//	a &= 10;//符合赋值符
//	a = a & 10;
//	
//	a |= 10;//符合赋值符
//	a = a | 10;
//	
//	a %= 10;//符合赋值符
//	a = a % 10;
//	return 0;
//}

//int main()
//{
//	//位操作
//	//按位异或
//	int a = 3;    //00000000000000000000000000000011
//	int b = 5;    //00000000000000000000000000000101
//	int c = a ^ b;//00000000000000000000000000000111
//	//  1异或1
//	//	0为假，1为真
//	//  对应的二进制位，相同为0，不同为1
//	//	所以0按位与1为真所以为1
//	//	所以1按位与0为真所以为1
//	//	所以1按位与1为真所以为0
//	//	所以为110
//	printf("%d\n", c);//1*2*2+1*2+0=6
//	return 0;
//}

//int main()
//{
//	//位操作
//	//按位或
//	int a = 3;    //00000000000000000000000000000011
//	int b = 5;    //00000000000000000000000000000101
//	int c = a | b;//00000000000000000000000000000111
//	//  1或1
//	//	0为假，1为真//0和1按位与或为真//0和0的按位或为假//其他都为真
//	//	所以0按位与1为真所以为1
//	//	所以1按位与0为真所以为1
//	//	所以1按位与1为真所以为1
//	//	所以为111
//	printf("%d\n", c);//1*2*2+1*2+1=7
//	return 0;
//}


//int main()
//{
//	//位操作
//	//操作的是二进制位
//	//&按位与
//	//|按位或
//	//^按位异或
//
//	//按位与
//	int a = 3;    //00000000000000000000000000000011
//	int b = 5;    //00000000000000000000000000000101
//	int c = a & b;//00000000000000000000000000000001
//	//1与1
//	//0为假，1为真//0和1按位与为假//只有1和1的按位与为真//其他都为假
//	//所以0按位与1为假所以为0
//	//所以1按位与0为假所以为0
//	//所以1按位与1为真所以为1
//	//所以为001
//	printf("%d\n", c);//1
//	return 0;
//}



//int main()
//{
//	//左移>>//右移开口向右
//	//右移<<//左移开口向左
//	//开口朝哪边就是往哪移
//	//移的是二进制位
//
//	int a = 1;
//	//(整形)int   a=1   1占4个字节,32个bit位
//	//1的二进制为:00000000000000000000000000000001
//	int b = a << 2;//a右移两位
//	//左边丢弃右边补0
//	//b的二进制为:00000000000000000000000000000100
//	//b的十进制为:1*2*2+0+0=4
//	printf("%d", b);//4
//	return 0;
//}

//int main()
//{
//	int a = 5 / 2;//2....1//2
//	printf("%d\n", a);
//
//	float c = 5.0 / 2;
//	printf("%.1f\n", c);//2.5
//
//	int b = 5 % 2;//2....1//1
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//有10个int类型的数字组成的数组叫做arr1
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	char ch[5] = "0";//有5个char类型的字符组成的数组叫做ch
//	float arr2[10];//有10个float类型的数字组成的数组叫做arr2
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//	int i = 0;
//	while (i < 100)//sum=0+1+2+3+4+5+6+7+8+9+....+99
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	while (input == 0)
//	{
//		if (input == 0)
//		{
//			printf("请输入：1");
//			scanf("%d", &input);
//			input = 1;
//		}
//		else
//			input = 0;
//	}
//	printf("%d", input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int sum=Add(x, y);
//	printf("sum=%d", sum);
//	return 0;
//}

//int main()
//{
//	printf("你是男生还是女生（1/0）：");
//	int input = 0;
//	scanf("%d", &input);
//	
//	if (input == 1)
//		printf("男生");
//	else
//		printf("女生");
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", '\x61');//6*16+1=97
//	printf("%c\n", '\x61');//a
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("%d\n", '\32');//3*8+2*1=26
//	return 0;
//}


//int main()
//{
//	//printf("%c",''');//报错
//	printf("%c", '\'');
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	printf("c:\\test\\32\\test.c\\n");
//	return 0;
//}

//int main()
//{
//
//	char arr1[] = "abc";
//	//数组里面放的是'a','b','c','/0';
//	printf("%d\n", sizeof(arr1));
//
//	char arr2[] = { 'a','b','c' };
//	//数组里面放的是'a','b','c';
//	printf("%d\n", sizeof(arr2));
//
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%d\n", sizeof(arr3));
//
//	char arr4[] = { 'a','b','c',0 };
//	printf("%d\n", sizeof(arr4));
//
//	return 0;
//}


//int main()
//{
//
//	char arr1[]="abc";
//	//数组里面放的是'a','b','c','/0';
//	printf("%d\n", strlen(arr1));
//
//	char arr2[] = { 'a','b','c' };
//	//数组里面放的是'a','b','c';
//	printf("%d\n", strlen(arr2));
//
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr3));
//
//	char arr4[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr4));
//
//	return 0;
//}

//int main()
//{
//
//	char arr1[]="abc";
//	//数组里面放的是'a','b','c','/0';
//	printf("%s\n", arr1);
//
//	char arr2[] = { 'a','b','c' };
//	//数组里面放的是'a','b','c';
//	printf("%s\n", arr2);
//
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%s\n", arr3);
//
//	char arr4[] = { 'a','b','c',0 };
//	printf("%s\n", arr4);
//
//	return 0;
//}


//int main()
//{
//	"abcdefg";//常量字符串
//	"";//空字符串
//	//都不会报错
//	return 0;
//}


//enum Sex//放在这里面的都是枚举常量，不可修改
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	enum Sex s = MALE;
//	printf("%d\n", s);//0
//	s = FEMALE;//s是变量，可以被修改
//	printf("%d\n", s);//1
//	return 0;
//}

//int fun(int n, int m)
//{
//	return n + m;
//}
//#define MAX 10//相当于常数MAX=10//推荐用全大写
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("MAX=%d\n", MAX);//10
//	int n = 10;
//	int m = 10;
//	printf("sum=%d", fun(n, m));
//	return 0;
//}

//int main()
//{
//	//字面常量//不会报错//一个;前为一条语句
//	   /* 1;
//		2.0;
//		3.14;*/
//	const int a = 10;//常变量//具有常量的性质本质上还是一个变量
//	a = 20;//具有常数的性质//不可修改//编译器会报错
//	int arr[a] = { 0 };//[要为一个常量]//a本质上是个变量
//	return 0;
//}