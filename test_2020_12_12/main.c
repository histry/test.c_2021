#include <stdio.h>//字符串及字符数组
//int main()
//{
//char arr1[]={'a','b','c','d','e'};
//
//char arr2[]="abcd";//一样的
//char arr3[]={"abcd"};
//
//char arr4[10]="abcd";//部分初始化
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
//int main()//字符数组的输入与输出//空格回车tab键都算字符输入
//{
//char arr[10]={0};
//int i=0;
//for(i=0;i<10;i++)
//    scanf("%c",&arr[i]);//输入a b c d e f g h i j不需要空格回车tab键
//for(i=0;i<10;i++)
//    printf("%c",arr[i]);//打印a b c d e
//
//printf("%s",arr);//打印a b c d e
//    return 0;
//}
//int main()//空格回车tab键都算字符输入
//{
//char arr[10]={0};
//int i=0;
//for(i=0;i<10;i++)
//  arr[i]=getchar();//输入a b c d e f g h i j不需要空格回车tab键
//for(i=0;i<10;i++)
//    putchar(arr[i]);//打印a b c d e
//    return 0;
//}
//int main()
//{
//    char arr[10]={0};
//    scanf("%s",&arr);//scanf视空格tab和回车等字符为字符串的输入结束符
//    printf("%s",arr);
//    gets(arr);//gets 仅回车时才结束输入
//    puts(arr);//相当于printf，但会自动换行
//    return 0;
//}




//int main()//将输入的小写字母转换为大写字母
//{
//    char arr1[]="hello";
//
//    char arr2[10]={0};//规定数组串长度
//    int i=0;
//    for(i=0;i<strlen(arr1);i++)
//    {
//        arr2[i]=arr1[i]-32;//小写字母与大写字母的ASCII码值差32
//    }
//    printf ("%s",arr2);
//    return 0;
//}
//int main()//将输入的小写字母转换为大写字母//输入空格但会打印终止//因为空格的ASCII码值是32
//{
//    char arr1[10]={0};
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        scanf("%c",&arr1[i]);
//    }
//    gets(arr1);//效果相同//输入空格但会打印终止
//    char arr2[10]={0};//规定数组串长度
//    for(i=0;i<strlen(arr1);i++)
//    {
//        if(arr1[i]==32)
//        {
//            arr2[i]=32;
//        }
//        else
//            arr2[i]=arr1[i]-32;//小写字母与大写字母的ASCII码值差32
//    }
//    printf ("%s",arr2);
////    puts(arr2);//效果相同
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
//    printf("%d",strlen(arr));//strlen(arr)为什么是1//不明白
//    return 0;
//}




//int mystrlen(char arr[])
//{
//    int i=0;
//    int count=0;
//    while(arr[i]!=0)//while(arr[i])//作用相同
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
//    while(arr2[i]!=0)//while(arr2[i])//作用相同
//    {
//        arr1[i]=arr2[i];
//        i++;
//    }
//    arr1[i]='\0';//在目标串放上结束标志
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
//    while(arr1[i++]!=0)//while(arr1[i++])//作用相同
////    {
////        i++;//作用相同
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
//    while(arr1[i]&&arr2[i]&&arr1[i]==arr2[i])//查找第一个不相等字符//一定要有arr1[i]&&arr2[i]&&
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
//    printf("请输入字符串：");
//    gets(arr);
//    char a='0';
//    printf("请输入要删除的字母：");
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
