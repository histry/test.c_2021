#define _CRT_SECURE_NO_WARNINGS 1
//本题要求实现一个根据学生成绩设置其等级，并完成统计不及格人数的函数。（10分）

//说明：其中p是指向学生信息的结构体数组的指针，n是数组元素个数。
//学号num、姓名name和成绩score均已经存储。
//SetGrade函数需要根据学生的成绩score设置其等级grade。
//等级设置：90－100为A，80－89为B，70－79为C，60 - 69为D，0－59为E。
//同时，SetGrade还需要返回不及格的人数。


//#include <stdio.h>
//#define MAXN 10
//
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//
//int SetGrade(struct student* p, int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (p[i].score < 60)
//        {
//            p[i].grade = 'E';
//            count++;
//        }
//        else if (p[i].score < 70)
//            p[i].grade = 'D';
//        else if (p[i].score < 80)
//            p[i].grade = 'C';
//        else if (p[i].score < 90)
//            p[i].grade = 'B';
//        else 
//            p[i].grade = 'A';
//    }
//    return count;
//}
//
//int main()
//{
//    struct student stu[MAXN];
//    int n, i, count;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    struct student* p = stu;
//    count = SetGrade(p, n);
//    printf("The count: %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    return 0;
//}

//当工资不超过5000时，税率为0；
//
//当工资在区间(5000, 8000]时，超过5000部分，税率为3% ；
//
//当工资在区间(8000, 12000]时，超过8000部分，税率为10% ；
//
//当工资在区间(12000, 25000]时，超过12000部分，税率为20% ；
//
//当工资超过25000时，超过25000部分，税率为25% 。
//
//例如：假设某程序员月收入扣除保险金、公积金
//以后为 12900 元。起征点为 5000，则扣除起征点以后的余额 7900 元需要纳税。 
//其中前 3000 元按 3 % 纳税 90 元， 3000 ~7000 之间的 4000 元按 10 % 纳税 400 元， 
//7000 ~2000 元之间的 900 元按 20 % 纳税 180 元，
//个人所得税款合计为 3000 × 3 % +4000 × 10 % +900 × 20 % = 90 + 400 + 180 = 670(元)
//输入格式:
//输入在一行中给出非负工资。
//输出格式：
//在一行输出个人所得税，精确到小数点后2位。
//#include<stdio.h>
//int main()
//{
//	double gz = 0.0;
//	scanf("%lf", &gz);
//	if (gz < 5000)
//		printf("0.00\n");
//	else if (gz <= 8000)
//		printf("%.2lf\n", (gz - 5000) * 0.03);
//	else if (gz <= 12000)
//		printf("%.2lf\n", (8000 - 5000) * 0.03 + (gz - 8000) * 0.1);
//	else if(gz<= 25000)
//		printf("%.2lf\n", (8000 - 5000) * 0.03 + (12000 - 8000) * 0.1+ (gz - 12000) * 0.2);
//	else
//		printf("%.2lf\n", (8000 - 5000) * 0.03 + (12000 - 8000) * 0.1 + (25000 - 12000) * 0.2+ (gz - 25000) * 0.25);
//	return 0;
//}

//#include <stdio.h>
//
//#define MAXN 10
//
//int even(int n)
//{
//    //函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0
//    if (n%2 == 0)
//        return 1;
//    return 0;
//}
//
//int EvenSum(int List[], int N)
//{
//    //函数EvenSum负责计算并返回传入的N个整数List[]中所有偶数的和
//    int sum = 0;
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        if (List[i] % 2 == 0)
//        {
//            sum += List[i];
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%d", &List[i]);
//    printf("偶数和为：%d\n", EvenSum(List, N));
//    printf("偶数序列为：");
//        for (i = 0; i < N; i++)
//            if (even(List[i]))
//                printf(" %d ", List[i]);
//    return 0;
//}

//完善even函数以及EvenSum函数。并提交完成的程序。
//#include <stdio.h>
//
//#define MAXN 10
//
//int Sum(int List[], int N);
//
//int main()
//{
//	int List[MAXN], N, i;
//
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &List[i]);
//	printf("%d\n", Sum(List, N));
//	return 0;
//}
//
//int Sum(int List[], int N)
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 0; i < N; i++)
//	{
//		sum += List[i];
//	}
//	return sum;
//}
//#include<stdio.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdef";
//	int sz = my_strcmp(&ch1, &ch2);
//	printf("%d", sz);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int count = 0;
//	if (len1 == len2)
//	{
//		while (count < len1)
//		{
//			if ((*str1++) == (*str2++))
//			{
//				count++;
//			}
//			else
//				return *str1 - *str2;
//		}
//		if (count == len1)
//			return 0;
//	}
//	else
//		return len1 - len2;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == "\0")
//		{
//			return 0;
//		}
//			str1++;
//			str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdef";
//	int sz = my_strcmp(&ch1, &ch2);
//		printf("%d",sz);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdef";
//	if (ch1==ch2)
//		printf("hehe");
//	else
//		printf("haha");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strcmp("abcdef","asfgvvf")==0)
//		printf("hehe");
//	else
//		printf("haha");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* pa1 = "abcdef";//常量字符串
//	char* pa2 = "abcdef";//指针变量存储的是首元素的地址
//	if (pa1 == pa2)
//		printf("hehe");
//	else
//		printf("haha");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	if ("abcdef" == "asfgvvf")
//		printf("hehe");
//	else
//		printf("haha");
//	return 0;
//}