#define _CRT_SECURE_NO_WARNINGS 1
//用指针方法编写一个程序，输入3个整数，将它们按由小到大的顺序输出
//
//#include <stdio.h> 
//void swap(int* pa, int* pb)
//{
//    int temp;
//    temp = *pa;
//    *pa = *pb;
//    *pb = temp;
//}
//int main()
//{
//    int a, b, c, temp;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a > b)
//        swap(&a, &b);
//    if (b > c)
//        swap(&b, &c);
//    if (a > c)
//        swap(&a, &c);
//    printf("%d,%d,%d", a, b, c);
//    return 0;
//}




//用指针方法 输入3个字符串 按由小到大顺序输出
//
//#include "stdio.h"
//#include "string.h"
//int main()
//{
//    char* t;
//    char* p1 = NULL, * p2 = NULL, * p3 = NULL;
//    char ch1[20] = { 0 }, ch2[20] = { 0 }, ch3[20] = { 0 };
//
//    p1 = ch1;
//    p2 = ch2;
//    p3 = ch3;
//
//    printf("No1:");
//    scanf("%s", p1);
//    fflush(stdin);
//    printf("No2:");
//    scanf("%s", p2);
//    fflush(stdin);
//    printf("No3:");
//    scanf("%s", p3);
//    fflush(stdin);
//
//    int t = 0;
//
//    if (strcmp(p1, p2) > 0)
//    {
//        t = p1;
//        p1 = p2;
//        p2 = t;
//    }
//
//    if (strcmp(p1, p3) > 0)
//    {
//        t = p1; p1 = p3; p3 = t;
//    }
//
//    if (strcmp(p2, p3) > 0)
//    {
//        t = p2; p2 = p3; p3 = t;
//    }
//
//    printf("%s\n%s\n%s\n", p1, p2, p3);
//
//    return 0;
//}

//编程输入一行文字，找出其中的大写字母，小写字母，空格，数字，及其他字符的个数
//
//#include<stdio.h> 
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0, i = 0;
//    char* p, s[20];
//    while ((s[i] = getchar()) != '\n')i++;
//    p = s;
//    while (*p != 10)
//    {
//        if (*p >= 'A' && *p <= 'Z')
//            a++;
//        else if (*p >= 'a' && *p <= 'z')
//            b++;
//        else if (*p == ' ')
//            c++;
//        else if (*p >= '0' && *p <= '9')
//            d++;
//        else e++;
//        p++;
//    }
//    printf("大写字母 %d 小写字母 %d\n", a, b);
//    printf("空格 %d 数字 %d 非字符 %d\n", c, d, e);
//    return 0;
//}

//写一个函数，将3 3矩阵转置
//
//#include "stdio.h"
//
//void Transpose(int(*matrix)[3])
//{
//    int temp;
//    int i, j;
//
//    for (i = 1; i < 3; i++)/*转置*/
//    {
//        for (j = 0; j < i; j++)
//        {
//            temp = *(*(matrix + j) + i);
//            *(*(matrix + j) + i) = *(*(matrix + i) + j);
//            *(*(matrix + i) + j) = temp;
//        }
//    }
//}
//
//int main()
//{
//    int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    Transpose(a);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//        用指向一维数组的指针做函数参数
//
//#include<stdio.h>
//#include<string.h>
//        int main()
//    {
//        void sort(char(*s)[6]);//一维数组的指针做函数参数
//        int i;
//        char str[10][6];
//        char(*p)[6];//定义一维数组的指针做函数参数
//        printf("please input string:/n");
//        for (i = 0; i < 10; i++)
//            scanf("%s", &str[i]);
//        p = str;//将str一维数组指针，赋值给p;
//        sort(p);
//        printf("the output sequence :/n");
//        for (i = 0; i < 10; i++)
//            printf("%s/n", str[i]);
//        return 0;
//    }
//    void sort(char(*s)[6])//s指向一维数组的指针做函数参数；
//    {
//        int i, j;
//        char temp[6], * t;
//        t = temp;
//        for (i = 0; i < 9; i++)//i应该小于9；如果小于10，那么就比较了9+1次；按照冒泡法则，
//            for (j = 0; j < 9 - i; j++)//第一次比较需要9次就是i=0到i=8共九次；第二次需要比较8次；依次类推；
//                if (strcmp(s[j], s[j + 1]) > 0)
//                {
//                    strcpy(t, s[j]);
//                    strcpy(s[j], s[j + 1]);
//                    strcpy(s[j + 1], t);
//                }
//    }
    
