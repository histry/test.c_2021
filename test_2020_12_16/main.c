#include <stdio.h>//指针数组+数组指针
//int main()
//{
//    int arr[10]={0};//整形数组
//    char ch[5]={0};//字符形数组
//    int* parr[4];//存放整形指针的数组//[]的优先级比较*高
//    char* pch[5];//存放字符形指针的数组
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
//    //整形数组-存放整形
//    //字符数组-存放字符
//    //指针数组-存放指针
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
////    int *p=NULL;//p是整形指针-指向整形的指针-可以用来存放整形数据的地址
////    char *pc=NULL;//pc是字符型指针-指向字符型的指针-可以用来存放字符型数据的地址
////    int arr[10]={0};
////    //arr-首元素地址
////    //&arr[0]-首元素地址
////    //&arr-数组的地址
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int (*p)[10]=arr;//存的是数组的地址
////上面的p就是数组指针
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
//参数是数组的形式
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
////参数是指针的形式
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
////    print2(arr,3,5);//将其看做3个一维数组
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
