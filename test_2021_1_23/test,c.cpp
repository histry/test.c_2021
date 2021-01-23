#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = getchar();//输入一个字符
//	putchar(ch);//输出ch中的内容
//	printf("%c", ch);
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);//getchar是获取一个字符的意思
					//EOF是文件的结束标志//并不是输入EOF结束//而是输入CTRL+z程序结束
	return 0;
}
//int main()
//{
//	int i = 1;
//	while (i <= 10)//判断循环的条件
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;//遇到continue语句将直接跳出当前（本次）循环
//					 //来到判断条件处，进行判断，若为真，则继续循环，若为假则跳出循环
//		}
//		printf("%d ", i);//打印1到10,10个数
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)//判断循环的条件
//	{
//		if (i == 5)
//		{
//			break;//遇到break语句将直接跳出循环
//		}
//		printf("%d ", i);//打印1到10,10个数
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	if (0)
//		printf("hehe\n");
//	if (1)
//		printf("haha\n");
//   return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("工作日\n");////case后必须为整形常量表达式
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1+0:
//		printf("星期1\n");////case后必须为整形常量表达式
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("星期1\n");
//	else if (day == 2)
//		printf("星期2\n");
//	else if (day == 3)
//		printf("星期3\n");
//	else if (day == 4)
//		printf("星期4\n");
//	else if (day == 5)
//		printf("星期5\n");
//	else if (day == 6)
//		printf("星期6\n");
//	else if (day == 7)
//		printf("星期7\n");
//	return 0;
//}
//int main()//判断奇数
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 != 0)
//	{
//		printf("%d ", i);
//	}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; (2*i) < 100 ; i++)
//	{
//		printf("%d ", 2*i - 1);
//	}
//	return 0;
//}
//int main()//判断奇数
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input % 2 != 0)
//	{
//		printf("%d是奇数\n", input);
//	}
//	else
//		printf("不是奇数");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (a = 2)
//	{
//		printf("hehe\n");
//	}
//	if (a == 2)
//	{
//		printf("haha\n");
//	}
//	if (2 == a)//建议这么写，如果不是判断时，编译器将会报错，是好的代码风格
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//	else
//	//		printf("haha\n");
//	//else
//	//	printf("haha\n");
//	if (a == 1)//相当于
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 80;
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else
//	{
//			 if (age >= 18 && age < 30)
//	{
//	printf("青年");
//	}
//			else if (age >= 30 && age < 60)
//	{
//	printf("中年");
//	}
//			else if (age >= 60 && age < 100)
//	{
//	printf("老年");
//	}
//	}
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else//age>=18
//	{
//		printf("成年");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	if (age >= 18 && age < 30)
//	{
//		printf("青年");
//	}
//	if (age >= 30 && age < 60)
//	{
//		printf("中年");
//	}
//	if (age >= 60 && age < 100)
//	{
//		printf("老年");
//	}
//	return 0;
//}
//int main()
//{
//	if (表达式)
//	{
//		//语句1;//如果表达式为真（表达式的值默认为1），语句1执行
//	}
//	else
//	{
//		//语句2;//如果表达式为假（表达式的值默认为0），语句2执行
//	}
//	return 0;
//}
//int main()
//{
//	if (表达式)//如果表达式为真（表达式的值默认为1），语句执行//如果表达式为假（表达式的值默认为0），语句不执行
//	{
//		//语句
//	}
//	return 0;
//}
//int main()
//{
//	printf("hello world");;//空语句
//	return 0;
//}
//int sum(int m, int n)
//{
//    if (m > 0 && n > 0)
//    {
//        if (m < n)
//        {
//            int tmp = m;
//            m = n;
//            n = tmp;
//        }
//        int sum = 0;
//        int i = 0;
//        for (i = 1; n < m; i++)
//        {
//            n = n + 1;
//            sum = sum + n;
//        }
//        return sum;
//    }
//    else if (m > 0 && n < 0)
//    {
//        if (m < n)
//        {
//            int tmp = m;
//            m = n;
//            n = tmp;
//        }
//        int sum = 0;
//        int i = 0;
//        n = -n;
//        for (i = 1; n < m ; i++)
//        {
//            n = n + 1;
//            sum = sum + n;
//        }
//        return sum;
//    }
//    else if (m < 0 && n > 0)
//    {
//        int sum = 0;
//        int i = 0;
//        m = -m;
//        if (m < n)
//        {
//            int tmp = m;
//            m = n;
//            n = tmp;
//        }
//        for (i = 1; n < m; i++)
//        {
//            n = n + 1;
//            sum = sum + n;
//        }
//        return sum;
//    }
//    else
//    {
//        n = -n;
//        m = -m;
//        if (m < n)
//        {
//            int tmp = m;
//            m = n;
//            n = tmp;
//        }
//        int sum = 0;
//        int i = 0;
//        for (i = 1; n < m; i++)
//        {
//            n = n + 1;
//            sum = sum + n;
//        }
//        return -sum;
//    }
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    printf("sum = %d\n", sum(m, n));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 4; i++)
//    {
//        for (n = 0; n < i - 1; n++)
//        {
//            printf(" ");
//        }
//        for (j = 4; j > i; j--)
//        {
//            printf("* ");
//        }
//        if (j = i)
//        {
//            printf("*");
//        }
//        if (i < 4)
//        {
//            printf("\n");
//        }     
//    }
//    return 0;
//}
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 4; i++)
//    {
//        for (n = 0; n < i - 1; n++)
//        {
//            printf(" ");
//        }
//        for (j = 4; j >= i; j--)
//        {
//            printf("* ");        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + 1.0 / (2*i - 1);
//	}
//	printf("sum = %.6lf", sum);
//	return 0;
//}
//#define N 4
//int main()
//{
//	int target = 0;
//	scanf("%d", &target);
//	int arr[N][N] = { 0 };
//	int n = N;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] == target)
//			{
//				printf("true");
//			}
//		}
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int nums[9] = {1, 2, 3 ,4, 5, 6, 7, 8, 9};
//	//int k = 0;
//	//for (k = 0; k < 5; k++)
//	//{
//	//	scanf("%d", &nums[k]);
//	//}
//	//scanf("%d", nums);
//	//int sz = strlen(nums);
//	int sz = 9;
//	int target = 0;
//	scanf("%d", &target);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (i!=j)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					printf("%d %d\n", i, j);
//				}
//				//break;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//}
//#include <string.h>
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C语言程序设计",50 };
//	printf("b的书价为:%d\n", b.prise);
//
//	b.prise = 15;
//	printf("b降价后的书价为:%d\n", b.prise);
//	return 0;
//}
//#include <string.h>
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C语言程序设计",50 };
//	printf("b的书名为:%s\n", b.name);
//	strcpy(b. name,"c++");
//	printf("b修改后的书名为:%s\n", b.name);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C语言程序设计",50 };
//	printf("b的书名为:%s\n", b.name);
//	b, name = "c++";
//	printf("b的书名为:%s\n", b.name);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C语言程序设计",50 };
//	struct book* p = &b;//struct book*为结构体的指针类型；p为结构体的指针变量
//	printf("b的书名为:%s\n", (*p).name);
//	printf("b的书价为:%d\n", (*p).prise);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C语言程序设计",50 };
//	struct book* p = &b;//struct book*为结构体的指针类型；p为结构体的指针变量
//	printf("b的书名为:%s\n", p->name);
//	printf("b的书价为:%d\n", p->prise);
//	return 0;
//}
//struct book//结构体--自己创建的一种描述复杂对象的类型
//{
//	//复杂对象的细化，变为一个一个好描述的简单对象
//	char name[20];//书名
//	short prise;//书价
//};//;不可缺少用来结束类型定义的
//int main()
//{
//	struct book b = { "C语言程序设计",50 };//创建变量b1；b1的书名为C语言程序设计；书价为50
//	printf("b的书名为:%s\n", b.name);
//	printf("b的书价为:%d\n", b.prise);
//
//	b.prise = 15;
//	printf("b降价后的书价为:%d\n", b.prise);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}