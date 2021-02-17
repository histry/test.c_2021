#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//int main()
//{
//	char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//	printf("%s\n", pstr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int* arr1[10]; //整形指针的数组
//char* arr2[4]; //一级字符指针的数组
//char** arr3[5];//二级字符指针的数组
//int* p1[10];
//int(*p2)[10];
////p1, p2分别是什么？
//int(*p)[10];
////解释：p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个
//指针，指向一个数组，叫数组指针。
////这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。
//int arr[10];
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//	//但是我们一般很少这样写代码
//	return 0;
//}
//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//
//int arr[5];
//int* parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];
//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//
//#include <stdio.h>
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//void test1(int* p)
//{}
////test1函数能接收什么参数？
//void test2(char* p)
//{}
////test2函数能接收什么参数？
//#include <stdio.h>
//void test(int** ptr) {
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(char** p) {
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
////代码1 (*(void (*)())0)();
////代码2
//void (*signal(int, void(*)(int)))(int);
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int* arr[10];
////数组的每个元素是int*
//int (*parr1[10]])();
//int* parr2[10]();
//int (*)() parr3[10];
//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {
//	return a / b;
//}

//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			breark;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//使用函数指针数组的实现：
//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}
//void test(const char* str) {
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void (*(*ppfunArr)[10])(const char*) = &pfunArr;
//	return 0;
//}
//#include <stdio.h>
////qosrt函数的使用者得实现一个比较函数
//int int_cmp(const void* p1, const void* p2) {
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2) {
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size) {
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		比特科技
//			指针和数组笔试题解析
//			* ((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
////一维数组
//int a[] = { 1,2,3,4 };
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a + 0));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(a[1]));
//printf("%d\n", sizeof(&a));
//printf("%d\n", sizeof(*&a));
//printf("%d\n", sizeof(&a + 1));
//printf("%d\n", sizeof(&a[0]));
//printf("%d\n", sizeof(&a[0] + 1));
////字符数组
//char arr[] = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));
//printf("%d\n", sizeof(arr + 0));
//printf("%d\n", sizeof(*arr));
//printf("%d\n", sizeof(arr[1]));
//printf("%d\n", sizeof(&arr));
//printf("%d\n", sizeof(&arr + 1));
//printf("%d\n", sizeof(&arr[0] + 1));
//printf("%d\n", strlen(arr));
//printf("%d\n", strlen(arr + 0));
//printf("%d\n", strlen(*arr));
//printf("%d\n", strlen(arr[1]));
//printf("%d\n", strlen(&arr));
//printf("%d\n", strlen(&arr + 1));
//printf("%d\n", strlen(&arr[0] + 1));
//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));
//printf("%d\n", sizeof(arr + 0));
//printf("%d\n", sizeof(*arr));
//printf("%d\n", sizeof(arr[1]));
//printf("%d\n", sizeof(&arr));
//printf("%d\n", sizeof(&arr + 1));
//printf("%d\n", sizeof(&arr[0] + 1));
//printf("%d\n", strlen(arr));
//printf("%d\n", strlen(arr + 0));
//printf("%d\n", strlen(*arr));
//printf("%d\n", strlen(arr[1]));
//printf("%d\n", strlen(&arr));
//printf("%d\n", strlen(&arr + 1));
//printf("%d\n", strlen(&arr[0] + 1));
//char* p = "abcdef";
//printf("%d\n", sizeof(p));
//printf("%d\n", sizeof(p + 1));
//printf("%d\n", sizeof(*p));
//printf("%d\n", sizeof(p[0]));
//printf("%d\n", sizeof(&p));
//printf("%d\n", sizeof(&p + 1));
//printf("%d\n", sizeof(&p[0] + 1));
//printf("%d\n", strlen(p));
//printf("%d\n", strlen(p + 1));
//printf("%d\n", strlen(*p));
//printf("%d\n", strlen(p[0]));
//printf("%d\n", strlen(&p));
//printf("%d\n", strlen(&p + 1));
//printf("%d\n", strlen(&p[0] + 1));
////二维数组
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a[0][0]));
//printf("%d\n", sizeof(a[0]));
//printf("%d\n", sizeof(a[0] + 1));
//printf("%d\n", sizeof(*(a[0] + 1)));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(*(a + 1)));
//printf("%d\n", sizeof(&a[0] + 1));
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));

//总结： 数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。

//printf("%d\n", sizeof(a[3]));
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//////程序的结果是什么？
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//#include<stdio.h>

//void print1(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//void print2(int(*parr)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(parr+i)+j));
//			printf("%d ", *(parr[i] + j));
//			printf("%d ", (*(parr + i))[j]);
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//
//	return 0;
//}



//#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//int(*parr)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*parr + i));
//	//}
//	//
//	//int(*parr)[10] = &arr;//数组指针
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*parr)[i]);
//	//}
//	
//	/*int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}*/
//	return 0;
//}


//#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//数组指针
//	int* parrr[3];//指针数组
//
//	return 0;
//}




//#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}




//#include<stdio.h>

//int main()
//{
//	const char* ch1 = "abcdef";
//	const char* ch2 = "abcdef";
//
//	if (ch1 == ch2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}




//#include<stdio.h>

//int main()
//{
//	char* ch1 = "abcdef";
//	char* ch2 = "abcdef";
//
//	if (ch1 == ch2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}




//#include<stdio.h>

//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdef";
//
//	if (ch1 == ch2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}




//#include<stdio.h>

//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int arr4[] = { 4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* parr[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *parr[i]);
//	}
//
//	return 0;
//}