#include <stdio.h>//二维数组
//#define N 100
//void compress(char arr[N])
//{
//    int i=0;
//    int j=1;
//    while(arr[j-1])
//    {
//        if(arr[i]==arr[j])
//        {
//            j++;
//        }
//        else
//        {
//            arr[++i]=arr[j++];
//        }
//    }
//    arr[i]='\0';
//}
//int main()
//{
//    char arr[N]={0};
//    gets(arr);
//    int i=0;
//    int sz=strlen(arr);
//    int count=0;
//    for(i=1;i<sz;i++)
//    {
//        if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1])
//        {
//            count++;
//        }
//    }
//    compress(arr);
//    puts(arr);
//    printf("%d",strlen(arr)-count);
//    return 0;
//}
//#define N 100
//int main()
//{
//char arr1[N]={0};
//gets(arr1);
//char arr2[N][N]={0};//二维数组的初始化有问题
//int arr3[10];
//int i=0;
//int j=0;int k=0;
//while(arr1[i]&&arr1[i])//当前代码循环条件必须有arr1[i]&&
//{
//         while(arr1[i]&&arr1[i] != ' ')
//    {
//        k=0;
//        arr2[j][k]=arr1[i];
//        printf("%c",arr2[j][k]);
//        k++;
//        i++;
//    }
//    printf("\n");
//    j++;i++;
//}
//    return 0;
//}
//#define N 100
//#include<string.h>
//int main()
//{
//char arr1[N]={0};
//gets(arr1);
//char arr2[N][N]={0};//二维数组的初始化有问题
//memset(arr2,0,sizeof(arr2));
//int arr3[10];
//int i=0;
//int j=0;int k=0;
//while(arr1[i])
//{
//         while(arr1[i] != ' ')
//    {
//        k=0;
//        arr2[j][k]=arr1[i];
//        printf("%c",arr2[j][k]);
//        k++;
//        i++;
//    }
//    printf("\n");
//    j++;i++;
//}
//    return 0;
//}





//int main()//矩阵的倒置//覆盖不行
//{
//    int m=0;
//    printf("请输入矩阵的列数：");
//    scanf("%d",&m);
//    int n=0;
//    printf("请输入矩阵的行数：");
//    scanf("%d",&n);
//    int arr[n][m];
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)//输入矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)//打印矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//    for(j=0;j<m;j++)//矩阵转换
//    {
//       for(i=0;i<n;i++)
//       {
//           arr[j][i]=arr[i][j];
//       }
//    }
//     for(j=0;j<m;j++)//输出矩阵
//    {
//       for(i=0;i<n;i++)
//       {
//          printf("%d ",arr[j][i]);
//       }
//       printf("\n");
//    }
//
//    return 0;
//}
//int main()//俩数组
//{
//    int m=0;
//    printf("请输入矩阵的列数：");
//    scanf("%d",&m);
//    int n=0;
//    printf("请输入矩阵的行数：");
//    scanf("%d",&n);
//    int arr1[n][m];
//    int arr2[m][n];
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)//输入矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr1[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)//打印矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",arr1[i][j]);
//        }
//        printf("\n");
//    }
//    for(j=0;j<m;j++)//矩阵转换
//    {
//       for(i=0;i<n;i++)
//       {
//           arr2[j][i]=arr1[i][j];
//       }
//    }
//     for(j=0;j<m;j++)//输出矩阵
//    {
//       for(i=0;i<n;i++)
//       {
//          printf("%d ",arr2[j][i]);
//       }
//       printf("\n");
//    }
//    return 0;
//}
//定义为常数
//#define m 4//列
//#define n 2//行
//void juzhengshuru(int arr1[n][m])
//{
//    int i=0;
//    int j=0;
// for(i=0;i<n;i++)//输入矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr1[i][j]);
//        }
//    }
//}
//void juzhengdayin(int arr1[n][m])
//{
//    int i=0;
//    int j=0;
//        for(i=0;i<n;i++)//打印矩阵
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",arr1[i][j]);
//        }
//        printf("\n");
//    }
//}
//void juzhengzhuhuan(int arr1[n][m],int arr2[m][n])
//{
//    int i=0;
//    int j=0;
//        for(j=0;j<m;j++)//矩阵转换
//    {
//       for(i=0;i<n;i++)
//       {
//           arr2[j][i]=arr1[i][j];
//       }
//    }
//}
//void juzhengshuchu(int arr2[m][n])
//{
//    int i=0;
//    int j=0;
//         for(j=0;j<m;j++)//输出矩阵
//    {
//       for(i=0;i<n;i++)
//       {
//          printf("%d ",arr2[j][i]);
//       }
//       printf("\n");
//    }
//}
//int main()
//{
//    int arr1[n][m];
//    int arr2[m][n];
//juzhengshuru(arr1);
//juzhengdayin(arr1);
//juzhengzhuhuan(arr1,arr2);
//juzhengshuchu(arr2);
//    return 0;
//}





