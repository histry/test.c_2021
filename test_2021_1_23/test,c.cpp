#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = getchar();//����һ���ַ�
//	putchar(ch);//���ch�е�����
//	printf("%c", ch);
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);//getchar�ǻ�ȡһ���ַ�����˼
					//EOF���ļ��Ľ�����־//����������EOF����//��������CTRL+z�������
	return 0;
}
//int main()
//{
//	int i = 1;
//	while (i <= 10)//�ж�ѭ��������
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;//����continue��佫ֱ��������ǰ�����Σ�ѭ��
//					 //�����ж��������������жϣ���Ϊ�棬�����ѭ������Ϊ��������ѭ��
//		}
//		printf("%d ", i);//��ӡ1��10,10����
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)//�ж�ѭ��������
//	{
//		if (i == 5)
//		{
//			break;//����break��佫ֱ������ѭ��
//		}
//		printf("%d ", i);//��ӡ1��10,10����
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
//		{//switch����Ƕ��ʹ��
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
//		printf("������\n");////case�����Ϊ���γ������ʽ
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	case 7:
//		printf("��Ϣ��\n");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
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
//		printf("����1\n");////case�����Ϊ���γ������ʽ
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("����1\n");
//	else if (day == 2)
//		printf("����2\n");
//	else if (day == 3)
//		printf("����3\n");
//	else if (day == 4)
//		printf("����4\n");
//	else if (day == 5)
//		printf("����5\n");
//	else if (day == 6)
//		printf("����6\n");
//	else if (day == 7)
//		printf("����7\n");
//	return 0;
//}
//int main()//�ж�����
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
//int main()//�ж�����
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input % 2 != 0)
//	{
//		printf("%d������\n", input);
//	}
//	else
//		printf("��������");
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
//	if (2 == a)//������ôд����������ж�ʱ�����������ᱨ���ǺõĴ�����
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
//	if (a == 1)//�൱��
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
//		printf("δ����");
//	}
//	else
//	{
//			 if (age >= 18 && age < 30)
//	{
//	printf("����");
//	}
//			else if (age >= 30 && age < 60)
//	{
//	printf("����");
//	}
//			else if (age >= 60 && age < 100)
//	{
//	printf("����");
//	}
//	}
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else//age>=18
//	{
//		printf("����");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	if (age >= 18 && age < 30)
//	{
//		printf("����");
//	}
//	if (age >= 30 && age < 60)
//	{
//		printf("����");
//	}
//	if (age >= 60 && age < 100)
//	{
//		printf("����");
//	}
//	return 0;
//}
//int main()
//{
//	if (���ʽ)
//	{
//		//���1;//������ʽΪ�棨���ʽ��ֵĬ��Ϊ1�������1ִ��
//	}
//	else
//	{
//		//���2;//������ʽΪ�٣����ʽ��ֵĬ��Ϊ0�������2ִ��
//	}
//	return 0;
//}
//int main()
//{
//	if (���ʽ)//������ʽΪ�棨���ʽ��ֵĬ��Ϊ1�������ִ��//������ʽΪ�٣����ʽ��ֵĬ��Ϊ0������䲻ִ��
//	{
//		//���
//	}
//	return 0;
//}
//int main()
//{
//	printf("hello world");;//�����
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
//	struct book b = { "C���Գ������",50 };
//	printf("b�����Ϊ:%d\n", b.prise);
//
//	b.prise = 15;
//	printf("b���ۺ�����Ϊ:%d\n", b.prise);
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
//	struct book b = { "C���Գ������",50 };
//	printf("b������Ϊ:%s\n", b.name);
//	strcpy(b. name,"c++");
//	printf("b�޸ĺ������Ϊ:%s\n", b.name);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C���Գ������",50 };
//	printf("b������Ϊ:%s\n", b.name);
//	b, name = "c++";
//	printf("b������Ϊ:%s\n", b.name);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C���Գ������",50 };
//	struct book* p = &b;//struct book*Ϊ�ṹ���ָ�����ͣ�pΪ�ṹ���ָ�����
//	printf("b������Ϊ:%s\n", (*p).name);
//	printf("b�����Ϊ:%d\n", (*p).prise);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short prise;
//};
//int main()
//{
//	struct book b = { "C���Գ������",50 };
//	struct book* p = &b;//struct book*Ϊ�ṹ���ָ�����ͣ�pΪ�ṹ���ָ�����
//	printf("b������Ϊ:%s\n", p->name);
//	printf("b�����Ϊ:%d\n", p->prise);
//	return 0;
//}
//struct book//�ṹ��--�Լ�������һ���������Ӷ��������
//{
//	//���Ӷ����ϸ������Ϊһ��һ���������ļ򵥶���
//	char name[20];//����
//	short prise;//���
//};//;����ȱ�������������Ͷ����
//int main()
//{
//	struct book b = { "C���Գ������",50 };//��������b1��b1������ΪC���Գ�����ƣ����Ϊ50
//	printf("b������Ϊ:%s\n", b.name);
//	printf("b�����Ϊ:%d\n", b.prise);
//
//	b.prise = 15;
//	printf("b���ۺ�����Ϊ:%d\n", b.prise);
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