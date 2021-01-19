#include <stdio.h>
//int main()
//{
//    char arr[]={73,32,99,97,110,32,100,111,32,105,116,33,0};
//    printf("%s",arr);//I can do it!
//    return 0;
//}


//一，闰年问题//a%400==0||(a%4==0&&a%100!=0)可以被400整除或被4整除但不能被100整除
//int main()
//{
//    int a=0;
//    printf("please input the data of years:");
//    scanf("%d",&a);
//    if(a%400==0||a%4==0&&a%100!=0)
//    {
//        printf("\n 闰年：%d",a);
//    }
//    else
//    {
//        printf("\n 不是闰年：%d",a);
//    }
//    return 0;
//}


//二，数字整除问题//打印100中能被7整除的数
//int main()
//{
//    int i=1;
//    printf("100中能被 7 整除的数：\n");
//    while(7*i<100)
//    {
//        printf("%-2d ",7*i);
//        i++;
//        if(i%5==0)
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//int a=1,i=0;
//printf("能被 7 整除的数：\n");
//while(a<=100)
//{
//if(a%7==0)
//{
//printf("%4d",a);
//i++;
//if(i%5==0)
//printf("\n");
//}
//a++;
//}
//return 0;
//}


////三，五层递加三角
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//int main()
//{
//    int i=0;
//    for(i=1;i<=5;i++)
//    {
//    int j=0;
//    for(j=0;j<5-i;j++)
//    {
//        printf(" ");
//    }
//    for(j=0;j<i;j++)
//    {
//        printf("* ");
//    }
//    printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//int a,b,n=1;
//while(n<=5)
//{
//a=1,b=1;
//while(a<=5-n)
//{printf(" ");a++;}
//while(b<=2*n-1)
//{printf("*");b++;}
//printf("\n");
//n++;
//}
//return 0;
//}
//* * * * *
// * * * *
//  * * *
//   * *
//    *
//int main()
//{
//    int i=0;
//    for(i=5;i>=0;i--)
//    {
//    int j=0;
//    for(j=0;j<5-i;j++)
//    {
//        printf(" ");
//    }
//    for(j=0;j<i;j++)
//    {
//        printf("* ");
//    }
//    printf("\n");
//    }
//    return 0;
//}


////四，水仙花数//例：153=1*1*1+5*5*5+3*3*3（100——>1000）
//int main()
//{
//int a,m,n,q,p=1;
//a=100;
//while(a<1000)
//{
//m=a/100;
//n=a/10-m*10;
//q=a-m*100-n*10;
//if(a==m*m*m+n*n*n+q*q*q)
//{
//printf("%5d",a);
//if(p%2==0)
//printf("\n");
//p++;
//}
//a++;
//}
//return 0;
//}
////例：123
//int main()
//{
//    int count = 0;
//    int a=100;
//    for(a=100;a<1000;a++)
//    {
//    int i=a/100;//1
//    int j=(a%100)%10;//23-->3
//    int k=(a/10)%10;//12-->2
//
//    if(a==i*i*i+j*j*j+k*k*k)
//    {
//        printf("%d ",a);
//        ++count;
//        if(count%2== 0)
//        {
//            printf("\n");
//        }
//    }
//    }
//    return 0;
//}


//最大公因数//辗转相除法
//int main()
//{
//    int x=0;
//    int y=0;
//    int r=0;
//    scanf("%d%d",&x,&y);
//    while(x%y)
//    {
//        r=x%y;
//        x=y;
//        y=r;
//    }
//    printf("%d",y);
//    return 0;
//}


////五，最小公倍数=（x*y）/最大公因数//6 15 30
//int gy(int x,int y)
//{
//    int r;
//    if(x<y)
//    {
//        r=x;
//        x=y;
//        y=r;
//    }
//    r=x%y;
//    while(r!=0)
//    {   x=y;
//        y=r;
//        r=x%y;
//    }
//    return (y);
//}
//int gb(int m,int n)
//{
//    int p;
//    p=m*n/gy(m,n);
//    return (p);
//}
//int main()
//{
//    int a=0;
//    int b=0;
//    int c=0;
//    printf("please enter the data you want to handle:");
//    scanf("%d,%d",&a,&b);
//    c=gb(a,b);
//    printf("%d",c);
//    return 0;
//}


