#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
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



//
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    scanf("������ɼ�%d", &score);
//    if (score < 0 || score>100)
//        printf("��������\n");
//    else if (score < 60 && score >= 0)
//        printf("E");
//    else if (score < 70)
//        printf("D");
//    else if (score < 80)
//        printf("C");
//    else if (score < 90)
//        printf("B");
//    else if (score <= 100)
//        printf("A");
//    return 0;
//}
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
//#include <stdio.h>//ָ��

//int main()//ȡ����ƽ̨��32λ����64λ
//{
//printf("%d\n",sizeof(int*));//8
//printf("%d\n",sizeof(char*));//8
//printf("%d\n",sizeof(double*));//8
//printf("%d\n",sizeof(float*));//8
//printf("%d\n",sizeof(long*));//8
//printf("%d\n",sizeof(short*));//8
//    return 0;
//}


//int main()//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С������int*p p�ܷ����ĸ��ֽڣ�char*p p�ܷ���һ���ֽ�
//{
//    int a=0x11223344;
////    int *pa=&a;
////    *pa=0;//00 00 00 00
//
//    char *pc=&a;
//    *pc=0;//00 33 22 11
////    printf("%p\n",pa);
////    printf("%p\n",pc);
//    return 0;
//}


//int main()//ָ������;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ���������int *p��p-->4;char *p��p-->1
//{
//    int a=0x11223344;
//    int *pa=&a;
//    char *pc=&a;
//    printf("%p\n",pa);
//    printf("%p\n",pa+1);
////000000000061FE0C
////000000000061FE10
//    printf("%p\n",pc);
//    printf("%p\n",pc+1);
////000000000061FE0C
////000000000061FE0D
//    return 0;
//}


//int main()
//{
//    int arr[10]={0};
//    //int* p=arr;//��������Ԫ�ص�ַ//1 1 1 1 1 1 1 1 1 1
//    char* p=arr;//1 0 0 0 0 0 0 0 0 0
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=1;
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int a;//�ֲ���������ʼ����Ĭ�������ֵ
//δ��ʼ����ָ�����
//    int *p;//�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
//    *p=20;
//    return 0;
//}
//int main()//ָԽ�����
//{
//    int arr[10]={0};
//    int *p=arr;
//    int i=0;
//    for(i=0;i<12;i++)
//    {
//        printf("%d ",*(p++));//0 0 0 0 0 0 0 0 0 0 62 0
//    }
//    return 0;
//}


//int *test()//ָ��ָ��Ŀռ��ͷ�
//{
//    int a=10;
//    return &a;
//}
//int main()
//{
//    int *p=test();
//    *p=20;
//    return 0;
//}
//int *test()
//{
//    int a=10;
//    return &a;
//}
//int main()
//{
//    int *p=test();
//    printf("%d\n",*p);
//    return 0;
//}


//int main()
//{
// int a[10]={0};
// int i=0;
// int *p=a;
// for(i=0;i<=12;i++)
// {
////     *p=i;
////     p++;
//     *p++=i;
// }
//    return 0;
//}


//int main()
//{
////    int a=10;
////    int *pa=&a;//��ʼ��
////    int *p=NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//    int a=10;
//    int *pa=&a;
//    *pa=20;
//    pa=NULL;
////    *pa=10;
//if(pa!=NULL)
//{
//
//}
//    return 0;
//}


//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=0;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int *p=arr;
////    for(i=0;i<sz;i++)
////    {
////        printf("%d ",*p);
//////        p=p+1;
////        p++;
////    }
////    for(i=0;i<10;i++)
////    {
////        printf("%d ",*p);//1 3 5 7 9 62 6422032 16 7345072 4199367
////        p+=2;
////    }
////    for(i=0;i<5;i++)
////    {
////        printf("%d ",*p);//1 3 5 7 9
////        p+=2;
////    }
//  return 0;
//}


//int main()
//{
//    char ch[5]={0};
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[0]-&arr[9]);//-9
////    printf("%d\n",&arr[0]-&ch[9]);//err
//    return 0;
//}

//int my_strlen(char *arr)
//{
//    char *start=arr;
//    char *end=arr;
//    while(*end!='\0')
//    {
//        end++;
//    }
//    return end-start;
//}
//int main()//strlen ���ַ�������//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2��
//{
//    char arr[]="bit";
//    int len=my_strlen(arr);
//    printf("%d",len);
//    return 0;
//}


//int main()
//{
//    int arr[10]={0};
//    printf("%p\n",arr);//��ַ-��Ԫ�صĵ�ַ
//    printf("%p\n",arr+1);
//printf("\n");
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);
//printf("\n");
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1);
//printf("\n");
////000000000061FDF0
////000000000061FDF4
////
////000000000061FDF0
////000000000061FDF4
////
////000000000061FDF0
////000000000061FE18
//
//    //1.&arr-&������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//    //2.sizeof(arr)-sizeof(��������-��������ʾ��������-sizeof�������������������������Ĵ�С
//    return 0;
//}

//int main()
//{
//    int arr[10]={0};
//    int *p=arr;
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=i;
//    }
////    for(i=0;i<10;i++)
////    {
//////        printf("%d ",arr[i]);
////        printf("%d ",*(p+i));
////    }
//        for(i=0;i<10;i++)
//    {
//        printf("%p==========%p\n",p+i,&arr[i]);
//    }
//    return 0;
//}


//int main()//����ָ��
//{
//    int a=0;
//    int* pa=&a;
//    int* *ppa=&pa;
//    * *ppa=20;
//    printf("%d\n",a);
//    printf("%d\n",**ppa);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + 1.0 * sqrt(i);
//	}
//	printf("sum = %.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double sum = 0;
//    int x = 1;
//    int y = 1;
//    int g = 1;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum = sum + ( 1.0 * x / y) * g ;
//        x++;
//        y += 2;
//        g = g * (-1);
//    }
//    printf("%.3lf", sum);
//    return 0;
//}