//#define N 2//科目数
//#define M 3//学生人数
//int main()//科目的平均分
//{
//    int  arr[N][M];
//    int i=0;
//    int j=0;
//    for(i=0;i<N;i++)
//    {
//            int sum=0;
//        for(j=0;j<M;j++)
//        {
//            scanf("%d",&arr[j][i]);
//            sum=sum+arr[j][i];
//        }
//            printf("%d \n",sum/M);
//    }
//    return 0;
//}
//#define M 4
//#define N 3
//int main()
//{
//    float score[M+1][N+1];
//    //定义二维数组，行数和列数比学生数多1
//    //第0行用来存放课程的平均分，第0列用来存放学生的总分
//    int i=0;int j=0;
//    for(i=1;i<=M;i++)
//    {
//        printf("请输入%d号学生的%d门课程成绩：",i,N);
//        for(j=1;j<=N;j++)
//        {
//            scanf("%f",&score[i][j]);
//        }
//    }
//    //求每位学生的总分
//    for(i=1;i<=M;i++)
//    {
//        score[i][0]=0;//第i位学生的总分存到第i行第0列
//        for(j=1;j<=N;j++)
//        {
//            score[i][0]+=score[i][j];
//        }
//    }
//    //求每门课程的平均分
//    for(j=1;j<=N;j++)
//    {
//        score[0][j]=0;//每门课程的平均分成绩存到所在列的第0行
//        for(i=1;i<=M;i++)
//        {
//            score[0][j]+=score[i][j];
//        }
//        score[0][j]/=M;
//    }
//    //输入学生成绩表
//    printf("------------------------------------------------\n");
//    printf("学号\t总分\t成绩1\t成绩2\t成绩3\n");
//    printf("------------------------------------------------\n");
//    for(i=1;i<=M;i++)
//    {
//        printf("%d\t",i);
//        for(j=0;j<=N;j++)
//        {
//            printf("%.2f\t",score[i][j]);
//        }
//        printf("\n");
//    }
//    //输出个门科目的平均分
//    printf("------------------------------------------------\n");
//    for(j=1;j<=N;j++)
//    {
//        printf("成绩%d平均分%.2f\n",j,score[0][j]);
//    }
//    return 0;
//}



//int main()
//{
//    int n=0;
//    printf("请输入要打印的杨辉三角的行数：");
//    scanf("%d",&n);
//    int arr[n][n];
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)
//    {
//        arr[i][0]=1;//第0列全为1
//        arr[i][i]=1;//每行最后一位数为1
//        for(j=1;j<i;j++)
//        {
//            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//        }
//    }
//    	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//    return 0;
//}
//#define N 5//不可为变量
//void yanhuisanjiao(int arr[N][N])
//{
//    int i=0;
//    int j=0;
//    for(i=0;i<N;i++)
//    {
//        arr[i][0]=1;//第0列全为1
//        arr[i][i]=1;//每行最后一位数为1
//        for(j=1;j<i;j++)
//        {
//            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//        }
//    }
//}
//int main()
//{
//    int arr[N][N];
//    yanhuisanjiao(arr);//不能传变量
//    int i=0;
//    int j=0;
//        for (i = 0; i<N; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//    return 0;
//}




//#define y 4
//void shujudaying(int arr[][y],int x)
//{
//    	int i = 0;
//    	for (i = 0; i<y; i++)
//	{
//		int j = 0;
//		for (j = 0; j<x; j++)
//		{
//		    printf("请输入：");
//			scanf("%d", &arr[i][j]);
//		}
//	}
//}
//void shujushuchu(int arr[][y],int x)
//{
//    	int i = 0;
//    for (i = 0; i<y; i++)
//	{
//		int j = 0;
//		for (j = 0; j<x; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}
//int main()//函数传参
//{
//	int x = 0;
//	printf("请输入列宽：");
//	scanf("%d",&x);
//	int arr[x][y];
//	shujushuchu(arr,x);
//	shujudaying(arr,x);
//	return 0;
//}
//int main()//传参
//{
//	int x = 0;
//	int y = 0;
//	int arr[2][2];
//	printf("请输入行宽：");
//	scanf("%d",&x);
//	printf("请输入列宽：");
//	scanf("%d",&y);
//	int i = 0;
//	for (i = 0; i<y; i++)
//	{
//		int j = 0;
//		for (j = 0; j<x; j++)
//		{
//		    printf("请输入：");
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<y; i++)
//	{
//		int j = 0;
//		for (j = 0; j<x; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//
//
//int main()//找最大值
//{
//	int arr[5][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 17, 18, 19, 20 }, { 21, 22, 23, 24, 25 } };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i<5; i++)
//	{
//		int j = 0;
//		for (j = 0; j<5; j++)
//		{
//			if (arr[i][j] >= max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int findmax(int arr[x][y])
//{
//     int max=0;
//   int i=0;
//   for(i=0;i<x;i++)
//   {
//        int j=0;
//       for(j=0;j<y;j++)
//       {
//           if(arr[i][j]>=max)
//           {
//              max=arr[i][j];
//           }
//       }
//   }
//   return max;
//}
//int main()//找最大值
//{
//    int x=0;
//    int y=0;
//int arr[x][y];
//printf("请输入行宽列宽：");
//scanf("%d%d",&x,&y);
//int i=0;
//   for(i=0;i<x;i++)
//   {
//       int j=0;
//       for(j=0;j<y;j++)
//       {
//        scanf("%d",arr[i][j]);
//       }
//   }
//int max=findmax(arr);
//   printf("%d",max);
//    return 0;
//}
