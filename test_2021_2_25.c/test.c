#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//char* fun(char* p1, char* p2)
//{
//    int i = 0;
//    i = strcmp(p1, p2);
//    if (0 == i)
//    {
//        return p1;
//    }
//    else
//    {
//        return p2;
//    }
//}
//
//int main()
//{
//    char* (*pf)(char* p1, char* p2);
//    pf = &fun;
//    (*pf)("aa", "bb");
//    return0;
//}




//void Function()
//{
//    printf("CallFunction!\n");
//}
//int main()
//{
//    void(*p)();
//    *(int*)&p = (int)Function;
//    (*p)();
//    return0;
//}




//(*(char** (*)(char**, char**))0)(char**, char**);

//char* (*pf)(char* p);



//char* (*pf[3])(char* p);

//#include <stdio.h>
//#include <string.h>
//
//char* fun1(char* p)
//{
//    printf("%s\n", p);
//    return  p;
//}
//char* fun2(char* p)
//{
//    printf("%s\n", p);
//    return p;
//}
//char* fun3(char* p)
//{
//    printf("%s\n", p);
//    return p;
//}
//int main()
//{
//    char* (*pf[3])(char* p);
//    pf[0] = fun1;//可以直接用函数名
//    pf[1] = &fun2;//可以用函数名加上取地址符
//    pf[2] = &fun3; <br>
//        pf[0]("fun1");
//    pf[0]("fun2");
//    pf[0]("fun3");
//    return 0;
//}
//



//char* (*(*pf)[3])(char* p);

//#include <stdio.h>
//#include <string.h>
//
//char* fun1(char* p)
//{
//    printf("%s\n", p);
//    return p;
//}
//
//char* fun2(char* p)
//{
//    printf("%s\n", p);
//    return p;
//}
//
//char* fun3(char* p)
//{
//    printf("%s\n", p);
//    return p;
//}
//
//int main()
//{
//    char* (*a[3])(char* p);
//    char* (*(*pf)[3])(char* p);
//    pf = &a;
//
//    a[0] = fun1;
//    a[1] = &fun2;
//    a[2] = &fun3;
//
//    pf[0][0]("fun1");
//    pf[0][1]("fun2");
//    pf[0][2]("fun3");
//    return 0;
//}﻿​