#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("############################\n");
	printf("####  1.play  0.exit  ######\n");
	printf("############################\n");
}
void game()
{
	//����һ�������
	int ret = 0;
	//��ʱ��������������������
	//time_t time(time_t,*timer)
	//time_t
	//srand(unsigned int (time_t(NULL))
	ret = rand()%100+1;//������100���ڵ������
	//printf("%d\n", ret);
	//2.��ʼ������
	int guss = 0;
	while ( 1 )
	{
		printf("������֣�");
		scanf("%d", &guss);
		if (guss > ret)
		{
			printf("�´���\n");
		}
		else if (guss < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ���¶���\n");
			break;
		}		
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//�˵�
		printf("�����루1/0��:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		case 1:
		{
			game();//��������Ϸ
			break;
		}
		default:
		{
			printf("ѡ�����\n");
			break;
		}
		}
	} while (input);
	return 0;
}