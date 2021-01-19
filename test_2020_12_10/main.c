#include <stdio.h>//一维数组
//int main()//筛选法求素数失败
//{
//    int n=0;
//    printf("求1...n之间的素数:n= ");
//    scanf("%d",&n);
//    int arr[n];
//    int i=0;
//    for(i=0;i<n;i++)
//    {
//        arr[i]=i+1;
//    }
//
//    if()
//    return 0;
//}
//int main()//例
//{
//    int prime[201]={0};
//    int i,j,counter=0;
//    for(i=2;i<=200;i++)
//    if(prime[i]==1)
//    {
//        printf("%5d",i);
//        counter++;
//        if(counter%10==0)
//            printf("\n");
//        for(j=1;j<200;j+=1)
//            prime[j]=0;
//    }
//    return 0;
//}
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



//int main()//进位制转换失败
//{
//    int k=0;
//    printf("请输入要进行进制转换的数：");
//    scanf("%d",&k);
//    int n=0;
//    printf("要转换成的进制为：");
//    scanf("%d",&n);
//    int arr[]={0};
//    int top=0;
//    while(k>0)
//    {
//        arr[top]=k%n;
//        k=k/n;
//        top++;
//    }
//    top--;
//    while(top>=0)
//    {
//        printf("%c",arr[top]>9 ? arr[top]+'A'-10:arr[top]+'0');
//    top--;
//    }
//    return 0;
//}



//int main()//二分查找
//{
//int arr[]={ 1,2,3,4,5,6,7,8,9,10 };
//int k=5;
//int left=0;
//int sz=sizeof(arr)/sizeof(arr[0]);
//int right=sz;
//int mid=0;
//if(k<=arr[sz-1])
//{
//    while(left<=right)
//{
//    mid=(left+right)/2;
//    if(arr[mid]<k)
//        left=mid+1;
//    else if(arr[mid]>k)
//        right=mid-1;
//   else
//        break;
//}
//
//        printf("%d的下标为%d",k,mid);
//}
//else printf("找不到");
//    return 0;
//}





//int main()//数据倒置
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int left=0;
//    int right=sz-1;
//    while(left<=right)
//    {
//        int tmp=arr[left];
//        arr[left]=arr[right];
//        arr[right]=tmp;
//        left++;
//        right--;
//    }
//    int i=0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//void reverse(int arr[],int sz)
//{
//    int left=0;
//    int right=sz-1;
//    while(left<=right)
//    {
//        int tmp=arr[left];
//        arr[left]=arr[right];
//        arr[right]=tmp;
//        left++;
//        right--;
//    }
//}
//int main()//数据倒置
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//
//    int i=0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}






//int main()//选择排序
//{
//    int arr[]={10,9,8,7,10,6,5,4,3,2,1};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//         int i=0;
//         int j=0;
//         for(j=0;j<sz;j++)
//         {
//             int min=j;//下标储存查找
//            for(i=0;i<sz;i++)
//    {
//            if(arr[i]>arr[min])
//         {
//             int max=arr[i];
//             arr[i]=arr[min];
//             arr[min]=max;
//         }
//    }
//   }
//     for(i=0;i<sz;i++)
//    {
//         printf("%d ",arr[i]);
//    }
//    return 0;
//}
//void selectSort(int arr[],int sz)
//{
//    int i=0;
//         int j=0;
//         for(j=0;j<sz;j++)
//         {
//             int min=j;
//            for(i=0;i<sz;i++)
//    {
//            if(arr[i]>arr[min])
//         {
//             int max=arr[i];
//             arr[i]=arr[min];
//             arr[min]=max;
//         }
//    }
//   }
//}
//int main()//选择排序
//{
//    int arr[]={10,9,8,7,10,6,5,4,3,2,1};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    selectSort(arr,sz);
//    int i=0;
//    for(i=0;i<sz;i++)
//    {
//         printf("%d ",arr[i]);
//    }
//    return 0;
//}