//        用指针数组在主函数中输入十个等长的字符串。用另一函数对它们排序，然后在主函数中输出10个已排好序的字符串
//
//        //用指针数组处理
//#include<stdio.h>
//#include<string.h>
//        int main()
//    {
//        void sort(char* []);
//        int i;
//        char str[10][6], * p[10];
//        printf("please input 10 string:/n");
//        for (i = 0; i < 10; i++)//首先将10个str的首地址赋值给10个p[i];
//            p[i] = str[i];//将第i个字符串的首地址赋予指针数组p的第i个元素；
//        for (i = 0; i < 10; i++)
//            scanf("%s", p[i]);//scanf输入到&p[i]
//        sort(p);
//        printf("the output 10 string:/n");
//        for (i = 0; i < 10; i++)
//            printf("%s/n", p[i]);//输出到p[i];
//    }
//    void sort(char* s[])
//    {
//        char* temp;
//        int i, j;
//        for (i = 0; i < 9; i++)
//            for (j = 0; j < 9 - i; j++)
//                if (strcmp(*(s + j), *(s + j + 1)) > 0)
//                {
//                    temp = *(s + j);//*(s+j)指向数组指针,我想应该是字符串的首地址；所以可以直接赋值给temp指针；
//                    *(s + j) = *(s + j + 1);
//                    *(s + j + 1) = temp;
//                }
//    }
//   


        /*指针 将n个数按输入时顺序的逆序排列, 用函数实现

#include <stdio.h>
        void reverse(int a[], int n)
    {
        int* p;
        for (p = a + n - 1; p >= a; p--)
            printf("%4d", *p);
        printf("\n");
    }
   int main()
    {
        int a[20], n;
        int i;
        printf("Input the length of array:");
        scanf("%d", &n);
        printf("Input the number of array:");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        reverse(a, n);
        return 0;
    }
    */



//        写一函数，实现两个字符串的比较。即自己写一个strcmp函数，函数原型为：
//        int stremp(char* p1, char* p2)
//        设p1指向字符串s1，p2指向字符串s2。要求：当s1 = s2时，返回值为0。当s1不等于s2时，返回它们二者的第一个不同字符的ASCII码差值（如“BOY”与“BAD”，第二字母不同，“O”与“A”之差为79 - 65 = 14）；如果s1 > s2，则输出正值；如果s1 < s2，则输出负值。
//
//#include <stdio.h>
//        main()
//    {
//        int strcmp(char* p1, char* p2);
//        int m;
//        char str1[20], str2[20], * p1, * p2;
//        printf("Input two strings:\n");
//        scanf("%s", str1);
//        scanf("%s", str2);
//        p1 = &str1[0];
//        p2 = &str2[0];
//        m = strcmp(p1, p2);
//        printf("result: %d\n", m);
//    }
//
//    int strcmp(char* p1, char* p2)            /*两个字符串比较的函数*/
//    {
//        int i;
//        i = 0;
//        while (*(p1 + i) == *(p2 + i))
//            if (*(p1 + i++) == '\0') return(0);         /*相等时返回结果0*/
//        return(*(p1 + i) - *(p2 + i));     /*不等时返回结果为第一个不等字符ASCII码的差值*/
//    }
    /*    运行情况如下：
        ① Input two strings :
    CHINA↙
        Chen↙
        Result : -32
        ② Input two strings :
    hello!↙
        Hello!↙
        Result : 0
        ③ Input two stings :
    dog↙
        cat↙
        result : 1

        编一个程序，打入月份号，输出该月的英文月名。例如，输入“3”，则输出“March”，要求用指针数组处理。

#include <stdio.h>
        int main()
    {
        char* month_name[13] = { "illegal month","January","February","March","April",
        "May","June","July","August","September","October","November","December" };
        int n;
        printf("Input month: ");
        scanf("%d", &n);
        if ((n <= 12) && (n >= 1))
            printf("It is %s.\n", *(month_name + n));
        else
            printf("It is wrong.\n");
        return 0;
    }*/
        /*运行结果：
        ① Input month : 2↙
        It is February.
        ② Input month : 8↙
        It is August.
        ③ Input month : 13↙
        It is wrong.

        将字符串computer赋给一个字符数组，然后从第一个字母开始间隔地输出该串。请用指针实现*/

