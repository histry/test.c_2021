#include <stdio.h>//指针+字符数组//char* p1="abcdef";存放第一个字符的地址
//int main()
//{
//    char arr[]="abcdef";
//    char* pc=arr;
//    printf("%s\n",arr);
//    printf("%s\n",pc);
//    return 0;
//}
//int  main()
//{
//    const char* p="abcdef";//p存的是a的地址
//    //printf("%s\n",*p);//err，"abcdef"是一个常量字符串//*p为变量
//    printf("%s\n",p);//abcdef
//    return 0;
//}
//int main()//段错误
//{
//    const char* p="abcdef";
////    *p='w';
////    printf("%c\n",*p);//err
////    printf("%s\n",p);//err
//    printf("%s\n",p);//abcdef
//    return 0;
//}

//int main()
//{
// char arr1[]="abcdef";
// char arr2[]="abcdef";
// char* p1="abcdef";
// char* p2="abcdef";
//// if(arr1==arr2)//存放的是首元素地址
//// {
////     printf("hehe");
//// }
////  else
//// {
////     printf("haha");//haha
//// }
// if(p1==p2)//存放的是第一个字符的地址-a的地址
// {
//     printf("hehe");//hehe
// }
//  else
// {
//     printf("haha");
// }
//
//}