//
//int main()//冒泡排序
//{
//int arr[]={-5,-6,-7,-1,-2,1,9,5,4,3,1,0,2};
//int sz=sizeof(arr)/sizeof(arr[0]);
//int i=0;
//int j=0;
//for(j=0;j<sz-1;j++)
//    {
//    for(i=0;i<sz-j-1;i++)
//{
//    if(arr[i]>arr[i+1])
//    {
//        int max=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=max;
//    }
//}
//    }
//    for(j=0;j<sz;j++)
//    {
//        printf("%d ",arr[j]);
//    }
//    return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//int i=0;
//int j=0;
//for(j=0;j<sz-1;j++)
//    {
//    for(i=0;i<sz-j-1;i++)
//{
//    if(arr[i]>arr[i+1])
//    {
//        int max=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=max;
//    }
//}
//    }
//}
//int main()//冒泡排序
//{
//int arr[]={-5,-6,-7,-1,-2,1,9,5,4,3,1,0,2};
//int sz=sizeof(arr)/sizeof(arr[0]);
//bubble_sort(arr,sz);
//int i=0;
//    for(i=0;i<sz;i++)
//    {
//         printf("%d ",arr[i]);
//    }
//    return 0;
//}





//int main()//寻找最大值
//{
//    int arr[]={0,1,2,3,8,4,5,6,7,8,9};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int i=0;
//    int max=0;
//    for(i=0;i<sz;i++)
//    {
//        if(max<arr[i])
//        {
//            max=arr[i];
//        }
//    }
//printf("max=%d",max);
//}
//int Max(int arr[],int sz)
//{
//    int i=0;
//    int max=0;
//    for(i=0;i<sz;i++)
//    {
//        if(max<arr[i])
//        {
//            max=arr[i];
//        }
//    }
//    return max;
//}
//int main()
//{
//    int arr[]={0,1,2,3,8,4,5,6,7,8,9};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int max=Max(arr,sz);
//printf("max=%d",max);
//}





//
//int main()//数据插入成功
//{
//    int arr[15]={0,1,2,3,4,5,6,7,8,9};
//    int sz=10;
//      int i=0;
//       for(i=0;i<10;i++)//sz的数字已经发生了变化
//   {
//       printf("%d ",arr[i]);
//
//   }
//   printf("\n");
//    printf("请插入第几个数的后面：");
//    int pos = 0;
//    scanf("%d",&pos);
//    printf("请输入插入的数字：");
//    int k=0;
//    scanf("%d",&k);
//    while(pos<sz)//直接覆盖或交换覆盖
//    {
////       int tmp=arr[sz];
//       arr[sz]=arr[sz-1];
////       arr[sz-1]=tmp;
//       sz--;
//    }
//    arr[pos]=k;
//       for(i=0;i<10;i++)//sz的数字已经发生了变化
//   {
//       printf("%d ",arr[i]);
//
//   }
//    return 0;
//}
//void insertData(int arr[],int sz,int pos,int k)
//{
//        while(pos<sz)
//    {
//       arr[sz]=arr[sz-1];
//       sz--;
//    }
//    arr[pos]=k;
//}
//int main()
//{
//    int arr[15]={0,1,2,3,4,5,6,7,8,9};
//    int sz=10;
//    int i=0;
//      for(i=0;i<10;i++)//sz的数字已经发生了变化
//   {
//       printf("%d ",arr[i]);
//
//   }
//   printf("\n");
//    printf("请插入第几个数的后面：");
//    int pos = 0;
//    scanf("%d",&pos);
//    printf("请输入插入的数字：");
//    int k=0;
//    scanf("%d",&k);
//    insertData(arr,sz,pos,k);
//    for(i=0;i<10;i++)//sz的数字已经发生了变化
//   {
//       printf("%d ",arr[i]);
//
//   }
//   return 0;
//}