//#include <stdio.h>
//#include <string.h>
//#define MAX_LENGTH 32
//
//        int main()
//    {
//
//        char str[MAX_LENGTH] = { 0 };
//        char* pStr = (char*)&str;
//
//        //1.  将字符串computer赋给一个字符数组
//        strcpy(str, "computer");
//
//        //2. 然后从第一个字母开始间隔地输出该串
//        while (*pStr != '\0')
//        {
//            printf("%c\n", *pStr);
//            pStr++;
//        }
//
//        return 1;
//    }
//    
//        从键盘上输入一个字符串，按后按照下面要求输出一个新字符串， 新的字符串是在原来字符串中， 每两个字符之间插入一个空格， 如原来的字符串为“abcd”， 新产生的字符串应为“a b c d”
//        编写一个程序咯 用C 就是输出的字符 是 每两个字符之间有一个空格
//
//#include<stdio.h>
//        int main()
//    {
//        char a[10], b[10], i = 0, j = 0;
//        printf("输出字符串");
//        scanf("%s", a);// abcdef
//        for (i = 0; a[i] != '\0'; i++)
//        {
//            b[j++] = a[i];
//            b[j++] = ' ';
//        }
//        b[j] = '\0';
//        printf("%s", b);
//        return 0;
//    }



   
       /* 设有一数列，包含10 个数，已按升序排好。现要求编一程序，它能够把从指定位置开始的n个数按逆序重新排列并输出新的完整数列。进行逆序处理时要求使用指针方法（例如：原数列为2，4，6，8，10，12，14，16，18，20，若要求把从第4个数开始的5个数按逆序重新排列，则得到新数列为2，4，6，16，14，12，10，8，18，20。）

#include <stdio.h>

        void  method(int n, int m, int* a)
    {
        int* p = a, * q = new int[m];

        p = p + n - 1;
        for (int i = 0; i < m; i++)
        {
            q[i] = *p;
            p++;
        }
        p = p - m;
        for (i = 0; i < m; i++)
        {
            *p = q[m - 1 - i];
            p++;
        }
    }

    int main()
    {
        int a[10] = { 2,4,6,8,10,12,14,16,18,20 };
        method(4, 5, a);
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << ' ';
        }
        return 0;
    }*/
    




       /* 有一字符串，包含n个字符。写一个函数，将此字符串从第m个字符开始的全部字符复制成为另一个字符串并输出

        void strcpyn(char* s, char* t, int n)
    {
        char* p = s + n;
        char* q = t;
        while (*p)
        {
            *q = *p;
            q++;
            p++;
        }
        *q = '\0';

    }
    int main()
    {
        char s[100] = { 0 };
        char t[100] = { 0 };
        int n = 0;
        printf("input string s:\n");
        scanf("%s", s);
        printf("input start n:\n");
        scanf("%d", &n);
        strcpyn(s, t, n);
        puts(t);
        return 0;
    }
    */




     /*   设计函数char * insert(s1, s2, n), 用指针实现在字符串s1中的指定位置n处插入字符串s2

#include <stdio.h>

        char* insert(char* s1, char* s2, int n)
    {
        int j = 0;
        char* ss = new char[100];
        char* tsptr = ss;

        for (int i = 0; i < n; i++)
            *ss++ = *s1++;
        while (*s2 != '\0')
            *ss++ = *s2++;
        while (*s1 != '\0')
        {
            *ss++ = *s1++;
        }
        *ss = '\0';
        return tsptr;
    }
    void main(void)
    {
        char s1[] = "123456789";
        char s2[] = "1234";
        char* ss = insert(s1, s2, 4);
        printf("%s", ss);
    }*/
    



 /*       利用指针完成字符串复制函数char * strcpy(char* s1, char* s2)

#include "stdio.h"
        char* fun(char* s1, char* s2)
    {
        char* p = s2;
        while ((*s1) != '\0')
        {
            *s2 = *s1;
            s1++, s2++;
        }
        return p;
    }
    int main()
    {
        char* p, * strcpy;
        char* s1 = "world cup!";
        char* s2 = "good luck!";
        printf("s1=%s\ns2=%s\n", s1, s2);
        p = fun(s1, s2);
        printf("s1=%s\ns2=%s\n", s1, s2);
        return 0;
    }*/
    



//        编写一个使用指针的c函数，交换数组a和数组b中的对应元素
//#include<stdio.h>
//#include<stdlib.h>
//
//        void ex(int* a, int* b, int n) {
//        int i, tmp;
//        for (i = 0; i < n; i++) {
//            tmp = a[i]; a[i] = b[i]; b[i] = tmp;
//        }
//    }
//
//    int main()
//    {
//        int x[5] = { 1,2,3,4,5 };
//        int y[5] = { 6,7,8,9,10 };
//        int i, n = 5;
//        ex(x, y, n);
//        printf("\n X: ");
//        for (i = 0; i < n; i++)printf("%d ", x[i]);
//        printf("\n Y: ");
//        for (i = 0; i < n; i++)printf("%d ", y[i]);
//        system("pause");
    //return 0;
//    }