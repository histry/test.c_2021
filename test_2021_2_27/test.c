#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//#include <windows.h>
//#include <conio.h>
//using namespace std;
//void gotoxy(int x, int y) { COORD pos = { x,y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); }//��궨λ
//class Food {//ʳ����
//private: int m_x; int m_y;
//public:
//	void randfood() {//�������һ��ʳ��
//		srand((int)time(NULL));//����ʱ�������������ӣ���Ҫctimeͷ�ļ�bai
//	L1: {m_x = rand() % (85) + 2;//2~86
//		m_y = rand() % (25) + 2;//2~26
//		if (m_x % 2) goto L1;//���ʳ���x���겻��ż��������ȷ��ʳ�������
//		gotoxy(m_x, m_y);//��ȷ�Ϻõ�λ�����ʳ��
//		cout << "��"; }
//	}
//	int getFoodm_x() { return m_x; }//����ʳ���x����
//	int getFoodm_y() { return m_y; }
//};//����ʳ���y����
//class Snake 
//{
//private:
//	struct Snakecoor { int x; int y; };//����һ���ߵ��������
//	vector<Snakecoor> snakecoor;//���������vector������
//	//�жϲ��ı�ǰ������ĺ���
//	void degdir(Snakecoor& nexthead) {//�����µ���ͷ����
//		static char key = 'd';//��̬������ֹ�ı��ƶ���������¸Ļ���
//		if (_kbhit()) {
//			char temp = _getch();//����һ����ʱ����������������ֵ
//			switch (temp) {//�����ʱ������ֵΪwasd�е�һ������ֵ��key
//			default: break;//default��ȱʡ�����ֻ���κ���������ƥ�������²Ż�ִ�� ����д��ǰ�棡��Ȼ���޷�ת��
//			case'w': case'a': case's': case'd':
//				//���temp�ķ����key�ķ����෴��ֵ ��Ϊ�����ƶ��������෴ ��������Ϊ��ʼ������
//				if (key == 'w' && temp != 's' || key == 's' && temp != 'w' || key == 'a' && temp != 'd' || key == 'd' && temp != 'a') key = temp;
//			}
//		}
//		switch (key) {//����key��ֵ��ȷ���ߵ��ƶ�����
//		case'd': nexthead.x = snakecoor.front().x + 2; nexthead.y = snakecoor.front().y; break;
//			//�µ���ͷ��ͷ�����������ڵ�һ������(����ͷ)x����+2 ��Ϊ��ͷռ�������꣬�ƶ�һ�μ�2
//		case'a': nexthead.x = snakecoor.front().x - 2; nexthead.y = snakecoor.front().y; break;
//		case'w': nexthead.x = snakecoor.front().x; nexthead.y = snakecoor.front().y - 1; break;
//			//��Ϊ����̨��x������y��һ�룬����������x����ͷ����Ҫ�������Ƕ���
//		case's': nexthead.x = snakecoor.front().x; nexthead.y = snakecoor.front().y + 1;
//		}
//	}
//	//��Ϸ����ʱ���һ�������������Ϸ�������Լ�����
//	void finmatt(const int score) {
//		system("cls"); gotoxy(40, 14);//����Ȼ�����
//		cout << "��Ϸ����"; gotoxy(40, 16);
//		cout << "�÷֣�" << score; gotoxy(0, 26);
//		exit(0);
//	}//exitΪC++���˳����� exit(0)��ʾ���������˳�����0��ʾ�������˳�
//	void finishgame(const int score) {//��Ϸ����
//		if (snakecoor[0].x >= 88 || snakecoor[0].x < 0 || snakecoor[0].y >= 28 || snakecoor[0].y < 0) finmatt(score);//ײǽ
//		for (int i = 1; i < snakecoor.size(); i++) if (snakecoor[0].x == snakecoor[i].x && snakecoor[0].y == snakecoor[i].y) finmatt(score);
//	}//ײ������
//public://�����ʼ���ߵ�λ��
//	Snake() {
//		Snakecoor temp;//��ʱ�ṹ�������ڴ�����
//		for (int i = 5; i >= 0; i--) {//���򴴽���ʼ������ʼ��ͷ����
//			temp.x = 16 + (i << 1); temp.y = 8;//ż�� ����ͷ������������
//			snakecoor.push_back(temp);
//		}
//	}//����ββ������ʱ����
//	void move(Food& food, int& score) {//���˶��ĺ���
//		Snakecoor nexthead;//����ͷ����
//		degdir(nexthead);//�жϺ͸ı���ǰ���ķ���
//		snakecoor.insert(snakecoor.begin(), nexthead);//����ͷ����������ͷ��
//		gotoxy(0, 0); cout << "�÷֣�" << score;//ÿ���ƶ��������Ͻ�ˢ�µ÷�
//		gotoxy(0, 2); cout << "�ߵĳ���Ϊ��" << snakecoor.size();//������������
//		finishgame(score);//�ж���Ϸ�������������
//		//�Ե�ʳ���ߵı仯
//		if (snakecoor[0].x == food.getFoodm_x() && snakecoor[0].y == food.getFoodm_y()) {//��ͷ��ʳ���غ�
//			gotoxy(snakecoor[0].x, snakecoor[0].y); cout << "��";//�Ե�ʳ��ʱ�����û���ƶ��������߻Ῠ��һ��
//			gotoxy(snakecoor[1].x, snakecoor[1].y); cout << "��";//�������һ����ͷ�͵�һ���������߲�����
//			score++; food.randfood(); return;
//		}//�Ե�ʳ��÷�+1,�����ͷ�����ʳ�������غ������²���һ��ʳ�ﲢֱ�ӽ��������ƶ�
//		for (int i = 0; i < snakecoor.size(); i++) {//�����������ж�ʳ���������Ƿ��غϲ����������
//			gotoxy(snakecoor[i].x, snakecoor[i].y);
//			if (!i) cout << "��"; else cout << "��";//ͷ�����Բ�η����������
//			if (snakecoor[i].x == food.getFoodm_x() && snakecoor[i].y == food.getFoodm_y())food.randfood();
//		}//���ʳ��ˢ�µ��������ϣ������²���һ��
//		gotoxy(snakecoor.back().x, snakecoor.back().y); cout << " "; snakecoor.pop_back();
//	}
//};
////�����뻭���Ƿֿ�����������β���ĵط�����ո� ��������ϵ���β��ɾ�����������һ������ ��������ϵ���β
//void HideCursor() { CONSOLE_CURSOR_INFO cursor_info = { 1,0 }; SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); }//���ع��
//int main() {
//	system("mode con cols=88 lines=28"); system("title ̰����"); HideCursor();//������أ����ÿ���̨���ڴ�С������
//	int score = 0; Food food; food.randfood(); Snake snake;//�÷ֱ�����ʳ����󣬿����������һ��ʳ��߶���
//	while (true) { snake.move(food, score); Sleep(150); }return 0;
//}//���ƶ�,��Ϸ�ٶ�

