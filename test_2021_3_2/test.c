#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello";
//	strcat(arr1, arr1);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
char* my_strcat(char* destination, char* source)
{
	char* ret = destination;
	int len = strlen(destination);
	//1.找到destination中的'\0'
	while (*destination != '\0')
	{
		destination++;
	}
	//2.追加字符串
	while (*destination++=*source++)
	{
		;
	}
	return destination;
}
int main()
{
	char arr1[30] = "hello\0*********";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
//#include<stdio.h>
//#include<string.h>
//char* my_strcat(char* destination, char* source)
//{
//	char* ret = destination;
//	int len = strlen(destination);
//	while (*source != '\0')
//	{
//		*(destination + len) = *source;
//		destination++;
//		source++;
//	}
//	*(destination + len) = *source;
//	return destination + len;
//}
//int main()
//{
//	char arr1[30] = "hello\0*********";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = { 'a','b' };
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//char* my_strcpy(char* destination, char* source)
//{
//	char* ret = destination;
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return destination;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//char* my_strcpy(char* destination, char* source)
//{
//	char* ret = destination;
//	while (*source != '\0')
//	{
//		*destination = *source;
//		destination++;
//		source++;
//	}
//	destination = *source;
//	return destination;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//char* my_strcpy(char* destination, char* source)
//{
//	char* ret = destination;
//	while (*source != '\0')
//	{
//		*destination = *source;
//		destination++;
//		source++;
//	}
//	destination = '\0';
//	return destination;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("haha\n");
//	}
//	else
//		printf("hehe\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','e','f' };
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		count++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return my_strlen(str + 1) + 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}