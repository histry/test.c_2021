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

//void* memcpy(void* dest, const void* src, size_t count)//strcmp���ῼ�����ڴ��໥�ص�������
//{
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;//memcpy�ǰ��ֽڿ���
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return(ret);
//}
//void* memmove(void* dest, const* src, size_t count)
//{
//	void* ret = dest;
//
//	if (dest <= src || (char*)dest >= ((char*)src + count))//dest��src���ڴ�����û���ص��������
//	{
//		while (count--)
//			*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	else//����dest��src���ڴ������ص������
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

//char* my_strstr(const char* str1, const char* str2)//�������ܣ��ж�str2�Ƿ�Ϊstr1���Ӵ���������򷵻�cp����������򷵻�NULL.
//{
//	assert(str1);
//	assert(str2);
//
//	char* cp = (char*)str1;//
//	char* substr = (char*)str2; //��������ָ��*cp, *substr��ԭ������str1, str2����const���εģ����ܶ�������޸ġ�
//	char* s1 = NULL;
//
//	if (*str2 == '/0')
//		return NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		if (*s1 && *substr && (*s1 == *substr));//�ж��ַ����Ƿ����
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
//char* my_strcat(char* dest, const char* src)//�ַ���ƴ�Ӻ�������srcƴ����dest���棬���Ҹ���dest����\0.
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
//	return ret;//��Ϊret��char*���͵ģ����Է���ֵ������char*���͵ġ�
//}
//int my_strlen(const char* str)//�����ַ��ַ�������
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
//int my_strlen1(const char* str)//Ӧ�õݹ�����ַ�������
//{
//	if (*str == '0')
//		return 0;
//	else
//		return 1 + my_strlen1(str + 1);
//}
//
//int my_strlen2(const char* str)//��������ָ��ֱ�ָ���ַ�����ͷ����β�������Ⱦ�����ָ��֮��
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
//	assert(dest != NULL);    //���ԣ���֤dest��Ϊ��
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
//	assert(dest != NULL);    //���ԣ���֤dest��Ϊ��
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