#include <stdio.h>//ָ��+��������
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
//int main()//һά����Ĵ���
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
////    //���󣬶�ά���鲻��ʡ���п���ʡ����
////}
////void test3(int *arr)//err
////{
////    //��ά���鴫�Ĳ�����Ԫ�ص�ַ
////}
//void test4(int **arr)
////{
////    //����ָ���ŵ���һ��ָ��ĵ�ַ
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
//    test(arr);//ָ������Ҳ����
//    return 0;
//}


//����ָ��-��ָ�������ָ��
//����ָ��-��ָ������ָ��-��ź�����ַ��һ��ָ��
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
//    //&����
//
//    //&������ �� ���������Ǻ����ĵ�ַ
//    printf("%p\n",&Add);
//    printf("%p\n",Add);
////0000000000401550
////0000000000401550
//
//    int (*pa)(int ,int )=Add;//*pa�Ǳ���
//    printf("%d\n",(*pa)(2,3));//5//Add(2,3);//��������
//    return 0;
//}

//void Print(char* str)
//{
//    printf("%s\n",str);
//}
//int main()
//{
//    void (*p)(char*)=Print;
//    (*p)("hello bit");//Print("hello bit");//��������
//    return 0;
//}





//int main()
//{
//    (*  (   void(*)()   )0  )();//��0ǿ������ת���ɣ�void(*)()����ָ������-0����һ�������ĵ�ַ
//    //����0��ַָ��ú��� (*0)();
//
//
//    void(  *signal(  int ,void(*)(int)  )  )(int);//int Add(int ,int )
//    //void(*         ����ָ��               )(int);
//    //signal��һ����������
//    //signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//    //signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//    void(  *signal(  int ,void(*)(int)  )  )(int);
//
//    //��
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
//    //ָ������
//    int  *arr[5];
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
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
//1.дһ������ָ�� pf ,�ܹ�ָ��my_strcpy
//char* (*pf)(char* ,const char* );
//2.дһ������ָ������ pfArr ���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char* dest,const char* src)

//������

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
//    printf("������������������>");
//    scanf("%d%d",&x,&y);
//    printf("%d\n",pf(x,y));
//}
//int main()
//{
//    int input=0;
//    do
//    {
//        menu();
//        printf("��ѡ��>");
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
//            printf("�˳�\n");
//            break;
//        default:
//        printf("ѡ�����\n");
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
//    //pfArr��һ������ָ��-ת�Ʊ�
//    int (*pfArr[])(int ,int)={0,Add,Sub,Mul,Div,Xor};
//    do
//    {
//        menu();
//        printf("��ѡ��>");
//        scanf("%d",&input);
//        if(input>=1&&input<=5)
//        {
//            printf("����������������:>");
//            scanf("%d%d",&x,&y);
//            int ret=pfArr[input](x,y);
//            printf("%d\n",ret);
//        }
//        else if(input==0)
//        {
//            printf("�˳�\n");
//        }
//        else
//        {
//            printf("ѡ�����\n");
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
//        printf("��ѡ��>");
//        scanf("%d",&input);
//        switch(input)
//        {
//        case 1:
//            printf("������������������>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Add(x,y));
//            break;
//        case 2:
//            printf("������������������>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Sub(x,y));
//            break;
//        case 3:
//            printf("������������������>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Mul(x,y));
//            break;
//        case 4:
//            printf("������������������>");
//            scanf("%d%d",&x,&y);
//            printf("%d\n",Div(x,y));
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//        printf("ѡ�����\n");
//            break;
//        }
//    }while(input);
//    return 0;
//}
//int main()
//{
//    int arr[10]={0};
//    int (*p)[10]=&arr;//ȡ������ĵ�ַ
//
//    int (*pf)(int ,int );//����ָ��
//    int (*pfArr[4])(int ,int);//pfArr��һ������-����ָ�������
//    //ppfArr ��һ��ָ��[����ָ������]��ָ��
//    int (*(*ppfArr)[4])(int ,int)=&pfArr;
//    //
//    //ppfArr ��һ������ָ�룬ָ��ָ�������Ԫ����4��Ԫ��
//    //ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
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
////qsort-���������������͵�����
//int main()
//{
//    //ð��������
//    //ð��������ֻ����������
//    int arr[]={1,3,5,7,9,2,4,6,8,0};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    BubbleSort(arr,sz);
//    return 0;
//}