//六，1+1/3+1/5....//1.0
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int i=1;
//    float sum=0.0;
//    while(i<=n)
//{
//    sum +=1.0/(2*i-1);
//    i++;
//}
//    printf("%.3f",sum);
//    return 0;
//}


//七，1+1/（1+2）+1/（1+2+3）.....
//int main()
//{
//    int x=1;
//    scanf("%d",&x);
//    float sum=0.0;
//    int i=1;
//    int j=0;
//    while(i<=x)
//    {
//        j+=i;
//        i++;
//        sum=sum+1.0/(j);
//
//    }
//    printf("%.3f",sum);
//    return 0;
//}
//int main()
//{
//    int b,c=0;
//    float d=0.0;
//    int a=1;
//    scanf("%d",&b);
//    while(a<=b)
//{
//    c+=a;
//    a++;
//    d+=1.0/c;
//}
//    printf("%d\n",c);
//    printf("%.3f",d);
//    return 0;
//}


//八，1/（1*2*3*4....*b）//1/1 * 1/2 * 1/3 * 1/4 *.....
//int main()
//{
//    int b=0;
//    scanf("%d",&b);
//    float mul=1;
//    int i=1;
//    while(i<=b)
//    {
//        mul=mul*(1.0/(i));
//        i++;
//    }
//    printf("%.3f\n",mul);
//    return 0;
//}
//int main()
//{
//int a,b,c=1;
//float d;
//scanf("%d",&b);
//a=1;
//while(a<=b)
//{
//c*=a;
//a++;
//d=1.0/c;
//}
//printf("%d\n",c);
//printf("%.3f\n",d);
//return 0;
//}


////九，从大到小排列数组，求和，取极差
//int main()//冒泡排序
//{
//    int arr[]={10,9,8,7,6,5,4,3,2,1};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int i=0;
//    for(i=0;i<sz-1;i++)
//    {
//        int j=0;
//        for(j=0;j<sz-i-1;j++)
//    {
//         if(arr[j]>arr[j+1])
//        {
//         int tmp=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=tmp;
//        }
//    }
//    }
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//int a[10],m=0,i,j,t,c;
//float d=0.0;
//while(m<10)
//{
//scanf("%d",&a[m]);
//m++;
//}
//for(i=0;i<10;i++)
//printf("%3d",a[9-i]);
//printf("\n");
//for(i=0;i<10;i++)
//for(j=0;j<9-i;j++)
//{
//if(a[j]<a[j+1])
//{
//t=a[j];
//a[j]=a[j+1];
//a[j+1]=t;
//} }
//for(i=0;i<10;i++)
//printf("%3d",a[i]);
//c=a[0]-a[9];
//printf("\n%d",c);
//for(i=0;i<10;i++)
//d+=a[i];
//printf("\n%.3f",d/10.0);
//return 0;
//}


//矩阵转置及其元素最大值
//int main()
//{
//    int arr1[2][3]={{1,2,3},{4,5,6}};
//    int x=0;
//    int y=0;
//    for(x=0;x<2;x++)
//    {
//        for(y=0;y<3;y++)
//        {
//            printf("%d ",arr1[x][y]);
//        }
//        printf("\n");
//    }
//    int max=0;
//    for(x=0;x<2;x++)
//    {
//        for(y=0;y<3;y++)
//        {
//            if(arr1[x][y]>max)
//            {
//                max=arr1[x][y];
//            }
//        }
//    }
//    printf("%d\n",max);
//    int arr2[3][2]={0};
//    int j=0;
//    for(j=0;j<3;j++)
//    {
//        int i=0;
//        for(i=0;i<2;i++)
//    {
//        arr2[j][i]=arr1[i][j];
//    }
//    }
//    for(x=0;x<3;x++)
//    {
//        for(y=0;y<2;y++)
//        {
//            printf("%d ",arr2[x][y]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//int i,j,a[2][3],b[3][2],max;
//for(i=0;i<2;i++)
//for(j=0;j<3;j++)
//scanf("%d",&a[i][j]);
//for(i=0;i<2;i++)
//{
//for(j=0;j<3;j++)
//printf("a[%d][%d]=%d ",i,j,a[i][j]);
//printf("\n");
//}
//for(i=0;i<2;i++)
//{
//for(j=0;j<3;j++)
//{
//b[j][i]=a[i][j];
//} }
//for(i=0;i<3;i++)
//{
//for(j=0;j<2;j++)
//printf("b[%d][%d]=%2d ",i,j,b[i][j]);
//printf("\n");
//}
//max=a[0][0];
//for(i=0;i<2;i++)
//for(j=0;j<3;j++)
//{
//if(max<a[i][j])
//max=a[i][j];
//}
//printf("max=%d",max);
//return 0;
//}


