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
//    for(j=2;j<=sqrt(i);j++)                //������
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
int sushu (int i)//100��200�������
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
        }                                     //������
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
//return 0;//����ֻ�ܱ��䱾���1��������jΪnʱ����ѭ���������㼴Ϊ����
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





//int binary_search(int arr[],int k,int sz)//���ֲ���
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
//     printf("�Ҳ���");
//    else
//     printf("�ҵ��˵����±�Ϊ��%d",ret);
//
//    return 0;
//}
//int main()
//{
//   int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int k;
//   printf("�����������е�����");
//   scanf("%d",&k);
//   int sz=sizeof (arr)/sizeof (arr[0]);
//   int left=0;                               //���ֲ���Ч�ʸ���
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
//               printf("�ҵ��˵����±�Ϊ��%d",mid);
//               break;
//           }
//    }                                       //�ж���˫==����ֵ�õ���=
//    if(left>right)
//            printf("�Ҳ������������");
//
//     return 0;
//}
