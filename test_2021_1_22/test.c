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

//int Max(int x, int y)//�������������ֵ
//{
//	if (x > y)
//	{
//		return x;
//	}	
//	else
//		return y;
//}
//#define MAX(x,y) (x>y?x:y)//��Ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);//�������������ֵ
//	printf("max=%d\n", max); 
//
//	int mAx = MAX(a, b);
//	//�൱��mAx = (x>y?x:y);
//	printf("mAx=%d\n", mAx);
//	return 0;
//}

//extern Add(int, int);//�����ⲿ����
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
//	extern int g_val;//extern�����ⲿȫ�ֱ����Ĺؼ���
//	printf("%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����//a�����ı�����������
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)//��ѭ��5��
//	{
//		test();//����test����
//		i++;
//	}
//	return 0;
//}
//void test()
//{
//	int a = 1;//ÿ��a=1//��������ʱ���������������������������
//	a++;//a=2
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)//��ѭ��5��
//	{
//		test();//����test����
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int num1 = 10;//�����޷������ε���˼
//	typedef unsigned int u_int;//��unsigned int���¶���Ϊ�����������Ϊ��u_int
//	u_int num2 = 20;//�����޷������ε���˼
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
//	int sum = Add(a, b);//()Ϊ�������ò�����
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[]--Ϊ�±����ò�����
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

//0Ϊ�٣���0Ϊ��
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	
//	int d = a && b;//&&�߼���
//	printf("%d\n",d);//0
//	int e = b && c;
//	printf("%d\n", e);//1
//
//	int f = a || b;//&&�߼���
//	printf("%d\n", f);//1
//	int g = b || c;
//	printf("%d\n", g);//1
//	
//	return 0;
//}

//int main()
//{
//	//++����
//	//--�Լ�
//	int a = 10;
//	//int b = ++a;//ǰ��++����++��ִ�б������//a=11,b=11
//	//int b = a++;//����++����ִ�б�������++//a=11,b=10
//	//int b = --a;//ǰ��--����--��ִ�б������//a=9,b=9
//	int b = a--;//����--����ִ�б�������--//a=9,b=10
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//~�ǰ�λȡ������˼
//	printf("%d", b);//-1
//
//	//�����洢���Ƕ����ƵĲ���
//	//int���з���λ������
//	//intռ4���ֽ�32��bitλ
//	//��һλΪ����λʣ�µ�31λΪ��ֵλ
//	//������ԭ�룬���룬������ͬ
//	//�����ķ���λΪ0�������ķ���λΪ1
//	//�����ķ���λ���䣬��ֵλ��λȡ���õ�����
//	//�����ķ����1���õ�����
//
//	//0�Ĳ���Ϊ00000000000000000000000000000000
//	// ~0 Ϊ   11111111111111111111111111111111
//// ~0 �ķ���Ϊ 11111111111111111111111111111110
//// ~0 ��ԭ��Ϊ 10000000000000000000000000000001
//	//~0��ʮ����Ϊ��-1
//	return 0;
//}


//#include <stdlib.h>//system//Windows10���°汾�ſ�����ִ��
//#include<string.h>//strcmp
//int main()//�ػ�����
//{
//	char input[100] = { 0 };//�洢�������Ϣ
//
//	system("shutdown -s -60");//�ػ�����
//
//again://һֱѭ��
//	printf("��ĵ��Խ���60���ػ��������룺���������Խ�ȡ���ػ�");
//	scanf("%s", input);//%s �ַ��� 
//	
//	if (strcmp(input, "������") == 0)//�ж�������Ƿ�Ϊ ������ strcmp--string compare
//	{
//		system("shutdown -a");//ȡ���ػ�
//	}
//	else
//	{
//		goto again;//һֱѭ��
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("������ֻ��һ��������%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])//������ÿ��Ԫ������������Ԫ�ؽ��бȽ�
//			{
//				count++; //��Ϊ��������Լ��Ƚ����Ի�count++
//				//���������Ԫ�رȽϺ�����ȣ�count��>1
//			}
//		}
//		if (count == 1)//��˼������������ ����1 �� �� �� >1 ��
//		{
//			printf("������ֻ��һ��������%d\n", arr[i]);
//			break;//�ҵ�һ��������ѭ��
//		}
//	}
//	return 0;
//}
	
//int main()//����������������ʹ�ñ���ֵ����//�ð�λ���ʵ��
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	//��(������)λ���//��ͬΪ0����Ϊ1
//	a = a ^ b;//a=110
//	b = a ^ b;//b=011
//	a = a ^ b;//a=101
//
//	printf("������:a=%d b=%d\n", a, b);
//return 0;
//}
//#include<limits.h>
//int main()//����������������ʹ�ñ���ֵ����//�üӼ���ʵ��
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	//�������������
//	//����intռ4���ֽ�32��bitλ
//	//INT_MAX;//��������int�洢�����ֵ
//	//int�ɴ洢���������Ϊ��2147483647
//	//��a��b���ǳ����ʱ�򣬽�a��b��ֵ�ĺͷ���a�н����ܻᵼ���������
//	//��ôa��ֵ���᲻׼ȷ,b��ֵҲ�᲻׼ȷ��
//
//	//��֮��ȡ���ַ���
//	//a��b�ķ�Χ������һ��
//
//	a = a + b;//aΪa��b�ĺ�
//	b = a - b;//aΪa��b�ĺ�,b�ŵ���a��b�ĺͼ�ȥb��ֵ,����ԭ��a��ֵ
//	a = a - b;//aΪa��b�ĺ�,a�ŵ���a��b�ĺͼ�ȥa��ֵ,����ԭ��b��ֵ
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()//��������������ʹ�ñ���ֵ����
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	int c = a;
//	a = b;
//	b = c;
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}