//十一，矩阵对角线元素和
//#define N 3
//int main()
//{
//    int arr[N][N]={{1,2,3},{4,5,6},{7,8,9}};
//    int n=N;
//    int i=0;
//    int sum=0;
//    for(i=0;i<n;i++)
//    {
//        sum=sum+arr[i][i];
//    }
//    printf("%d",sum);
//    return 0;
//}
//int main()
//{
//int i,j,m=0,a[3][3];
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//scanf("%d",&a[i][j]);
//for(i=0;i<3;i++)
//{
//for(j=0;j<3;j++)
//printf("a[%d][%d]=%2d ",i,j,a[i][j]);
//printf("\n");
//}
//printf("对角线之和为：");
//for(i=0;i<3;i++)
//m+=a[i][i];
//printf("%d",m);
//return 0;
//}


//十二，斐波那契数列//第一项与第二项不变，后面的fib[i]=fib[i-1]+fib[i-2]
//int main()
//{
//    int fib[20]={1,1};
//    int i=0;
//    for(i=2;i<20;i++)
//    {
//        fib[i]=fib[i-1]+fib[i-2];
//    }
//    for(i=0;i<20;i++)
//    {
//    if(i%5==0)
//    printf("\n");
//    printf("%-5d",fib[i]);
//    }
//    return 0;
//}
//int main()
//{
//int fib[20]={1,1};
//int i;
//for(i=2;i<20;i++)
//fib[i]=fib[i-1]+fib[i-2];
//for(i=0;i<20;i++)
//{
//if(i%5==0)
//printf("\n");
//printf("%5d",fib[i]);
//}
//return 0;
//}


//十三，杨辉三角
//    1
//    1    1
//    1    2    1
//    1    3    3    1
//    1    4    6    4    1
//    1    5   10   10    5    1
//    1    6   15   20   15    6    1
//    1    7   21   35   35   21    7    1
//    1    8   28   56   70   56   28    8    1
//    1    9   36   84  126  126   84   36    9    1
//                       1
//                     1    1
//                   1    2    1
//                 1    3    3    1
//               1    4    6    4    1
//             1    5   10   10    5    1
//           1    6   15   20   15    6    1
//         1    7   21   35   35   21    7    1
//       1    8   28   56   70   56   28    8    1
//     1    9   36   84  126  126   84   36    9    1
//#define N 10
//int main()
//{
//    int i=0;
//    int arr[N][N]={0};
//    int x=N;
//    for(i=1;i<x;i++)
//    {
//        arr[0][0]=1;
//        arr[i][0]=1;
//        arr[i][i]=1;
//        int j=0;
//        for(j=1;j<=i;j++)
//        {
//            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//        }
//    }
//    int j=0;
//    for(i=0;i<x;i++)
//    {
//        for(j=0;j<(20-2*i);j++)
//        {
//            printf(" ");
//        }
//        for(j=0;j<=i;j++)
//        {
//            printf("%4d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//int a[10][10],i,j;
//for(i=0;i<10;i++)
//{
//a[i][0]=1;
//a[i][i]=1;
//}
//for(i=2;i<10;i++)
//for(j=1;j<i;j++)
//a[i][j]=a[i-1][j]+a[i-1][j-1];
//for(i=0;i<10;i++)
//{
//for(j=0;j<=i;j++)
//printf("%5d",a[i][j]);
//printf("\n");
//}
//return 0;
//}


