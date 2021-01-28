#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//	int my_strcmp(const char* src, const char* dest)
//{
//	int ret;
//	while ((ret = *(unsigned char*)src - *(unsigned char*)dest) && dest)
//	{
//		src++;
//		dest++;
//	}
//	if (ret < 0)
//		ret = -1;
//	else if (ret > 0)
//		ret = 1;
//	else if (ret = 0)
//		ret = 0;
//	return(ret);
//}

//void* memcpy(void* dest, const void* src, size_t count)//strcmp不会考虑其内存相互重叠的问题
//{
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;//memcpy是按字节拷贝
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return(ret);
//}
//void* memmove(void* dest, const* src, size_t count)
//{
//	void* ret = dest;
//
//	if (dest <= src || (char*)dest >= ((char*)src + count))//dest和src的内存区域没有重叠的情况下
//	{
//		while (count--)
//			*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	else//出现dest和src有内存区域重叠的情况
//	{
//		dest = (char*)dest + count - 1;
//		src = (char*)dest + count - 1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return (ret);
//}

//char* my_strstr(const char* str1, const char* str2)//函数功能：判断str2是否为str1的子串，如果是则返回cp，如果不是则返回NULL.
//{
//	assert(str1);
//	assert(str2);
//
//	char* cp = (char*)str1;//
//	char* substr = (char*)str2; //定义两个指针*cp, *substr的原因：由于str1, str2都是const修饰的，不能对其进行修改。
//	char* s1 = NULL;
//
//	if (*str2 == '/0')
//		return NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		if (*s1 && *substr && (*s1 == *substr));//判断字符串是否相等
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '/0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//}
//char* my_strcat(char* dest, const char* src)//字符串拼接函数，将src拼接在dest后面，并且覆盖dest最后的\0.
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest = *src))
//	{
//		dest++;
//		src++;
//
//	}
//	return ret;//因为ret是char*类型的，所以返回值类型是char*类型的。
//}
//int my_strlen(const char* str)//测试字符字符串长度
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen1(const char* str)//应用递归测试字符串长度
//{
//	if (*str == '0')
//		return 0;
//	else
//		return 1 + my_strlen1(str + 1);
//}
//
//int my_strlen2(const char* str)//利用两个指针分别指向字符串的头部和尾部，长度就是两指针之差
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int my_strcmp(const char* buf1, const char* buf2)
//{
//	while ((*buf1 == *buf2) && (*buf1 != 0))
//	{
//		buf1++;
//		buf2++;
//	}
//	return (*buf1 - *buf2);
//}
//int main()
//{
//	char* arr = "hsadsjfkl";
//	char* p = "hsahgjk";
//	int ret = my_strcmp(arr, p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest);
//	while (*dest)
//	{
//		while ((*dest != *src) && (*dest != 0))
//			dest++;
//		while (*dest == *src)
//		{
//			const char* pdest = dest;
//			const char* psrc = src;
//			while (*pdest == *psrc)
//			{
//				pdest++;
//				psrc++;
//			}
//			if (*psrc == 0)
//				return (char*)dest;
//			else
//				dest++;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char* arr = "asddhjadhhbfh";
//	char* p = "dhh";
//	char* ret = my_strstr(arr, p);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);    //断言，保证dest不为空
//	char* start = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++)
//		;
//	return start;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char* p = "world!";
//	char* tmp = my_strcat(arr, p);
//	printf("%s\n", tmp);
//	system("pause");
//	return 0;

//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);    //断言，保证dest不为空
//	assert(src != NULL);
//	char* start = dest;
//	while (*dest++ = *src++)
//		;
//	return start;
//}
//int main()
//{
//	char arr[20] = "hello haha";
//	char* p = "world!";
//	char* tmp = my_strcpy(arr, p);
//	printf("%s\n", tmp);
//	system("pause");
//	return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p == 0)
//		return 0;
//	else
//		return (1 + my_strlen(p + 1));
//}
//int main()
//{
//	int ret = 0;
//	char arr[] = "asdhns";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    double sum = 0;
//    int a;
//    int n;
//    scanf("%d", &a);
//    for (n = 1; n <= a; n++)
//    {
//        sum = sum + 1.0 / n;
//    }
//    printf("sum = %lf", sum);
//    return 0;
//}
//#include<stdio.h>
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "asxgjs";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}