#include <stdio.h>//指针+函数传参
//
//void test1(int arr1[10])
//{
//
//}
//void test1(int arr1[])
//{
//
//}
//void test1(int *arr1)
//{
//
//}
//void test1(int* arr2[20])
//{
//
//}
//void test1(int* arr2[])
//{
//
//}
//void test2(int **arr2)
//{
//
//}
//int main()//一维数组的传参
//{
//int arr1[10]={0};
//int *arr2[20]={0};
//test1(arr1);
//test2(arr2);
//    return 0;
//}


//void test(int arr[3][5])
////{}
//void test1(int arr[][5])
////{}
////void test2(int arr[3][])//err
////{
////    //错误，二维数组不能省略列可以省略行
////}
////void test3(int *arr)//err
////{
////    //二维数组传的不是首元素地址
////}
//void test4(int **arr)
////{
////    //二级指针存放的是一级指针的地址
////}
//void test5(int (*arr)[5])
////{}
//void test6(int **arr)
////{}
//int main()
//{
//    int arr[3][5]={0};
//    test(arr);
//    test1(arr);
//    test2(arr);
//    test3(arr);
//    test4(arr);
//    test5(arr);
//    return 0;
//}
//void test1(int *pa)
//{
//
//}
//void test2(char *pc)
//int main()
//{
//    int a=10;
//    int* pa=&a;
//    test1(&a);//ok
//    test1(pa);//ok
//    char ch='w';
//    char* pc=&ch;
//    test2(&ch);//ok
//    test2(pc);//ok
//    return 0;
//}
//void(int **p)
//{
//
//}
//int main()
//{
//    int *ptr=NULL;
//    int**pp=&ptr;
//    test(&ptr);
//    test(pp);
//    int* arr[10];
//    test(arr);//指针数组也可以
//    return 0;
//}


//数组指针-是指向数组的指针
//函数指针-是指向函数的指针-存放函数地址的一个指针
//
//int Add(int x,int y)
//{
//    int z=x+y;
//    return z;
//}
//int main()
//{
//    int a=10;
//    int b=20;
////    int arr[10]={0};
////    int *p[10]=&arr;
//
//    //&arr
//    //arr
////    printf("%d\n",Add(a,b));
//    //&函数
//
//    //&函数名 和 函数名都是函数的地址
//    printf("%p\n",&Add);
//    printf("%p\n",Add);
////0000000000401550
////0000000000401550
//
//    int (*pa)(int ,int )=Add;//*pa是变量
//    printf("%d\n",(*pa)(2,3));//5//Add(2,3);//函数调用
//    return 0;
//}

//void Print(char* str)
//{
//    printf("%s\n",str);
//}
//int main()
//{
//    void (*p)(char*)=Print;
//    (*p)("hello bit");//Print("hello bit");//函数调用
//    return 0;
//}





//int main()
//{
//    (*  (   void(*)()   )0  )();//把0强制类型转换成：void(*)()函数指针类型-0就是一个函数的地址
//    //调用0地址指向该函数 (*0)();
//
//
//    void(  *signal(  int ,void(*)(int)  )  )(int);//int Add(int ,int )
//    //void(*         函数指针               )(int);
//    //signal是一个函数声明
//    //signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//    //signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//    void(  *signal(  int ,void(*)(int)  )  )(int);
//
//    //简化
//    typedef void(*punf_t)(int);
//    punf_t signal(int ,punf_t);
//
//    typedef unsigned int uint;
//
//    return 0;
//}


//int Add(int x,int y)
//{
//    return x+y;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//
//    int (*pa)(int ,int )=Add;
//    printf("%d\n",(*pa)(a,b));
//    printf("%d\n",Add(a,b));
//    printf("%d\n",(pa)(a,b));
//    printf("%d\n",pa(a,b));
//    printf("%d\n",(**pa)(a,b));
//    printf("%d\n",(***pa)(a,b));
//    return 0;
//}


