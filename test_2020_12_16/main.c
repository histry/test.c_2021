#include <stdio.h>//ָ������+����ָ��
//int main()
//{
//    int arr[10]={0};//��������
//    char ch[5]={0};//�ַ�������
//    int* parr[4];//�������ָ�������//[]�����ȼ��Ƚ�*��
//    char* pch[5];//����ַ���ָ�������
//    return 0;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    int c=30;
//    int* pa=&a;
//    int* pb=&b;
//    int* pc=&c;
//    //��������-�������
//    //�ַ�����-����ַ�
//    //ָ������-���ָ��
//    int* arr1[3]={&a,&b,&c};
//    int* arr2[3]={pa,pb,pc};
//    int i=0;
//    for(i=0;i<3;i++)
//    {
//        printf("%d ",*(arr1[i]));
//        printf("%d ",*arr2[i]);
//        printf("%d ",*(*(arr2+i)));
//    }
//    return 0;
//}

//
//int main()
//{
//int arr1[5]={1,2,3,4,5};
//int arr2[5]={2,3,4,5,6};
//int arr3[5]={3,4,5,6,7};
//int* parr[3]={arr1,arr2,arr3};
//int i=0;
//for(i=0;i<3;i++)
//{
//    int j=0;
//    for(j=0;j<5;j++)
//    {
//        printf("%d ",*(parr[i]+j));
//    }
//    printf("\n");
//}
//    return 0;
//}


//int main()
//{
////    int *p=NULL;//p������ָ��-ָ�����ε�ָ��-������������������ݵĵ�ַ
////    char *pc=NULL;//pc���ַ���ָ��-ָ���ַ��͵�ָ��-������������ַ������ݵĵ�ַ
////    int arr[10]={0};
////    //arr-��Ԫ�ص�ַ
////    //&arr[0]-��Ԫ�ص�ַ
////    //&arr-����ĵ�ַ
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int (*p)[10]=arr;//���������ĵ�ַ
////�����p��������ָ��
//    return 0;
//}
//
//int main()
//{
//    char* arr1[5];
//    char* (*pa1)[5]=&arr1;
//
//    int arr2[10]={0};
//    int* (*pa2)[10]=&arr2;
//    return 0;
//}

//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int *p=arr;
////    int i=0;
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",*(p+i));
////    }
//    int (*pa)[10]=&arr;
//    int i=0;
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",*(*pa+i));//*pa==arr
////    }
////        for(i=0;i<10;i++)
////    {
////        printf("%d ",*(arr+i));//*pa==arr
////    }
////            for(i=0;i<10;i++)
////    {
////        printf("%d ",(*pa)[i]);//*pa==arr
////    }
//    return 0;
//}
//�������������ʽ
//void print1(int arr[3][5],int x,int y)
//{
//    int i=0;
//    int j=0;
//    for(i=0;i<x;i++)
//    {
//        int j=0;
//        for(j=0;j<y;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//}
////������ָ�����ʽ
//void print2(int (*p)[5],int x,int y)
//{
//    int i=0;
//    for(i=0;i<x;i++)
//    {
//        int j=0;
//        for(j=0;j<y;j++)
//        {
////            printf("%d ",*(*(p+i)+j));
////            printf("%d ",(*(p+i))[j]);
////              printf("%d ",*(p[i]+j));
//              printf("%d ",p[i][j]);//p==arr
//        }
//        printf("\n");
//    }
//}
//int main()
//{
////    int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
////    print1(arr,3,5);
////    print2(arr,3,5);//���俴��3��һά����
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int* p=& arr;//arr==p
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",p[i]);//p[i]==arr[i]
//        printf("%d ",arr[i]);
//        printf("%d ",*(p+i));
//        printf("%d ",*(arr+i));//*(p+i)==*(arr+i)
//    }
//    return 0;
//}
