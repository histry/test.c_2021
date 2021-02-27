#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//#include <windows.h>
//#include <conio.h>
//using namespace std;
//void gotoxy(int x, int y) { COORD pos = { x,y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); }//光标定位
//class Food {//食物类
//private: int m_x; int m_y;
//public:
//	void randfood() {//随机产生一个食物
//		srand((int)time(NULL));//利用时间添加随机数种子，需要ctime头文件bai
//	L1: {m_x = rand() % (85) + 2;//2~86
//		m_y = rand() % (25) + 2;//2~26
//		if (m_x % 2) goto L1;//如果食物的x坐标不是偶数则重新确定食物的坐标
//		gotoxy(m_x, m_y);//在确认好的位置输出食物
//		cout << "★"; }
//	}
//	int getFoodm_x() { return m_x; }//返回食物的x坐标
//	int getFoodm_y() { return m_y; }
//};//返回食物的y坐标
//class Snake 
//{
//private:
//	struct Snakecoor { int x; int y; };//定义一个蛇的坐标机构
//	vector<Snakecoor> snakecoor;//将坐标存入vector容器中
//	//判断并改变前进方向的函数
//	void degdir(Snakecoor& nexthead) {//定义新的蛇头变量
//		static char key = 'd';//静态变量防止改变移动方向后重新改回来
//		if (_kbhit()) {
//			char temp = _getch();//定义一个临时变量储存键盘输入的值
//			switch (temp) {//如果临时变量的值为wasd中的一个，则赋值给key
//			default: break;//default是缺省情况，只有任何条件都不匹配的情况下才会执行 必须写在前面！不然蛇无法转向
//			case'w': case'a': case's': case'd':
//				//如果temp的方向和key的方向不相反则赋值 因为两次移动方向不能相反 将蛇设置为初始向右走
//				if (key == 'w' && temp != 's' || key == 's' && temp != 'w' || key == 'a' && temp != 'd' || key == 'd' && temp != 'a') key = temp;
//			}
//		}
//		switch (key) {//根据key的值来确定蛇的移动方向
//		case'd': nexthead.x = snakecoor.front().x + 2; nexthead.y = snakecoor.front().y; break;
//			//新的蛇头的头部等于容器内第一个数据(旧蛇头)x坐标+2 因为蛇头占两个坐标，移动一次加2
//		case'a': nexthead.x = snakecoor.front().x - 2; nexthead.y = snakecoor.front().y; break;
//		case'w': nexthead.x = snakecoor.front().x; nexthead.y = snakecoor.front().y - 1; break;
//			//因为控制台的x长度是y的一半，所以用两个x做蛇头，需要的坐标是二倍
//		case's': nexthead.x = snakecoor.front().x; nexthead.y = snakecoor.front().y + 1;
//		}
//	}
//	//游戏结束时设计一个界面输出“游戏结束”以及分数
//	void finmatt(const int score) {
//		system("cls"); gotoxy(40, 14);//清屏然后输出
//		cout << "游戏结束"; gotoxy(40, 16);
//		cout << "得分：" << score; gotoxy(0, 26);
//		exit(0);
//	}//exit为C++的退出函数 exit(0)表示程序正常退出，非0表示非正常退出
//	void finishgame(const int score) {//游戏结束
//		if (snakecoor[0].x >= 88 || snakecoor[0].x < 0 || snakecoor[0].y >= 28 || snakecoor[0].y < 0) finmatt(score);//撞墙
//		for (int i = 1; i < snakecoor.size(); i++) if (snakecoor[0].x == snakecoor[i].x && snakecoor[0].y == snakecoor[i].y) finmatt(score);
//	}//撞到自身
//public://构造初始化蛇的位置
//	Snake() {
//		Snakecoor temp;//临时结构变量用于创建蛇
//		for (int i = 5; i >= 0; i--) {//反向创建初始蛇身，初始蛇头朝右
//			temp.x = 16 + (i << 1); temp.y = 8;//偶数 在蛇头左移生成蛇身
//			snakecoor.push_back(temp);
//		}
//	}//在蛇尾尾插入临时变量
//	void move(Food& food, int& score) {//蛇运动的函数
//		Snakecoor nexthead;//新蛇头变量
//		degdir(nexthead);//判断和改变蛇前进的方向
//		snakecoor.insert(snakecoor.begin(), nexthead);//将蛇头插入容器的头部
//		gotoxy(0, 0); cout << "得分：" << score;//每次移动都在左上角刷新得分
//		gotoxy(0, 2); cout << "蛇的长度为：" << snakecoor.size();//长度用来测试
//		finishgame(score);//判断游戏结束，输出分数
//		//吃到食物蛇的变化
//		if (snakecoor[0].x == food.getFoodm_x() && snakecoor[0].y == food.getFoodm_y()) {//蛇头与食物重合
//			gotoxy(snakecoor[0].x, snakecoor[0].y); cout << "●";//吃到食物时这次蛇没有移动，所以蛇会卡顿一下
//			gotoxy(snakecoor[1].x, snakecoor[1].y); cout << "■";//重新输出一下蛇头和第一节蛇身让蛇不卡顿
//			score++; food.randfood(); return;
//		}//吃到食物得分+1,如果蛇头坐标和食物坐标重合则重新产生一个食物并直接结束本次移动
//		for (int i = 0; i < snakecoor.size(); i++) {//遍历容器，判断食物与蛇身是否重合并输出整条蛇
//			gotoxy(snakecoor[i].x, snakecoor[i].y);
//			if (!i) cout << "●"; else cout << "■";//头部输出圆形否则输出方块
//			if (snakecoor[i].x == food.getFoodm_x() && snakecoor[i].y == food.getFoodm_y())food.randfood();
//		}//如果食物刷新到了蛇身上，则重新产生一个
//		gotoxy(snakecoor.back().x, snakecoor.back().y); cout << " "; snakecoor.pop_back();
//	}
//};
////数据与画面是分开，的在容器尾部的地方输出空格 清除画面上的蛇尾，删除容器中最后一个数据 清除数据上的蛇尾
//void HideCursor() { CONSOLE_CURSOR_INFO cursor_info = { 1,0 }; SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); }//隐藏光标
//int main() {
//	system("mode con cols=88 lines=28"); system("title 贪吃蛇"); HideCursor();//光标隐藏，设置控制台窗口大小、标题
//	int score = 0; Food food; food.randfood(); Snake snake;//得分变量，食物对象，开局随机产生一个食物，蛇对象
//	while (true) { snake.move(food, score); Sleep(150); }return 0;
//}//蛇移动,游戏速度