//int Add(int x,int y)
//{
//    return x+y;
//}
//int Sub(int x,int y)
//{
//    return x-y;
//}
//int Mul(int x,int y)
//{
//    return x*y;
//}
//int Div(int x,int y)
//{
//    return x/y;
//}
//int main()
//{
//    //指针数组
//    int  *arr[5];
//    //需要一个数组，这个数组可以存放4个函数的地址-函数指针的数组
//
//    int (*pa)(int ,int )=Add;//Sub/Mul/Div
//    int (*parr[4])(int ,int )={Add,Sub,Mul,Div};
//    int i=0;
//    for(i=0;i<4;i++)
//    {
//        printf("%d\n",parr[i](2,3));//5,-1,6,0
//    }
//    return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//1.写一个函数指针 pf ,能够指向my_strcpy
//char* (*pf)(char* ,const char* );
//2.写一个函数指针数组 pfArr ，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char* dest,const char* src)

//计算器

//void menu()
//{
//    printf("*****************************\n");
//    printf("**** 1.add     2.sub      ***\n");
//    printf("**** 3.mul     3.div      ***\n");
//    printf("**** 5.xor     0.exit     ***\n");
//    printf("*****************************\n");
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//int Sub(int x,int y)
//{
//    return x-y;
//}
//int Mul(int x,int y)
//{
//    return x*y;
//}
//int Div(int x,int y)
//{
//    return x/y;
//}
//int Xor(int x,int y)
//{
//    return x^y;
//}
//void Calc(int (*pf)(int ,int))
//{
//    int x=0;
//    int y=0;
//    printf("请输入两个操作数：>");
//    scanf("%d%d",&x,&y);
//    printf("%d\n",pf(x,y));
//}
//int main()
//{
//    int input=0;
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d",&input);
//        switch(input)
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//        printf("选择错误\n");
//            break;
//        }
//    }while(input);
//    return 0;
//}
//int main()
//{
//    int input=0;
//    int x=0;
//    int y=0;
//    //pfArr是一个函数指针-转移表
//    int (*pfArr[])(int ,int)={0,Add,Sub,Mul,Div,Xor};
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d",&input);
//        if(input>=1&&input<=5)
//        {
//            printf("请输入两个操作数:>");
//            scanf("%d%d",&x,&y);
//            int ret=pfArr[input](x,y);
//            printf("%d\n",ret);
//        }
//        else if(input==0)
//        {
//            printf("退出\n");
//        }
//        else
//        {
//            printf("选择错误\n");
//        }
//    }while(input);
//    return 0;
//}
//int main()
//{
//    int input=0;
//    int x=0;
//    int y=0;
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d",&input);
//        switch(input)
//        {
//        case 1:
//            printf("请输入两个操作数：>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Add(x,y));
//            break;
//        case 2:
//            printf("请输入两个操作数：>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Sub(x,y));
//            break;
//        case 3:
//            printf("请输入两个操作数：>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Mul(x,y));
//            break;
//        case 4:
//            printf("请输入两个操作数：>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Div(x,y));
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//        printf("选择错误\n");
//            break;
//        }
//    }while(input);
//    return 0;
//}
//int main()
//{
//    int arr[10]={0};
//    int (*p)[10]=&arr;//取出数组的地址
//
//    int (*pf)(int ,int );//函数指针
//    int (*pfArr[4])(int ,int);//pfArr是一个数组-函数指针的数组
//    //ppfArr 是一个指向[函数指针数组]的指针
//    int (*(*ppfArr)[4])(int ,int)=&pfArr;
//    //
//    //ppfArr 是一个数组指针，指针指向的数组元素有4个元素
//    //指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//    //
//    return 0;
//}
//void print(char *str)
//{
//    printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//    printf("test\n");
//    p("bit");
//}
//int main()
//{
//    test(print);
//    return 0;
//}
//void BubbleSort(int arr[],int sz)
//{
//    //.....
//}
////qsort-可以排序任意类型的数据
//int main()
//{
//    //冒泡排序函数
//    //冒泡排序函数只能整形数组
//    int arr[]={1,3,5,7,9,2,4,6,8,0};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    BubbleSort(arr,sz);
//    return 0;
//}