//十四，101-200 之间的素数
//int main()
//{
//int sum,num,i;
//for(num=101;num<=200;num++)
//{
//sum=0;
//for(i=2;i<num;i++)
//{
//if(num%i==0)
//sum++;
//}
//if(sum==0)
//printf("%5d",num);
//}
//return 0 ;
//}


//十六，猴子吃桃
//int main()
//{
//int x1,x2=1,day;
//for(day=9;day>0;day--) {
//x1=2*(x2+1);
//x2=x1;
//}
//printf("第一天的桃子数:%d\n",x1);
//return 0;
//}


//5.1 用 π/4≈1-1/3+1/5-1/7+…公式求 π 的值，直到某一项的绝对值小于 10-6为止。
//#include <math.h>
//int main ()
//{
// double PI=0.0,a=1.0,term=1.0;
// int sign=1;
// while(fabs(term)>=1e-6)
// {
// PI+=term;
// a=a+2;
// sign=-sign;
// term=sign/a;
// }
// PI=PI*4;
// printf("PI=%10.8f\n",PI);
//return 0;
//}


//5.9 题目要求：用近似公式求：e≈1+1/1!+1/2!+1/3!+….+1/n!,使误差小于给定的ε，设ε=10-5。 &
//#include<math.h>
//int main()
//{
//int i=1,q=1;
//float e=1,p;
//for(i;fabs(p)>=1e-5;i++)
//{
//q=i*q;
//p=1.0/q;
//e=e+p;
//}
//printf("e=%f\n",e);


//5.10 输入两个正整数 m 和 n,求其最大公约数和最小公倍数。
//int main()
//{
//int m,n,i,j,k,g,t;
//printf("请输入两个正整数：\n");
//scanf("%d,%d",&m,&n);
//if(m<=n)
//{
//k=m;
// m=n;
//n=k;
//}
//for(i=n;i>=0;i--) {
//if((m%i==0)&&(n%i==0))
//{
//g=i;
// break;
//} }
//for(j=m;;j++)
//{
//if((j%m==0)&&(j%n==0))
//{
//t=j;
//break;
//} }
//printf("最大公约数：%d,最小公倍数：%d",g,t);
//}
//return 0;
//}


////5.14 打印大小可变的菱形图案。
//int main()
//{
//    int i=0;
//    printf("enter max line:");
//    int n=0;
//    scanf("%d",&n);
//    for(i=0;i<n/2+1;i++)
//    {
//        int j=0;
//        for(j=0;j<n-i;j++)
//        {
//            printf(" ");
//        }
//    }
//    return 0;
//}
//int main()
//{
//int i,j,k,l;
//printf("enter max line:"); /*输入最大行数,奇数*/
//scanf("%d",&j);
//for (i=-j/2;i<=j/2;i++)
//{
//if (i<0) l=-i;
//else l=i;
//for (k=0;k<l;k++)
//printf(" "); /*输出每一行的空格*/
//if (i>0)
//l=-i;
//else l=i;
//for (k=0;k<(l+j/2)*2+1;k++)
//printf("*"); /*输出每一行的星号*/
//printf("\n"); /*输出第一行的回车*/
//}
//return 0;
//}


////字母输出其后的。
int main()
{

    return 0;
}
//int main()
//{
//char ch;
//ch=getchar();
//while(ch!='!')
//{
//if(ch>='A'&&ch<='Z'||(ch>='a'&&ch<='z')) printf("%c",ch+1);
//else printf("%c",ch);
//ch=getchar();
//}
//putchar('\n');
//return 0;
//}


//变换大小写
//int main()
//{
//char ch;
//ch=getchar();
//while(ch!='!')
//{
//if(ch>='A'&&ch<='Z')
//printf("%c",ch+32);
//else if (ch>='a'&&ch<='z')
//printf("%c",ch-32);
//else
//printf("%c",ch);
//ch=getchar();
//}
//putchar('\n');
//}
