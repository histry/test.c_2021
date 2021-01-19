#include <stdio.h>
//int main()//前a--->n的和
//{
//    int a=0;
//    int b=0;
//    int sum=0;
//    printf("sum=a+b\n");
//    printf("求sum请输入a和b的值");
//    scanf("%d%d",&a,&b);
//    sum=a+b;
//    printf("%d=%d+%d",sum,a,b);
//    return 0;
//
//}
//int main()
//{
//    int a=0;
//    int n=0;
//    printf("求a到n的和(n>=a)请输入a和n的值:");
//    scanf("%d%d",&a,&n);
//    int sum=0;
//    while (a<=n)
//    {
//        sum=sum+a;
//        a++;
//    }
//    printf("sum=%d\n",sum);
//    return 0;
//}


//求n的阶层
//我
//int main()
//{
//    int a=1;
//    int ret=1;
//    int n=0;
//    scanf("%d",&n);
//    while(a<=n)
//    {
//        ret=ret*a;
//        a++;
//    }
//    printf("ret=%d",ret);
//    return 0;
//}
//例:
//int main()
//{
//    int i=0;
//    int n=0;
//    int ret=1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        ret = ret*i;
//    }
//    printf("ret=%d\n",ret);
//    return 0;
//}
//求10的阶层的和
//例：
//int main()
//{
//    int i=0;
//    int n=0;
//    int ret=1;
//    int sum=0;
//    for(n=1;n<=3;n++)
//    {
//        ret=1;
//        for(i=1;i<=n;i++)
//        {
//        ret = ret*i;
//        }
//        sum=sum+ret;
//
//    }
//    printf("sum=%d\n",sum);
//    return 0;
//}
//int main()//三的阶乘的和
//{
//    int i=0;
//    int n=0;
//    int ret=1;
//    int sum=0;
//    for(n=1;n<=3;n++)
//    {
//        ret=ret*n;
//        sum=sum+ret;
//    }
//    printf("sum=%d\n",sum);
//    return 0;
//}







//int main()//输入成绩求平均分
//{
//    double score=0;
//    double sum=0;
//    double average=0;
//    int maxscore=0;
//    int minscore=100;
//    int n=7;
//    printf("共输入n=%d项分数\n",n);
//    for( n=7;n>=0;n-- )
//   {
//    printf("输入分数:");
//    scanf("%lf",&score);
//
//     if(score<minscore)
//     {
//         minscore=score;
//     }
//     else if(score>maxscore)
//     {
//         maxscore=score;
//     }
//    sum=sum+score;
//   }
//average=(sum-maxscore-minscore)/(n-3);
//printf("average=%lf\n",average);
//printf("maxscore=%d\n",maxscore);
//printf("minscore=%d\n",minscore);
//return 0;
//}





int main()
{
    int score=0;
    scanf("请输入成绩%d",&score);
    if(score<0 || score>100)
    printf("输入有误\n");
    else if(score<60&&score>=0)
        printf("E");
    else if(score<70)
        printf("D");
    else if(score<80)
        printf("C");
    else if(score<90)
        printf("B");
    else if(score<=100)
        printf("A");
    return 0;
}
//int main()//判断输入成绩的等级
//{
//    int counter=0;
//    int grade,a=1;//a为输入的第几个成绩
//    float n;
//    while (counter<10,a<11)
//   {
//     printf("%d 输入成绩 n:",a);//注意如何打印出a的值
//     scanf("%f",&n);
//     grade=(int)n/10;
//    switch(grade)
//   {
//   default:
//    printf("输入错误\n");
//    break;
//   case 0:case 1:case 2:case 3:case 4:case 5://case与整形数据之间要有空格。
//        printf("不及格\n");
//        break;
//    case 6:
//        printf("及格\n");
//        break;
//    case 7:
//        printf("中等\n");
//        break;
//    case 8:
//        printf("良好\n");
//        break;
//    case 9:case 10:
//        printf("优秀\n");
//        break;
//    }
//        a++,counter++;
//}
//
//    return 0;
//}
