#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int sum = 0;
	int f1 = 1;
	int f2 = 1;
	int i;
	int n;
	printf("输入第n个数:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}
	printf("%d", sum);
	printf("\n");
	return 0;
}



//int fibo(int n) {
//	int f1;
//	if (n == 1 || n == 2) {
//		f1 = 1;
//		return f1;
//	}
//	else {
//		return (fibo(n - 2) + fibo(n - 1));
//	}
//}
//#include <stdio.h>
//int main() {
//	int  n;
//	printf("输入n的值:\n");
//	scanf("%d", &n);
//	printf("%d", fibo(n));
//	printf("\n");
//	return 0;
//}

// 2.编写一个函数实现n^k，使用递归实现


//int square(int n, int k) {                              //k来记录次方数
//	if (k == 1)                                               //当减为1时返回n的值
//		return n;
//	else {
//		return square(n, k - 1) * n;                    //返回调用的值乘以这次的值再返回给上一层
//	}
//}
//#include <stdio.h>
//int main() {
//	int n, k;
//	printf("输入这个数字:\n");
//	scanf("%d", &n);
//	printf("输入这个数得次方:\n");
//	scanf("%d", &k);
//	printf("%d", square(n, k));
//	return 0;
//}

// 3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
// 例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//
//#include<stdio.h>
//int  DigitSum(int n) {
//	if (n / 10 == 0)                                            //如果他的值小于10的话,就返回这个数字,也就是最后一位
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;           //完成累加值       
//}
//int main() {
//	int number;
//	printf("请输入一个数字:\n");
//	scanf("%d", &number);
//	printf("%d", DigitSum(number));
//	printf("\n");
//	return 0;
//}

// 4. 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列。
// 要求：不能使用C函数库中的字符串操作函数。

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void reverse_string(char* string) {
//	char p;                                                          //定义一个字符来存储第一个地址自增后第一个字符
//	p = *string;
//	if (*(string++) == '\0')
//		return;                                                       //如果是结束符号,那么返回
//	else
//		reverse_string(string++);
//	printf("%c", p);                                               //顺序执行输出p存储的字符,再返回上一层
//}
//int main() {
//	char string[20];
//	gets(string);
//	reverse_string(string);
//	printf("\n");
//	return 0;
//}

// 5.递归分别实现strlen

//#include<stdio.h>
//void get_strlen(char* str) {
//	static  int count = 0;                     //定义了一个静态变量来记录数循环次数,循环了几次就是有几个长度
//	if (*(str++) == '\0')
//		printf("%d", count);
//	else {
//		count++;
//		get_strlen(str++);
//	}
//}
//int main() {
//	char string[20];
//	gets(string);
//	get_strlen(string);
//	printf("\n");
//	return 0;
//}

//// 6.递归实现求n的阶乘
//
//#include <stdio.h>
//int fac(int n) {
//	if (n == 1)                                              //如果是1返回值为1      2*fac(2-1)   值为2,在返回给上一层
//		return 1;
//	else return n * fac(n - 1);
//}
//int main() {
//	int n;
//	printf("输入一个数字:\n");
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	printf("\n");
//	return 0;
//}

// 7.递归方式实现打印一个整数的每一位
//
//#include <stdio.h> 
//int  fun(int number) {
//	if (number > 9)
//	{
//		fun(number / 10);                                       //运行到最后输出1然后返回上一层函数                                 
//	}
//	printf("%d ", number % 10);                        //函数顺序执行,输出2接着返回上一层调运顺序执行3,4,
//}
//int main() {
//	int number;
//	printf("输入一个数字:\n");
//	scanf("%d", &number);
//	fun(number);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	return 0;
//}