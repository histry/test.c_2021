#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
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



//
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    scanf("请输入成绩%d", &score);
//    if (score < 0 || score>100)
//        printf("输入有误\n");
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
//#include <stdio.h>//指针

//int main()//取决于平台是32位还是64位
//{
//printf("%d\n",sizeof(int*));//8
//printf("%d\n",sizeof(char*));//8
//printf("%d\n",sizeof(double*));//8
//printf("%d\n",sizeof(float*));//8
//printf("%d\n",sizeof(long*));//8
//printf("%d\n",sizeof(short*));//8
//    return 0;
//}


//int main()//指针类型决定了指针进行解引用操作时，能够访问空间的大小；例：int*p p能访问四个字节；char*p p能访问一个字节
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


//int main()//指针的类型决定了：指针走一步走多远（指针的步长）例：int *p，p-->4;char *p，p-->1
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
//    //int* p=arr;//数组名首元素地址//1 1 1 1 1 1 1 1 1 1
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
//    int a;//局部变量不初始化，默认是随机值
//未出始化的指针变量
//    int *p;//局部的指针变量，就被初始化为随机值
//    *p=20;
//    return 0;
//}
//int main()//指越界访问
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


//int *test()//指针指向的空间释放
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
////    int *pa=&a;//初始化
////    int *p=NULL;//NULL-用来初始化指针的，给指针赋值
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
//int main()//strlen 求字符串长度//递归-模拟实现了strlen-计数器的方式1，递归的方式2，
//{
//    char arr[]="bit";
//    int len=my_strlen(arr);
//    printf("%d",len);
//    return 0;
//}


//int main()
//{
//    int arr[10]={0};
//    printf("%p\n",arr);//地址-首元素的地址
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
//    //1.&arr-&数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//    //2.sizeof(arr)-sizeof(数组名）-数组名表示整个数组-sizeof（数组名）计算的是整个数组的大小
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


//int main()//二级指针
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