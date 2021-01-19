#include <stdio.h>
//int main()//输入e的值
//{
// double a=1.0;
// double sum=0.0;
// int n=0;
// int x=0;
// printf("请输入e的精确度：")
// scanf("%d",&x);
// for (n=1;n<=x;n++)
// {
//     a=a*1.0/n;
//     sum=sum+a;
// }
// printf("e=%.8lf\n",sum+1);
//    return 0;
//}





//int main()//三个数的由小到大的排序
//{
//    int a,b,c,t;
//    printf("请输入任意三个数：")
//scanf("%d%d%d",&a,&b,&c);
//
//    if (a>b)
//    {
//        t=a;
//        a=b;
//        b=t;
//    }
//    if(a>c)
//    {
//        t=a;
//        a=c;
//        c=t;
//    }
//    if(b>c)
//    {
//        t=b;
//        b=c;
//        c=t;
//    }
//    printf("%d->%d->%d",a,b,c);
//    return 0;
//}






//打印
//***
//**
//*
//int main()
//{
//    int i;
//
//    for (i=1;i<=4;i++)
//    printf("*");
//    printf("\n");
//    for(i=1;i<=3;i++)
//    printf("*");
//    printf("\n");
//    for (i=1;i<=2;i++);
//    printf("*");
//    printf("\n");
//    return 0;
//}





//int main()//倒着的九九乘法表
//{
//    int i=0;
//    int j=0;
//    int n=0;
//    int x=0;
//        for(i=9,x=1;i>0 && i<=9,x<=9;i--,x++)
//    {
//        for(j=1;j<=(x-1);j++)
//        {
//            printf("       ");
//        }
//        for(n=i;n>0;n--)
//           {
//               printf("%d*%d=%2d ",i,n,i*n);
//           }
//        printf("\n");
//    }
//return 0;
//}





//int main()//ab之间的运算
//{
//    int a,b,num1,num2,num3,num4;
//printf("请输入a和b")
//scanf("%d %d",&a,&b);
//    num1=a+b;
//    num2=a-b;
//    num3=a*b;
//    num4=a/b;
//
//    printf("%d+%d=%d\n",a,b,num1);
//    printf("%d-%d=%d\n",a,b,num2);
//    printf("%d*%d=%d\n",a,b,num3);
//    printf("%d/%d=%d\n",a,b,num4);
//    return 0;
//}






//int main()//求1-1/2+1/3-1/4+....-1/n=
//{
//int i=0;
//double sum=0.0;
//int flag=1;
//int n=0;
//printf("请输入n的值：");
//scanf("%d",&n);
//for (i=1;i<=n;i++)
//{
//    sum=sum+flag*1.0/i;
//    flag=-flag;
//}
//printf("sum=%lf",sum);
//    return 0;
//}
