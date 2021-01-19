#include <stdio.h>

//int sum(int m, int n)
//{
//    return m+n;
//}
//int main()
//{
//    int m, n;
//    printf("请输入m<n的数");
//    scanf("%d%d",&m,&n);
//    while(m>=n)
//    {
//        printf("请再次输入");
//        scanf("%d%d",&m,&n);
//    }
//
//    int ret=sum(m,n);
//
//    printf("sum = %d\n", ret);
//    return 0;
//}



//int LCM(int m,int n)
//{
//     int x=m;
//     int y=n;
//     int r,j;
//    while(m%n)
//    {
//        r=m%n;
//        m=n;
//        n=r;
//    }
//    j=n;
//    int num=(x*y)/j;
//return num;
//}
//int main()
//{
//    int m,n,r,j,x,y;
//    scanf("%d%d",&m,&n);
//    int num=LCM(m,n);
//    printf("%d",num);
//    return 0;
//}



//int main()
//{
//    int m,n,r;
//    scanf("%d%d",&m,&n);
//    int x=m;
//     int y=n;
//    while(m%n)
//    {
//        r=m%n;
//        m=n;
//        n=r;
//    }
//    int j=n;
//    int num=(x*y)/j;
//    printf("%d",num);
//    return 0;
//}



//int GCD(int m,int n)
//{
//    int r;
//        while(m%n)
//    {
//        r=m%n;
//        m=n;
//        n=r;
//    }
//    return n;
//}
//int main()
//{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    int c=GCD(a,b);
//    printf("%d",c);
//    return 0;
//}



//int main()
//{
//    int m,n,r;
//    scanf("%d%d",&m,&n);
//    while(m%n)
//    {
//        r=m%n;
//        m=n;
//        n=r;
//    }
//    printf("%d\n",n);
//    return 0;
//}



//void print(int i,int n)//九九乘法表
//{
//    int j,x;
//
//        for(i=9,x=1;i>0 && i<=9,x<=9;i--,x++)
//    {
//
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
//
//
//}
//int main()
//{
//    print (9,9);
//    return 0;
//}
//int main()
//{
//    int i,n,j,x;
//
//    for(i=9,x=1;i>0 && i<=9,x<=9;i--,x++)
//    {
//
//        for(j=1;j<=x-1;j++)
//        {
//            printf("       ");
//        }
//        for(n=i;n>0;n--)
//           {
//               printf("%d*%d=%2d ",i,n,i*n);
//           }
//        printf("\n");
//    }
//     return 0;
//}
//#include<string.h>//数组交换打印
//int main()
//{
//    char arr1[]="             ";
//    char arr2[]="*************";
//    int left=0;
//    int right=strlen(arr1)-1;
//    while(left<=right)
//    {
//        arr2[left]=arr1[left];
//        arr2[right]=arr1[right];
//        printf("%s\n",arr2);
//        left++;
//        right--;
//    }
//    return 0;
//}
//函数打印
//       1
//      2 2
//     3 3 3
//    ........
//void pyramid( int n )
//{
//    int i,j,m;
//    for(m=1;m<=n;m++)
//    {
//        for(j=1;j<=n-m;j++)
//        {
//        printf(" ");
//        }
//        for(i=1;i<=m;i++)
//        {
//        printf("%d ",m);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n;
//    printf("打印几行:");
//    scanf("%d",&n);
//    pyramid(n);
//    return 0;
//}
//打印
//*******
// *****
//  ***
//   *
//int main()
//{
//int i,j;
////for(i=1;i<=4;i++)
////{
////    for(j=1;j<=4-i;j++)
////        printf(" ");
////    for(j=1;j<=2*i-1;j++)
////        printf("*");
////    putchar('\n');
////}
//for(i=1;i<=4;i++)
//{
//    for(j=1;j<=i-1;j++)
//        printf(" ");
//    for(j=1;j<=9-2*i;j++)
//        printf("*");
//    putchar('\n');
//
//}
//    return 0;
//}
