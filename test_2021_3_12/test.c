#define _CRT_SECURE_NO_WARNINGS 1
//����Ҫ��ʵ��һ������ѧ���ɼ�������ȼ��������ͳ�Ʋ����������ĺ�������10�֣�

//˵��������p��ָ��ѧ����Ϣ�Ľṹ�������ָ�룬n������Ԫ�ظ�����
//ѧ��num������name�ͳɼ�score���Ѿ��洢��
//SetGrade������Ҫ����ѧ���ĳɼ�score������ȼ�grade��
//�ȼ����ã�90��100ΪA��80��89ΪB��70��79ΪC��60 - 69ΪD��0��59ΪE��
//ͬʱ��SetGrade����Ҫ���ز������������


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

//�����ʲ�����5000ʱ��˰��Ϊ0��
//
//������������(5000, 8000]ʱ������5000���֣�˰��Ϊ3% ��
//
//������������(8000, 12000]ʱ������8000���֣�˰��Ϊ10% ��
//
//������������(12000, 25000]ʱ������12000���֣�˰��Ϊ20% ��
//
//�����ʳ���25000ʱ������25000���֣�˰��Ϊ25% ��
//
//���磺����ĳ����Ա������۳����ս𡢹�����
//�Ժ�Ϊ 12900 Ԫ��������Ϊ 5000����۳��������Ժ����� 7900 Ԫ��Ҫ��˰�� 
//����ǰ 3000 Ԫ�� 3 % ��˰ 90 Ԫ�� 3000 ~7000 ֮��� 4000 Ԫ�� 10 % ��˰ 400 Ԫ�� 
//7000 ~2000 Ԫ֮��� 900 Ԫ�� 20 % ��˰ 180 Ԫ��
//��������˰��ϼ�Ϊ 3000 �� 3 % +4000 �� 10 % +900 �� 20 % = 90 + 400 + 180 = 670(Ԫ)
//�����ʽ:
//������һ���и����Ǹ����ʡ�
//�����ʽ��
//��һ�������������˰����ȷ��С�����2λ��
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
//    //����even�������û�����Ĳ���n����ż�Է�����Ӧֵ����nΪż��ʱ����1�����򷵻�0
//    if (n%2 == 0)
//        return 1;
//    return 0;
//}
//
//int EvenSum(int List[], int N)
//{
//    //����EvenSum������㲢���ش����N������List[]������ż���ĺ�
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
//    printf("ż����Ϊ��%d\n", EvenSum(List, N));
//    printf("ż������Ϊ��");
//        for (i = 0; i < N; i++)
//            if (even(List[i]))
//                printf(" %d ", List[i]);
//    return 0;
//}

//����even�����Լ�EvenSum���������ύ��ɵĳ���
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
//	char* pa1 = "abcdef";//�����ַ���
//	char* pa2 = "abcdef";//ָ������洢������Ԫ�صĵ�ַ
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