////******友情提示:如想速度快点,请改小_sleep(500)函数中参数*****
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#include <time.h>
//const int H = 8; //地图的高
//const int L = 16; //地图的长
//char GameMap[H][L]; //游戏62616964757a686964616fe4b893e5b19e31333431343666地图
//int key; //按键保存
//int sum = 1, over = 0; //蛇的长度, 游戏结束(自吃或碰墙)
//int dx[4] = { 0, 0, -1, 1 }; //左、右、上、下的方向
//int dy[4] = { -1, 1, 0, 0 };
//struct Snake //蛇的每个节点的数据类型
//{
//	int x, y; //左边位置
//	int now; //保存当前节点的方向, 0,1,2,3分别为左右上下
//}Snake[H * L];
//const char Shead = '@'; //蛇头
//const char Sbody = '#'; //蛇身
//const char Sfood = '*'; //食物
//const char Snode = '.'; //'.'在地图上标示为空
//void Initial(); //地图的初始化
//void Create_Food(); //在地图上随机产生食物
//void Show(); //刷新显示地图
//void Button(); //取出按键,并判断方向
//void Move(); //蛇的移动
//void Check_Border(); //检查蛇头是否越界
//void Check_Head(int x, int y); //检查蛇头移动后的位置情况
//int main()
//{
//	Initial();
//	Show();
//	return 0;
//}
//void Initial() //地图的初始化
//{
//	int i, j;
//	int hx, hy;
//	system("title 贪吃蛇"); //控制台的标题
//	memset(GameMap, '.', sizeof(GameMap)); //初始化地图全部为空'.'
//	system("cls");
//	srand(time(0)); //随机种子
//	hx = rand() % H; //产生蛇头
//	hy = rand() % L;
//	GameMap[hx][hy] = Shead;
//	Snake[0].x = hx; Snake[0].y = hy;
//	Snake[0].now = -1;
//	Create_Food(); //随机产生食物
//	for (i = 0; i < H; i++) //地图显示
//	{
//		for (j = 0; j < L; j++)
//			printf("%c", GameMap[i][j]);
//		printf("\n");
//	}
//	printf("\n小小C语言贪吃蛇\n");
//	printf("按任意方向键开始游戏\n");
//	getch(); //先接受一个按键,使蛇开始往该方向走
//	Button(); //取出按键,并判断方向
//}
//void Create_Food() //在地图上随机产生食物
//{
//	int fx, fy;
//	while (1)
//	{
//		fx = rand() % H;
//		fy = rand() % L;
//		if (GameMap[fx][fy] == '.') //不能出现在蛇所占有的位置
//		{
//			GameMap[fx][fy] = Sfood;
//			break;
//		}
//	}
//}
//void Show() //刷新显示地图
//{
//	int i, j;
//	while (1)
//	{
//		_sleep(500); //延迟半秒(1000为1s),即每半秒刷新一次地图
//		Button(); //先判断按键在移动
//		Move();
//		if (over) //自吃或碰墙即游戏结束
//		{
//			printf("\n**游戏结束**\n");
//			printf(" >_<\n");
//			getchar();
//			break;
//		}
//		system("cls"); //清空地图再显示刷新吼的地图
//		for (i = 0; i < H; i++)
//		{
//			for (j = 0; j < L; j++)
//				printf("%c", GameMap[i][j]);
//			printf("\n");
//		}
//		printf("\n小小C语言贪吃蛇\n");
//		printf("按任意方向键开始游戏\n");
//	}
//}
//void Button() //取出按键,并判断方向
//{
//	if (kbhit() != 0) //检查当前是否有键盘输入，若有则返回一个非0值，否则返回0
//	{
//		while (kbhit() != 0) //可能存在多个按键,要全部取完,以最后一个为主
//			key = getch(); //将按键从控制台中取出并保存到key中
//		switch (key)
//		{ //左
//		case 75: Snake[0].now = 0;
//			break;
//			//右
//		case 77: Snake[0].now = 1;
//			break;
//			//上
//		case 72: Snake[0].now = 2;
//			break;
//			//下
//		case 80: Snake[0].now = 3;
//			break;
//		}
//	}
//}
//void Move() //蛇的移动
//{
//	int i, x, y;
//	int t = sum; //保存当前蛇的长度
//	//记录当前蛇头的位置,并设置为空,蛇头先移动
//	x = Snake[0].x; y = Snake[0].y; GameMap[x][y] = '.';
//	Snake[0].x = Snake[0].x + dx[Snake[0].now];
//	Snake[0].y = Snake[0].y + dy[Snake[0].now];
//	Check_Border(); //蛇头是否越界
//	Check_Head(x, y); //蛇头移动后的位置情况,参数为: 蛇头的开始位置
//	if (sum == t) //未吃到食物即蛇身移动哦
//		for (i = 1; i < sum; i++) //要从蛇尾节点向前移动哦,前一个节点作为参照
//		{
//			if (i == 1) //尾节点设置为空再移动
//				GameMap[Snake[i].x][Snake[i].y] = '.';
//			if (i == sum - 1) //为蛇头后面的蛇身节点,特殊处理
//			{
//				Snake[i].x = x;
//				Snake[i].y = y;
//				Snake[i].now = Snake[0].now;
//			}
//			else //其他蛇身即走到前一个蛇身位置
//			{
//				Snake[i].x = Snake[i + 1].x;
//				Snake[i].y = Snake[i + 1].y;
//				Snake[i].now = Snake[i + 1].now;
//			}
//			GameMap[Snake[i].x][Snake[i].y] = '#'; //移动后要置为'#'蛇身
//		}
//}
//void Check_Border() //检查蛇头是否越界
//{
//	if (Snake[0].x < 0 || Snake[0].x >= H
//		|| Snake[0].y < 0 || Snake[0].y >= L)
//		over = 1;
//}
//void Check_Head(int x, int y) //检查蛇头移动后的位置情况
//{
//	if (GameMap[Snake[0].x][Snake[0].y] == '.') //为空
//		GameMap[Snake[0].x][Snake[0].y] = '@';
//	else
//		if (GameMap[Snake[0].x][Snake[0].y] == '*') //为食物
//		{
//			GameMap[Snake[0].x][Snake[0].y] = '@';
//			Snake[sum].x = x; //新增加的蛇身为蛇头后面的那个
//			Snake[sum].y = y;
//			Snake[sum].now = Snake[0].now;
//			GameMap[Snake[sum].x][Snake[sum].y] = '#';
//			sum++;
//			Create_Food(); //食物吃完了马上再产生一个食物
//		}
//		else
//			over = 1;
//}