////******������ʾ:�����ٶȿ��,���С_sleep(500)�����в���*****
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#include <time.h>
//const int H = 8; //��ͼ�ĸ�
//const int L = 16; //��ͼ�ĳ�
//char GameMap[H][L]; //��Ϸ62616964757a686964616fe4b893e5b19e31333431343666��ͼ
//int key; //��������
//int sum = 1, over = 0; //�ߵĳ���, ��Ϸ����(�ԳԻ���ǽ)
//int dx[4] = { 0, 0, -1, 1 }; //���ҡ��ϡ��µķ���
//int dy[4] = { -1, 1, 0, 0 };
//struct Snake //�ߵ�ÿ���ڵ����������
//{
//	int x, y; //���λ��
//	int now; //���浱ǰ�ڵ�ķ���, 0,1,2,3�ֱ�Ϊ��������
//}Snake[H * L];
//const char Shead = '@'; //��ͷ
//const char Sbody = '#'; //����
//const char Sfood = '*'; //ʳ��
//const char Snode = '.'; //'.'�ڵ�ͼ�ϱ�ʾΪ��
//void Initial(); //��ͼ�ĳ�ʼ��
//void Create_Food(); //�ڵ�ͼ���������ʳ��
//void Show(); //ˢ����ʾ��ͼ
//void Button(); //ȡ������,���жϷ���
//void Move(); //�ߵ��ƶ�
//void Check_Border(); //�����ͷ�Ƿ�Խ��
//void Check_Head(int x, int y); //�����ͷ�ƶ����λ�����
//int main()
//{
//	Initial();
//	Show();
//	return 0;
//}
//void Initial() //��ͼ�ĳ�ʼ��
//{
//	int i, j;
//	int hx, hy;
//	system("title ̰����"); //����̨�ı���
//	memset(GameMap, '.', sizeof(GameMap)); //��ʼ����ͼȫ��Ϊ��'.'
//	system("cls");
//	srand(time(0)); //�������
//	hx = rand() % H; //������ͷ
//	hy = rand() % L;
//	GameMap[hx][hy] = Shead;
//	Snake[0].x = hx; Snake[0].y = hy;
//	Snake[0].now = -1;
//	Create_Food(); //�������ʳ��
//	for (i = 0; i < H; i++) //��ͼ��ʾ
//	{
//		for (j = 0; j < L; j++)
//			printf("%c", GameMap[i][j]);
//		printf("\n");
//	}
//	printf("\nССC����̰����\n");
//	printf("�����ⷽ�����ʼ��Ϸ\n");
//	getch(); //�Ƚ���һ������,ʹ�߿�ʼ���÷�����
//	Button(); //ȡ������,���жϷ���
//}
//void Create_Food() //�ڵ�ͼ���������ʳ��
//{
//	int fx, fy;
//	while (1)
//	{
//		fx = rand() % H;
//		fy = rand() % L;
//		if (GameMap[fx][fy] == '.') //���ܳ���������ռ�е�λ��
//		{
//			GameMap[fx][fy] = Sfood;
//			break;
//		}
//	}
//}
//void Show() //ˢ����ʾ��ͼ
//{
//	int i, j;
//	while (1)
//	{
//		_sleep(500); //�ӳٰ���(1000Ϊ1s),��ÿ����ˢ��һ�ε�ͼ
//		Button(); //���жϰ������ƶ�
//		Move();
//		if (over) //�ԳԻ���ǽ����Ϸ����
//		{
//			printf("\n**��Ϸ����**\n");
//			printf(" >_<\n");
//			getchar();
//			break;
//		}
//		system("cls"); //��յ�ͼ����ʾˢ�º�ĵ�ͼ
//		for (i = 0; i < H; i++)
//		{
//			for (j = 0; j < L; j++)
//				printf("%c", GameMap[i][j]);
//			printf("\n");
//		}
//		printf("\nССC����̰����\n");
//		printf("�����ⷽ�����ʼ��Ϸ\n");
//	}
//}
//void Button() //ȡ������,���жϷ���
//{
//	if (kbhit() != 0) //��鵱ǰ�Ƿ��м������룬�����򷵻�һ����0ֵ�����򷵻�0
//	{
//		while (kbhit() != 0) //���ܴ��ڶ������,Ҫȫ��ȡ��,�����һ��Ϊ��
//			key = getch(); //�������ӿ���̨��ȡ�������浽key��
//		switch (key)
//		{ //��
//		case 75: Snake[0].now = 0;
//			break;
//			//��
//		case 77: Snake[0].now = 1;
//			break;
//			//��
//		case 72: Snake[0].now = 2;
//			break;
//			//��
//		case 80: Snake[0].now = 3;
//			break;
//		}
//	}
//}
//void Move() //�ߵ��ƶ�
//{
//	int i, x, y;
//	int t = sum; //���浱ǰ�ߵĳ���
//	//��¼��ǰ��ͷ��λ��,������Ϊ��,��ͷ���ƶ�
//	x = Snake[0].x; y = Snake[0].y; GameMap[x][y] = '.';
//	Snake[0].x = Snake[0].x + dx[Snake[0].now];
//	Snake[0].y = Snake[0].y + dy[Snake[0].now];
//	Check_Border(); //��ͷ�Ƿ�Խ��
//	Check_Head(x, y); //��ͷ�ƶ����λ�����,����Ϊ: ��ͷ�Ŀ�ʼλ��
//	if (sum == t) //δ�Ե�ʳ�Ｔ�����ƶ�Ŷ
//		for (i = 1; i < sum; i++) //Ҫ����β�ڵ���ǰ�ƶ�Ŷ,ǰһ���ڵ���Ϊ����
//		{
//			if (i == 1) //β�ڵ�����Ϊ�����ƶ�
//				GameMap[Snake[i].x][Snake[i].y] = '.';
//			if (i == sum - 1) //Ϊ��ͷ���������ڵ�,���⴦��
//			{
//				Snake[i].x = x;
//				Snake[i].y = y;
//				Snake[i].now = Snake[0].now;
//			}
//			else //���������ߵ�ǰһ������λ��
//			{
//				Snake[i].x = Snake[i + 1].x;
//				Snake[i].y = Snake[i + 1].y;
//				Snake[i].now = Snake[i + 1].now;
//			}
//			GameMap[Snake[i].x][Snake[i].y] = '#'; //�ƶ���Ҫ��Ϊ'#'����
//		}
//}
//void Check_Border() //�����ͷ�Ƿ�Խ��
//{
//	if (Snake[0].x < 0 || Snake[0].x >= H
//		|| Snake[0].y < 0 || Snake[0].y >= L)
//		over = 1;
//}
//void Check_Head(int x, int y) //�����ͷ�ƶ����λ�����
//{
//	if (GameMap[Snake[0].x][Snake[0].y] == '.') //Ϊ��
//		GameMap[Snake[0].x][Snake[0].y] = '@';
//	else
//		if (GameMap[Snake[0].x][Snake[0].y] == '*') //Ϊʳ��
//		{
//			GameMap[Snake[0].x][Snake[0].y] = '@';
//			Snake[sum].x = x; //�����ӵ�����Ϊ��ͷ������Ǹ�
//			Snake[sum].y = y;
//			Snake[sum].now = Snake[0].now;
//			GameMap[Snake[sum].x][Snake[sum].y] = '#';
//			sum++;
//			Create_Food(); //ʳ������������ٲ���һ��ʳ��
//		}
//		else
//			over = 1;
//}