#include <stdio.h>//�ַ������ַ�����
//int main()
//{
//char arr1[]={'a','b','c','d','e'};
//
//char arr2[]="abcd";//һ����
//char arr3[]={"abcd"};
//
//char arr4[10]="abcd";//���ֳ�ʼ��
//
//printf("%d\n",strlen(arr1));
//printf("%d\n",sizeof(arr1));
//
//printf("%d\n",strlen(arr2));
//printf("%d\n",sizeof(arr2));
//
//printf("%d\n",strlen(arr3));
//printf("%d\n",sizeof(arr3));
//
//printf("%d\n",strlen(arr4));
//printf("%d\n",sizeof(arr4));
//
//    return 0;
//}
//int main()//�ַ���������������//�ո�س�tab�������ַ�����
//{
//char arr[10]={0};
//int i=0;
//for(i=0;i<10;i++)
//    scanf("%c",&arr[i]);//����a b c d e f g h i j����Ҫ�ո�س�tab��
//for(i=0;i<10;i++)
//    printf("%c",arr[i]);//��ӡa b c d e
//
//printf("%s",arr);//��ӡa b c d e
//    return 0;
//}
//int main()//�ո�س�tab�������ַ�����
//{
//char arr[10]={0};
//int i=0;
//for(i=0;i<10;i++)
//  arr[i]=getchar();//����a b c d e f g h i j����Ҫ�ո�س�tab��
//for(i=0;i<10;i++)
//    putchar(arr[i]);//��ӡa b c d e
//    return 0;
//}
//int main()
//{
//    char arr[10]={0};
//    scanf("%s",&arr);//scanf�ӿո�tab�ͻس����ַ�Ϊ�ַ��������������
//    printf("%s",arr);
//    gets(arr);//gets ���س�ʱ�Ž�������
//    puts(arr);//�൱��printf�������Զ�����
//    return 0;
//}




//int main()//�������Сд��ĸת��Ϊ��д��ĸ
//{
//    char arr1[]="hello";
//
//    char arr2[10]={0};//�涨���鴮����
//    int i=0;
//    for(i=0;i<strlen(arr1);i++)
//    {
//        arr2[i]=arr1[i]-32;//Сд��ĸ���д��ĸ��ASCII��ֵ��32
//    }
//    printf ("%s",arr2);
//    return 0;
//}
//int main()//�������Сд��ĸת��Ϊ��д��ĸ//����ո񵫻��ӡ��ֹ//��Ϊ�ո��ASCII��ֵ��32
//{
//    char arr1[10]={0};
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        scanf("%c",&arr1[i]);
//    }
//    gets(arr1);//Ч����ͬ//����ո񵫻��ӡ��ֹ
//    char arr2[10]={0};//�涨���鴮����
//    for(i=0;i<strlen(arr1);i++)
//    {
//        if(arr1[i]==32)
//        {
//            arr2[i]=32;
//        }
//        else
//            arr2[i]=arr1[i]-32;//Сд��ĸ���д��ĸ��ASCII��ֵ��32
//    }
//    printf ("%s",arr2);
////    puts(arr2);//Ч����ͬ
//    return 0;
//}



//int main()
//{
//    int arr[3][3]={0};
//    int i=0;
//    for(i=0;i<3;i++)
//    {
//        int j=0;
//        for(j=0;j<3;j++)
//        {
//            scanf("%c",&arr[i][j]);
//        }
//    }
//        for(i=0;i<3;i++)
//    {
//        int j=0;
//        for(j=0;j<3;j++)
//        {
//           printf("%c",arr[i][j]);
//        }
//        printf("\n");
//    }
//    printf("%d",strlen(arr));//strlen(arr)Ϊʲô��1//������
//    return 0;
//}




//int mystrlen(char arr[])
//{
//    int i=0;
//    int count=0;
//    while(arr[i]!=0)//while(arr[i])//������ͬ
//    {
//        count++;
//        i++;
//    }
//    return count;
//}
//int main()//srlen
//{
//    char arr[]="hello bite";//10
//    int count=mystrlen(arr);
//    printf("%d",count);
//    return 0;
//}
//void mystrcopy(char arr1[],char arr2[])
//{
//    int i=0;
//    while(arr2[i]!=0)//while(arr2[i])//������ͬ
//    {
//        arr1[i]=arr2[i];
//        i++;
//    }
//    arr1[i]='\0';//��Ŀ�괮���Ͻ�����־
//}
//int main()//strvpy
//{
//   char arr1[]="hello my lover";
//   char arr2[]="hello";
//    mystrcopy(arr1,arr2);
//    printf("%s",arr1);
//    return 0;
//}
//void mystrcat(char arr1[],char arr2[])
//{
//    int i=0;
//    while(arr1[i++]!=0)//while(arr1[i++])//������ͬ
////    {
////        i++;//������ͬ
////    }
//    int j=0;
//    while(arr2[j]!=0)
//    {
//        arr1[i]=arr2[j];
//        j++;
//        i++;
//    }
//}
//int main()
//{
//    char arr1[]="my";
//    char arr2[]="strcopy";
//    mystrcat(arr1,arr2);
//    printf("%s",arr1);
//    return 0;
//}
//int mystrcmp(char arr1[],char arr2[])
//{
//    int i=0;
//    while(arr1[i]&&arr2[i]&&arr1[i]==arr2[i])//���ҵ�һ��������ַ�//һ��Ҫ��arr1[i]&&arr2[i]&&
//    {
//        i++;
//    }
//    return arr1[i]-arr2[i];
//}
//int main()
//{
//   char arr1[]="hello";
//   char arr2[]="hello";
//   int i=mystrcmp(arr1,arr2);
//   if(i>0)
//   {
//       printf(" %s > %s ",arr1,arr2);
//   }
//   else if(i<0)
//   {
//       printf(" %s < %s ",arr1,arr2);
//   }
//   else
//    {
//        printf(" %s = %s ",arr1,arr2);
//    }
//    return 0;
//}



//#define N 10
//void delchar(char arr[],int n,char a)
//{
//    int i=0;
//    for(i=0;i<n;i++)
//    {
//        while(arr[i]==a)
//    {
//        int j=i;
//        while(j<n)
//        {
//            arr[j]=arr[j+1];
//            j++;
//        }
//    }
//    }
//}
//int main()
//{
//    char arr[N]={0};
//    printf("�������ַ�����");
//    gets(arr);
//    char a='0';
//    printf("������Ҫɾ������ĸ��");
//    scanf("%c",&a);
//    int n=N;
//    delchar(arr,n,a);
//    printf("%s",arr);
//    return 0;
//}
//void delchar(char arr[],char a)
//{
//int i=0;
//int j=i+1;
//while(arr[j])
//{
//
//    if(arr[j] == a)
//    {
//        j++;
//    }
//    else
//    {
//         arr[i++]=arr[j++];
//    }
//}
//arr[i]=0;
//}
//int main()
//{
//    char arr[]={0};
//    gets(arr);
//    char a=' ';
//    delchar(arr,a);
//    printf("%s",arr);
//    return 0;
//}


//int main()
//{
//
//    return 0;
//}
