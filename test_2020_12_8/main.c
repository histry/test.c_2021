#include <stdio.h>
//int main()//ǰa--->n�ĺ�
//{
//    int a=0;
//    int b=0;
//    int sum=0;
//    printf("sum=a+b\n");
//    printf("��sum������a��b��ֵ");
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
//    printf("��a��n�ĺ�(n>=a)������a��n��ֵ:");
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


//��n�Ľײ�
//��
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
//��:
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
//��10�Ľײ�ĺ�
//����
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
//int main()//���Ľ׳˵ĺ�
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







//int main()//����ɼ���ƽ����
//{
//    double score=0;
//    double sum=0;
//    double average=0;
//    int maxscore=0;
//    int minscore=100;
//    int n=7;
//    printf("������n=%d�����\n",n);
//    for( n=7;n>=0;n-- )
//   {
//    printf("�������:");
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
    scanf("������ɼ�%d",&score);
    if(score<0 || score>100)
    printf("��������\n");
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
//int main()//�ж�����ɼ��ĵȼ�
//{
//    int counter=0;
//    int grade,a=1;//aΪ����ĵڼ����ɼ�
//    float n;
//    while (counter<10,a<11)
//   {
//     printf("%d ����ɼ� n:",a);//ע����δ�ӡ��a��ֵ
//     scanf("%f",&n);
//     grade=(int)n/10;
//    switch(grade)
//   {
//   default:
//    printf("�������\n");
//    break;
//   case 0:case 1:case 2:case 3:case 4:case 5://case����������֮��Ҫ�пո�
//        printf("������\n");
//        break;
//    case 6:
//        printf("����\n");
//        break;
//    case 7:
//        printf("�е�\n");
//        break;
//    case 8:
//        printf("����\n");
//        break;
//    case 9:case 10:
//        printf("����\n");
//        break;
//    }
//        a++,counter++;
//}
//
//    return 0;
//}
