#include <stdio.h>//ָ��

//int main()//ȡ����ƽ̨��32λ����64λ
//{
//printf("%d\n",sizeof(int*));//8
//printf("%d\n",sizeof(char*));//8
//printf("%d\n",sizeof(double*));//8
//printf("%d\n",sizeof(float*));//8
//printf("%d\n",sizeof(long*));//8
//printf("%d\n",sizeof(short*));//8
//    return 0;
//}


//int main()//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С������int*p p�ܷ����ĸ��ֽڣ�char*p p�ܷ���һ���ֽ�
//{
//    int a=0x11223344;
////    int *pa=&a;
////    *pa=0;//00 00 00 00
//
//    char *pc=&a;
//    *pc=0;//00 33 22 11
////    printf("%p\n",pa);
////    printf("%p\n",pc);
//    return 0;
//}


//int main()//ָ������;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ���������int *p��p-->4;char *p��p-->1
//{
//    int a=0x11223344;
//    int *pa=&a;
//    char *pc=&a;
//    printf("%p\n",pa);
//    printf("%p\n",pa+1);
////000000000061FE0C
////000000000061FE10
//    printf("%p\n",pc);
//    printf("%p\n",pc+1);
////000000000061FE0C
////000000000061FE0D
//    return 0;
//}


//int main()
//{
//    int arr[10]={0};
//    //int* p=arr;//��������Ԫ�ص�ַ//1 1 1 1 1 1 1 1 1 1
//    char* p=arr;//1 0 0 0 0 0 0 0 0 0
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=1;
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int a;//�ֲ���������ʼ����Ĭ�������ֵ
//δ��ʼ����ָ�����
//    int *p;//�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
//    *p=20;
//    return 0;
//}
//int main()//ָԽ�����
//{
//    int arr[10]={0};
//    int *p=arr;
//    int i=0;
//    for(i=0;i<12;i++)
//    {
//        printf("%d ",*(p++));//0 0 0 0 0 0 0 0 0 0 62 0
//    }
//    return 0;
//}


//int *test()//ָ��ָ��Ŀռ��ͷ�
//{
//    int a=10;
//    return &a;
//}
//int main()
//{
//    int *p=test();
//    *p=20;
//    return 0;
//}
//int *test()
//{
//    int a=10;
//    return &a;
//}
//int main()
//{
//    int *p=test();
//    printf("%d\n",*p);
//    return 0;
//}


//int main()
//{
// int a[10]={0};
// int i=0;
// int *p=a;
// for(i=0;i<=12;i++)
// {
////     *p=i;
////     p++;
//     *p++=i;
// }
//    return 0;
//}


//int main()
//{
////    int a=10;
////    int *pa=&a;//��ʼ��
////    int *p=NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//    int a=10;
//    int *pa=&a;
//    *pa=20;
//    pa=NULL;
////    *pa=10;
//if(pa!=NULL)
//{
//
//}
//    return 0;
//}


//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=0;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int *p=arr;
////    for(i=0;i<sz;i++)
////    {
////        printf("%d ",*p);
//////        p=p+1;
////        p++;
////    }
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",*p);//1 3 5 7 9 62 6422032 16 7345072 4199367
////        p+=2;
////    }
////    for(i=0;i<5;i++)
////    {
////        printf("%d ",*p);//1 3 5 7 9
////        p+=2;
////    }
//  return 0;
//}


//int main()
//{
//    char ch[5]={0};
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[0]-&arr[9]);//-9
////    printf("%d\n",&arr[0]-&ch[9]);//err
//    return 0;
//}

//int my_strlen(char *arr)
//{
//    char *start=arr;
//    char *end=arr;
//    while(*end!='\0')
//    {
//        end++;
//    }
//    return end-start;
//}
//int main()//strlen ���ַ�������//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2��
//{
//    char arr[]="bit";
//    int len=my_strlen(arr);
//    printf("%d",len);
//    return 0;
//}


//int main()
//{
//    int arr[10]={0};
//    printf("%p\n",arr);//��ַ-��Ԫ�صĵ�ַ
//    printf("%p\n",arr+1);
//printf("\n");
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);
//printf("\n");
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1);
//printf("\n");
////000000000061FDF0
////000000000061FDF4
////
////000000000061FDF0
////000000000061FDF4
////
////000000000061FDF0
////000000000061FE18
//
//    //1.&arr-&������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//    //2.sizeof(arr)-sizeof(��������-��������ʾ��������-sizeof�������������������������Ĵ�С
//    return 0;
//}

//int main()
//{
//    int arr[10]={0};
//    int *p=arr;
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=i;
//    }
////    for(i=0;i<10;i++)
////    {
//////        printf("%d ",arr[i]);
////        printf("%d ",*(p+i));
////    }
//        for(i=0;i<10;i++)
//    {
//        printf("%p==========%p\n",p+i,&arr[i]);
//    }
//    return 0;
//}


//int main()//����ָ��
//{
//    int a=0;
//    int* pa=&a;
//    int* *ppa=&pa;
//    * *ppa=20;
//    printf("%d\n",a);
//    printf("%d\n",**ppa);
//    return 0;
//}
