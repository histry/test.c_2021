#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

int compare_int(void* e1, void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

void swap(char* buf1, char* buf2, int width)
{
    int i = 0;//交换
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void my_qsort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//传递的是相邻两元素
            {
                swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//相邻两元素的交换
            }
        }
    }
}
int main()
{
    int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    my_qsort(arr, sz, sizeof(arr[0]), compare_int);

    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

//#include <stdlib.h>
//#include <stdio.h>
//
//int compare_float(const void* e1, const void* e2)
//{
//    return (int)(*(float*)e1 - *(float*)e2);
//}
//
//int main()
//{
//    float arr[] = { 10.0,9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), compare_float);
//
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%.1f ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//
//int compare_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), compare_int);
//
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int compare_char(const void* e1, const void* e2)
//{
//    return (int)(*((char*)e1) - *((char*)e2));
//}
////int compare_char(const void* e1, const void* e2)
////{
////    return strcmp (*((char*)e1) , *((char*)e2));//erro
////}
//
//int main()
//{
//    char arr[] = "gfedcba";
//    int sz = strlen(arr);
//    
//    qsort(arr,sz, sizeof(arr[0]), compare_char);
//
//    printf("%s ", arr);
//
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int compare(const void* arg1, const void* arg2)
//{
//    /* Compare all of both strings: */
//    return _stricmp(*(char**)arg1, *(char**)arg2);
//}
//
//void main(int argc, char** argv)
//{
//    int i;
//    /* Eliminate argv[0] from sort: */
//    argv++;
//    argc--;
//
//    /* Sort remaining args using Quicksort algorithm: */
//    qsort((void*)argv, (size_t)argc, sizeof(char*), compare);
//
//    /* Output sorted list: */
//    for (i = 0; i < argc; ++i)
//        printf("%s ", argv[i]);
//    printf("\n");
//}



//#include<stdio.h>
//void mnue()
//{
//	printf("------------------------------------------\n");
//	printf("------1.Add         2.Sub-----------------\n");
//	printf("------3.Mul         4.Div-----------------\n");
//	printf("------      0.exit       -----------------\n");
//	printf("------------------------------------------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		mnue();
//		printf("请选择:");
//		scanf("%d", &input);
//		int (*pArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		//故意设5个，使得选择的函数可以对应下标
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//void mnue()
//{
//	printf("------------------------------------------\n");
//	printf("------1.Add         2.Sub-----------------\n");
//	printf("------3.Mul         4.Div-----------------\n");
//	printf("------      0.exit       -----------------\n");
//	printf("------------------------------------------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Cacl(int (*pf)(int, int))//回调函数
//{
//	//充当中间体
//	//(int (*pf)(int, int)函数指针
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));//根据传过来的函数地址调用其他函数
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		mnue();
//		printf("请选择:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Cacl(Add);
//			break;
//		case 2:
//			Cacl(Sub);
//			break;
//		case 3:
//			Cacl(Mul);
//			break;
//		case 4:
//			Cacl(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//void mnue()
//{
//	printf("------------------------------------------\n");
//	printf("------1.Add         2.Sub-----------------\n");
//	printf("------3.Mul         4.Div-----------------\n");
//	printf("------      0.exit       -----------------\n");
//	printf("------------------------------------------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		mnue();
//		printf("请选择:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d + %d = %d\n", x, y, Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d - %d = %d\n", x, y, Sub(x, y));
//			Sub(x, y);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d * %d = %d\n", x, y ,Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d / %d = %d\n", x, y, Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}