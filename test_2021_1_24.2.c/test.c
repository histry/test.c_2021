#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if ( strcmp(password, "123456") == 0 )
		{
			printf("������ȷ\n");
			break;
		}		
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}
//#include<string.h>
//int main()//������ӡ
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
//int main()//���ֲ���һ���ǲ������������
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tage = 0;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &tage);
//	int right = sz-1;//Ԫ�����±�
//	int left = 0;//Ԫ�����±�
//	int mid = (right+ left) / 2;//�м�Ԫ���±�
//	while(left <= right)//Ԫ�����±�һ��С�ڵ���Ԫ�����±�
//	{
//		if (tage < arr[mid])//Ŀ����С���м�Ԫ��ʱ
//		{
//			right = mid-1;
//			mid = (right + left) / 2;
//		}
//		if (tage > arr[mid])//Ŀ���������м�Ԫ��ʱ
//		{
//			left = mid+1;
//			mid = (right + left) / 2;
//		}
//		if(tage == arr[mid])
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);
//			break;
//		}	
//	}
//	if (right < left)
//				printf("û�ҵ�\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tage = 0;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &tage);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (tage == arr[i])
//		{
//			printf("�ҵ��ˣ���������������������±�Ϊ��%d\n", i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("û�ҵ�\n");
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
//		sum = sum * i;//n��i���
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
//			printf("hehe");//10*10---����ӡ100��hehe
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
//		printf("%d ", arr[i]);//��ӡarr[0]---->arr[9]
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i=0;i < 10;i++)
//	{
//			printf("%d ",arr[i]);//��ӡarr[0]---->arr[9]
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
//	int i = 0;//����ѭ������
//	for (i = 1; i <= 10; i++)//ѭ��10��
//	{
//		printf("%d ", i);//��ӡ1-10,10������
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//ѭ�������ĳ�ʼ��
//	while (i < 10)//ѭ�����ж�����
//	{
//		//����ʵ��
//		i++;//ѭ�������ĵ���
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//����ʵ��
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
//	while ((ch = getchar()) != EOF)//�ǵô����ţ����ȼ���һ��
//	{
//		if (ch < '0' || ch>'9')//����1-9�����֣������Ķ�����ӡ
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
//	printf("���������룺\n");
//	scanf("%s", password);//scanf����һ�����ո񣬻س��Ⱦͻ������ȡ�������ڵ��ַ�
//	//����������ַ������ڴ����ڻ��������ռ���
//	//����ʱ����ո񣬻س�������ʾ��������ʼ��ȡ���������ַ�
//	//scanf,getchar�����뺯�������ȡ�����ڻ������洢���ַ�
//	//��������������ַ�,���������뺯��������£���ֱ�Ӷ�ȡ
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//�����������ַ����ӿո�ʼ����һһ��ȡ��ֱ����ȡ�굽\n������
//	{
//		;//�����//����Ҫ����ִ�����
//	}
//	printf("��ȷ��(Y/N)\n");
//	ch = getchar();//��ȡ\n
//	if (ch == 'Y')//ע���ַ�һ��Ҫ�򡮡�����Ϊ���ᱨ�����в���
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("����ȷ��\n");
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
//	//end of file----EOF�ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//getchar();//���Զ�ȡ�ַ������Ƕ�ȡ���ַ�������ķ���һ��ռ�����Ҳ�����
//	//putchar();//��û�취��ȡ����һ��������ַ���//��֪��Ҫ��ӡ����ʲô��Ҳ�ᱨ��
//	//�����Ƽ���ÿ��getchar�ķ���ֵ���Ǹ������ַ���ASCII��ֵ��������һ��������õĴ���ϰ�ߣ�
//	int ch = getchar();//����getchar��ȡ�ַ���ASCII��ֵ
//	putchar(ch);//�����ݱ����д����ASCII��ֵ���Դ˴�ӡ������ַ�,�Ͳ��������ӡ������δ��ȡ���ַ���
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