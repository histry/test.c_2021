#define _CRT_SECURE_NO_WARNINGS 1
//��ָ�뷽����дһ����������3�������������ǰ���С�����˳�����
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




//��ָ�뷽�� ����3���ַ��� ����С����˳�����
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

//�������һ�����֣��ҳ����еĴ�д��ĸ��Сд��ĸ���ո����֣��������ַ��ĸ���
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
//    printf("��д��ĸ %d Сд��ĸ %d\n", a, b);
//    printf("�ո� %d ���� %d ���ַ� %d\n", c, d, e);
//    return 0;
//}

//дһ����������3 3����ת��
//
//#include "stdio.h"
//
//void Transpose(int(*matrix)[3])
//{
//    int temp;
//    int i, j;
//
//    for (i = 1; i < 3; i++)/*ת��*/
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


//        ��ָ��һά�����ָ������������
//
//#include<stdio.h>
//#include<string.h>
//        int main()
//    {
//        void sort(char(*s)[6]);//һά�����ָ������������
//        int i;
//        char str[10][6];
//        char(*p)[6];//����һά�����ָ������������
//        printf("please input string:/n");
//        for (i = 0; i < 10; i++)
//            scanf("%s", &str[i]);
//        p = str;//��strһά����ָ�룬��ֵ��p;
//        sort(p);
//        printf("the output sequence :/n");
//        for (i = 0; i < 10; i++)
//            printf("%s/n", str[i]);
//        return 0;
//    }
//    void sort(char(*s)[6])//sָ��һά�����ָ��������������
//    {
//        int i, j;
//        char temp[6], * t;
//        t = temp;
//        for (i = 0; i < 9; i++)//iӦ��С��9�����С��10����ô�ͱȽ���9+1�Σ�����ð�ݷ���
//            for (j = 0; j < 9 - i; j++)//��һ�αȽ���Ҫ9�ξ���i=0��i=8���ŴΣ��ڶ�����Ҫ�Ƚ�8�Σ��������ƣ�
//                if (strcmp(s[j], s[j + 1]) > 0)
//                {
//                    strcpy(t, s[j]);
//                    strcpy(s[j], s[j + 1]);
//                    strcpy(s[j + 1], t);
//                }
//    }
    
//        ��ָ��������������������ʮ���ȳ����ַ���������һ��������������Ȼ���������������10�����ź�����ַ���
//
//        //��ָ�����鴦��
//#include<stdio.h>
//#include<string.h>
//        int main()
//    {
//        void sort(char* []);
//        int i;
//        char str[10][6], * p[10];
//        printf("please input 10 string:/n");
//        for (i = 0; i < 10; i++)//���Ƚ�10��str���׵�ַ��ֵ��10��p[i];
//            p[i] = str[i];//����i���ַ������׵�ַ����ָ������p�ĵ�i��Ԫ�أ�
//        for (i = 0; i < 10; i++)
//            scanf("%s", p[i]);//scanf���뵽&p[i]
//        sort(p);
//        printf("the output 10 string:/n");
//        for (i = 0; i < 10; i++)
//            printf("%s/n", p[i]);//�����p[i];
//    }
//    void sort(char* s[])
//    {
//        char* temp;
//        int i, j;
//        for (i = 0; i < 9; i++)
//            for (j = 0; j < 9 - i; j++)
//                if (strcmp(*(s + j), *(s + j + 1)) > 0)
//                {
//                    temp = *(s + j);//*(s+j)ָ������ָ��,����Ӧ�����ַ������׵�ַ�����Կ���ֱ�Ӹ�ֵ��tempָ�룻
//                    *(s + j) = *(s + j + 1);
//                    *(s + j + 1) = temp;
//                }
//    }
//   


        /*ָ�� ��n����������ʱ˳�����������, �ú���ʵ��

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



//        дһ������ʵ�������ַ����ıȽϡ����Լ�дһ��strcmp����������ԭ��Ϊ��
//        int stremp(char* p1, char* p2)
//        ��p1ָ���ַ���s1��p2ָ���ַ���s2��Ҫ�󣺵�s1 = s2ʱ������ֵΪ0����s1������s2ʱ���������Ƕ��ߵĵ�һ����ͬ�ַ���ASCII���ֵ���硰BOY���롰BAD�����ڶ���ĸ��ͬ����O���롰A��֮��Ϊ79 - 65 = 14�������s1 > s2���������ֵ�����s1 < s2���������ֵ��
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
//    int strcmp(char* p1, char* p2)            /*�����ַ����Ƚϵĺ���*/
//    {
//        int i;
//        i = 0;
//        while (*(p1 + i) == *(p2 + i))
//            if (*(p1 + i++) == '\0') return(0);         /*���ʱ���ؽ��0*/
//        return(*(p1 + i) - *(p2 + i));     /*����ʱ���ؽ��Ϊ��һ�������ַ�ASCII��Ĳ�ֵ*/
//    }
    /*    ����������£�
        �� Input two strings :
    CHINA�L
        Chen�L
        Result : -32
        �� Input two strings :
    hello!�L
        Hello!�L
        Result : 0
        �� Input two stings :
    dog�L
        cat�L
        result : 1

        ��һ�����򣬴����·ݺţ�������µ�Ӣ�����������磬���롰3�����������March����Ҫ����ָ�����鴦��

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
        /*���н����
        �� Input month : 2�L
        It is February.
        �� Input month : 8�L
        It is August.
        �� Input month : 13�L
        It is wrong.

        ���ַ���computer����һ���ַ����飬Ȼ��ӵ�һ����ĸ��ʼ���������ô�������ָ��ʵ��*/

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
//        //1.  ���ַ���computer����һ���ַ�����
//        strcpy(str, "computer");
//
//        //2. Ȼ��ӵ�һ����ĸ��ʼ���������ô�
//        while (*pStr != '\0')
//        {
//            printf("%c\n", *pStr);
//            pStr++;
//        }
//
//        return 1;
//    }
//    
//        �Ӽ���������һ���ַ���������������Ҫ�����һ�����ַ����� �µ��ַ�������ԭ���ַ����У� ÿ�����ַ�֮�����һ���ո� ��ԭ�����ַ���Ϊ��abcd���� �²������ַ���ӦΪ��a b c d��
//        ��дһ������ ��C ����������ַ� �� ÿ�����ַ�֮����һ���ո�
//
//#include<stdio.h>
//        int main()
//    {
//        char a[10], b[10], i = 0, j = 0;
//        printf("����ַ���");
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



   
       /* ����һ���У�����10 �������Ѱ������źá���Ҫ���һ�������ܹ��Ѵ�ָ��λ�ÿ�ʼ��n�����������������в�����µ��������С�����������ʱҪ��ʹ��ָ�뷽�������磺ԭ����Ϊ2��4��6��8��10��12��14��16��18��20����Ҫ��Ѵӵ�4������ʼ��5�����������������У���õ�������Ϊ2��4��6��16��14��12��10��8��18��20����

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
    




       /* ��һ�ַ���������n���ַ���дһ�������������ַ����ӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ��������

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




     /*   ��ƺ���char * insert(s1, s2, n), ��ָ��ʵ�����ַ���s1�е�ָ��λ��n�������ַ���s2

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
    



 /*       ����ָ������ַ������ƺ���char * strcpy(char* s1, char* s2)

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
    



//        ��дһ��ʹ��ָ���c��������������a������b�еĶ�ӦԪ��
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