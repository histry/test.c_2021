#include <stdio.h>
#include <math.h>

//int main()
//{
//int i=0;
//int j=0;
//int count=0;
//for(i=101;i<=200;i+=2)
////for(i=100;i<=200;i++)
//{
//    for(j=2;j<=sqrt(i);j++)                //有问题
//    {
//        if(i%j==0)
//        break;
//      else
//        {
//        printf("%d ",i);
//        count++;
//        break;
//        }
//
//    }
//}
////printf("\n");
//printf("\ncount=%d\n",count);
//    return 0;
//}
int sushu (int i)//100到200间的素数
{
    for(i=101;i<=200;i+=2)
   {
    int j=0;
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
          return 0;
        else
        {
         return 1;
        break;
        }                                     //有问题
    }
}
int main()
{
int i=0;
int ret=sushu(i);
if(ret==1)
    printf("%d ",ret);
  return 0;
}
//int prime (int n)
//{
//    int j=0;
//    for(j=2;j<n;j++)
//   {
//       if(n%j==0)
//        return 1;}
//return 0;//素数只能被其本身和1整除，当j为n时跳出循环，返回零即为素数
//}
//int main()
//{
//    int n=0;
//    for(n=100;n<=200;n++)
//    if(prime(n)==0)
//    printf("%d ",n);
//
//    return 0;
//}





//int binary_search(int arr[],int k,int sz)//二分查找
//{
//   int left=0;
//   int right=sz-1;
//    while(left<=right)
//    {
//        int mid=(left+right)/2;
//      if(k<arr[mid])
//            right=mid-1;
//      else if(k>arr[mid])
//           left=mid+1;
//          else
//            return mid;
//           }
//           return -1;
//}
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int k=0;
//    scanf("%d",&k);
//    int sz=sizeof (arr)/sizeof (arr[0]);
//    int ret=binary_search(arr,k,sz);
//    if(ret==-1)
//     printf("找不到");
//    else
//     printf("找到了的数下标为：%d",ret);
//
//    return 0;
//}
//int main()
//{
//   int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int k;
//   printf("请输入数组中的数：");
//   scanf("%d",&k);
//   int sz=sizeof (arr)/sizeof (arr[0]);
//   int left=0;                               //二分查找效率更高
//   int right=sz-1;
//    while(left<=right)
//    {
//        int mid=(left+right)/2;
//       if(k<arr[mid])
//     right=mid-1;
//     if(k>arr[mid])
//   left=mid+1;
//      if (arr[mid]==k)
//           {
//               printf("找到了的数下标为：%d",mid);
//               break;
//           }
//    }                                       //判断用双==；赋值用单等=
//    if(left>right)
//            printf("找不到，输入错误");
//
//     return 0;
//}