//int main()//数据删除
//{
//   int arr[]={0,1,2,3,4,5,6,7,8,9};
//   int sz=sizeof(arr)/sizeof(arr[0]);
//   int i=0;
//  for(i=0;i<10;i++)//sz的数字已经发生了变化
//   {
//       printf("%d ",arr[i]);
//
//   }
//   printf("\n");
//   int pos=0;
//   printf("请输入要删除的是第几个数的后面：");
//   scanf("%d",&pos);
//   while(pos-1<sz)//直接覆盖或交换覆盖
//   {
//       int tmp=arr[pos-1];
//       arr[pos-1]=arr[pos];
//       arr[pos]=tmp;
//       pos++;
//   }
//   for(i=0;i<sz-1;i++)
//   {
//       printf("%d ",arr[i]);
//   }
//    return 0;
//}
//#define N 10
//int delData(int a[],int n,int pos)
//{
//    int i;
//    if(pos>=0 && pos<n)
//    {
//        for(i=pos+1;i<n;i++)
//        {
//             a[i-1]=a[i];
//        }
//        return n-1;
//    }
//    else
//        return n;
//}
//int main()
//{
//    int a[N]={ 1,2,3,4,5,6,7,8,9,10 };
//    int n=0;
//    int pos=0;
//    printf("请输入要第几个元素：");
//    scanf("%d",&pos);
//    n=delData(a,N,pos-1);
//    int i=0;
//    for(i=0;i<N-1;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    return 0;
//}
//
//void mydelete(int k,int sz,int arr[])
//{
//     int i=0;
//if(arr[sz-1]>=k)
//{
//     for(i=0;i<sz;i++)
//    {
//     if(k==arr[i])
//     break;
//    }
//    while(i<sz)
//    {
//        arr[i]=arr[i+1];
//        i++;
//    }
//    for(i=0;i<sz-1;i++)
//    {
//       printf("%d ",arr[i]);
//    }
//}
//else
//    printf("不存在");
//}
//int main()//数据删除
//{
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int k=0;
//    printf("删除数字: ");
//    scanf("%d",&k);
//   mydelete(k,sz,arr);
//    return 0;
//}
//int main()//数据删除
//{
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int k=0;
//    printf("删除数字: ");
//    scanf("%d",&k);
//    int i=0;
//if(arr[sz-1]>=k)
//{
//     for(i=0;i<sz;i++)
//    {
//     if(k==arr[i])
//     break;
//    }
//    while(i<sz)
//    {
//        arr[i]=arr[i+1];
//        i++;
//    }
//    for(i=0;i<sz-1;i++)
//    {
//       printf("%d ",arr[i]);
//    }
//}
//else
//    printf("不存在");
//    return 0;
//}







//
//void bubble_sort(int arr[],int sz)
//{
//int i=0;
//int j=0;
//for(j=0;j<sz-1;j++)
//    {
//    for(i=0;i<sz-j-1;i++)
//{
//    if(arr[i]>arr[i+1])
//    {
//        int max=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=max;
//    }
//}
//    }
//}
//void partion(int arr[],int sz)
//{
//    int j=0;
//    int count=0;
//    for(j=0;j<sz;j++)
//    {
//        if(arr[j]==0)
//        {
//        count++;
//        }
//        if(count==1)
//        {
//             printf("%d ",arr[j]);
//        }
//        if(arr[j]==arr[j+1])
//        {
//             arr[j]=0;
//        }
//        if(arr[j]!=0)
//        {
//            printf("%d ",arr[j]);
//        }
//    }
//}
//int main()//排序+删除相同数
//{
//    int arr[]={-5,-6,-2,-1,-7,0,-1,-2,1,9,5,4,0,3,1,0,2};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//   bubble_sort(arr,sz);
//   partion(arr,sz);
//    return 0;
//}






//
//int main()//顺序查找
//{
//int arr[]={ 1,2,3,4,5,6,7,8,9,10 };
//int k;
//printf("要查找的数为:");
//scanf("%d",&k);
//int sz=sizeof(arr)/sizeof(arr[0]);
//if(arr[sz-1]>=k)
//{
//    int i=0;
//     for(i=0;i<sz;i++)
//    {
//     if(k==arr[i])
//     break;
//    }
//printf("%d的下标为：%d",k,i);
//}
//
//else
//    printf("不存在");
//    return 0;
//}
//void cz(int k,int sz,int arr[])
//{
//    if(arr[sz-1]>=k)
//{
//    int i=0;
//     for(i=0;i<sz;i++)
//    {
//     if(k==arr[i])
//     break;
//    }
//printf("%d的下标为：%d",k,i);
//}
//else
//    printf("不存在");
//}
//int main()
//{
//int arr[]={ 1,2,3,4,5,6,7,8,9,10 };
//int sz=sizeof(arr)/sizeof(arr[0]);
//int k=0;
//printf("要查找的数为:");
//scanf("%d",&k);
//cz(k,sz,arr);
//    return 0;
//}





//
//void swap(int* pa,int* pb)//指针交换程序成功
//{
//    int tmp=*pa;
//    *pa=*pb;
//    *pb=tmp;
//}
//int main()
//{
//    int pa=2;
//    int pb=3;
//    printf("%d ",pa);
//    printf("%d ",pb);
//    printf("\n");
//    swap(&pa,&pb);
//    printf("%d ",pa);
//    printf("%d ",pb);
//    return 0;
//}
//void swap(int arr[])//数组交换成功
//{
//    int tmp=arr[0];
//    arr[0]=arr[1];
//    arr[1]=tmp;
//}
//int main()
//{
//    int arr[2]={2,3};
//    printf("%d ",arr[0]);
//    printf("%d ",arr[1]);
//    printf("\n");
//    swap(arr);
//    printf("%d ",arr[0]);
//    printf("%d ",arr[1]);
//    return 0;
//}
//int main()//数字交换成功
//{
//    int a=3;
//    int b=5;
//    printf("%d %d\n",a,b);
//    int tmp=a;
//    a = b;
//    b= tmp;
//    printf("%d %d\n",a,b);
//    return 0;
//}





//
//int main()
//{
//    int n=0;
//    printf("输入的斐波那契个数：");
//    scanf("%d",&n);
//     int fib[n];
//     printf("%d ",fib[0]=1);
//     printf("%d ",fib[1]=1);
//     int i=0;
//     for(i=2;i<n;i++)
//     {
//         fib[i]=fib[i-1]+fib[i-2];
//         printf("%d ",fib[i]);
//     }
//    return 0;
//}
//void Fib(int n,int fib[])
//{
//    fib[0]=1;
//    fib[1]=1;
//    int i=0;
//     for(i=2;i<n;i++)
//     {
//         fib[i]=fib[i-1]+fib[i-2];
//     }
//}
//int main()
//{
//    int n=0;
//    printf("输入的斐波那契个数：");
//    scanf("%d",&n);
//    int fib[n];
//    int i=0;
//    Fib(n,fib);
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",fib[i]);
//    }
//
//    return 0;
//}






//int main()
//{
//    int n=0;//n个学生
//    printf("请输入学生成绩个数：");
//    scanf("%d",&n);
//
//    int arr[n];//n个学生成绩
//    int i=0;
//    int sum=0;//学生成绩总分
//    for(i=0;i<n;i++)//多次输入数组元素需要用循环实现
//    {
//        printf("请输入第%d个学生成绩：",i+1);
//        scanf("%d",&arr[i]);//多次输入arr[i]需要&
//        sum=sum+arr[i];
//    }
//    int a=sum/n;//n个学生的平均分
//    printf("平均分为：%d ",a);
//    int count=0;
//    for(i=0;i<n-1;i++)
//    {
//        count++;
//    }
//    printf("超过平均分的人数：%d ",count);
//    return 0;
//}
//void pingjunfen(int n,int arr[])
//{
//    int i=0;
//    int sum=0;
//    for(i=0;i<n;i++)
//    {
//        printf("请输入第%d个学生成绩：",i+1);
//        scanf("%d",&arr[i]);
//        sum=sum+arr[i];
//    }
//    int a=sum/n;
//    printf("平均分为：%d ",a);
//    int count=0;
//    for(i=0;i<n-1;i++)
//    {
//        count++;
//    }
//    printf("超过平均分的人数：%d",count);
//}
//int main()
//{
//    int n=0;
//    printf("请输入学生成绩个数：");
//    scanf("%d",&n);
//    int arr[n];
//    pingjunfen(n,arr);
//    return 0;
//}
