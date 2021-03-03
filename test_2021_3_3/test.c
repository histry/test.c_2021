#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    const char* str1 = "abcdef";
//    const char* str2 = "bbb";
//    if (strlen(str2) - strlen(str1) > 0)
//    {
//        printf("str2>str1\n");
//    }
//    else
//    {
//        printf("srt1>str2\n");
//    }
//    return 0;
//}




//char* strcpy(char* destination, const char* source);
//char* strcat(char* destination, const char* source);
//int strcmp(const char* str1, const char* str2);
//char* strncpy(char* destination, const char* source, size_t num);
//char* strncat(char* destination, const char* source, size_t num);
///* strncat example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[20];
//    char str2[20];
//    strcpy(str1, "To be ");
//    strcpy(str2, "or not to be");
//    strncat(str1, str2, 6);
//    puts(str1);
//    return 0;
//}





//int strncmp(const char* str1, const char* str2, size_t num);
///* strncmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//    int n;
//    puts("Looking for R2 astromech droids...");
//    for (n = 0; n < 3; n++)
//        if (strncmp(str[n], "R2xx", 2) == 0)
//        {
//            printf("found %s\n", str[n]);
//        }
//    return 0;
//}





//char* strstr(const char*, const char*);
///* strstr example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[] = "This is a simple string";
//    char* pch;
//    pch = strstr(str, "simple");
//    strncpy(pch, "sample", 6);
//    puts(str);
//    return 0;
//}






//char* strtok(char* str, const char* sep);
///* strerror example : error list */
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//必须包含的头文件
///* strtok example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[] = "- This, a sample string.";
//    char* pch;
//    printf("Splitting string \"%s\" into tokens:\n", str);
//    pch = strtok(str, " ,.-");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = strtok(NULL, " ,.-");
//    }
//    return 0;
//}





//#include <stdio.h>
//int main()
//{
//    char* p = "zhangpengwei@bitedu.tech";
//    const char* sep = ".@";
//    char arr[30];
//    char* str = NULL;
//    strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//    for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//    {
//        printf("%s\n", str);
//    }
//}






//char* strerror(int errnum);
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.ent", "r");
//    if (pFile == NULL)
//        printf("Error opening file unexist.ent: %s\n", strerror(errno));
//    //errno: Last error number
//    return 0;
//}






//int tolower(int c);
//int toupper(int c);
///* isupper example */
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int i = 0;
//    char str[] = "Test String.\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//            if (isupper(c))
//                c = tolower(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}


//void* memcpy(void* destination, const void* source, size_t num);
///* memcpy example */
//#include <stdio.h>
//#include <string.h>
//struct {
//    char name[40];
//    int age;
//} person, person_copy;
//int main()
//{
//    char myname[] = "Pierre de Fermat";
//    /* using memcpy to copy string: */
//    memcpy(person.name, myname, strlen(myname) + 1);
//    person.age = 46;
//    /* using memcpy to copy structure: */
//    memcpy(&person_copy, &person, sizeof(person));
//    printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//    return 0;
//}





//memmove函数处理。
///* memmove example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[] = "memmove can be very useful......";
//    memmove(str + 20, str + 15, 11);
//    puts(str);
//    return 0;
//}



//
///* memcmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char buffer1[] = "DWgaOtP12df0";
//    char buffer2[] = "DWGAOTP12DF0";
//    int n;
//    n = memcmp(buffer1, buffer2, sizeof(buffer1));
//    if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//    else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//    else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//    return 0;
//}




////计数器方式
//int my_strlen(const char* str)
//{
//    int count = 0;
//    while (*str)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}



//方式2：
////不能创建临时变量计数器
//int my_strlen(const char* str)
//{
//    if (*str == '\0')
//        return 0;
//    else
//        return 1 + my_strlen(str + 1);
//}



//
//方式3：
////指针-指针的方式
//int my_strlen(char* s)
//{
//    char* p = s;
//    while (*p != ‘\0’)
//        p++;
//    return p - s;
//}



//
//模拟实现strcpy
//参考代码：
////1.参数顺序
////2.函数的功能，停止条件
////3.assert
////4.const修饰指针
////5.函数返回值
////6.题目出自《高质量C/C++编程》书籍最后的试题部分
//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL);
//        assert(src != NULL);
//
//    while ((*dest++ = *src++))
//    {
//        ;
//    }
//    return ret;
//}



//
//模拟实现strcat
//参考代码：
//char* my_strcat(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL);
//    assert(src != NULL);
//    while (*dest)
//    {
//        dest++;
//    }
//    while ((*dest++ = *src++))
//    {
//        ;
//    }
//    return ret;
//}



//模拟实现strstr
//注：让他们下去自己研究一下KMP算法。
//char* my_strstr(const char* str1, const char* str2)
//{
//    assert(str1);
//    assert(str2);
//
//    char* cp = (char*)str1;
//    char* substr = (char*)str2;
//    char* s1 = NULL;
//
//    if (*str2 == '\0')
//        return NULL;
//
//    while (*cp)
//    {
//        s1 = cp;
//        substr = str2;
//        while (*s1 && *substr && (*s1 == *substr))
//        {
//            s1++;
//            substr++;
//        }
//        if (*substr == '\0')
//            return cp;
//        cp++;
//    }
//}




//模拟实现strcmp
//参考代码：
//int my_strcmp(const char* src, const char* dst)
//{
//    int ret = 0;
//    assert(src != NULL);
//    assert(dest != NULL);
//    while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
//        ++src, ++dst;
//    if (ret < 0)
//        ret = -1;
//    else if (ret > 0)
//        ret = 1;
//    return(ret);
//}




//模拟实现memcpy
//参考代码：
//void* memcpy(void* dst, const void* src, size_t count)
//{
//    void* ret = dst;
//    assert(dst);
//    assert(src);
//    /*
//    * copy from lower addresses to higher addresses
//    */
//    while (count--) {
//        *(char*)dst = *(char*)src;
//        dst = (char*)dst + 1;
//        src = (char*)src + 1;
//    }
//    return(ret);
//}






//模拟实现memmove
//参考代码：
//void* memmove(void* dst, const void* src, size_t count)
//{
//    void* ret = dst;
//    if (dst <= src || (char*)dst >= ((char*)src + count)) {
//        /*
//        * Non-Overlapping Buffers
//        * copy from lower addresses to higher addresses
//        */
//        while (count--) {
//            *(char*)dst = *(char*)src;
//            dst = (char*)dst + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else {
//        /*
//        * Overlapping Buffers
//        * copy from higher addresses to lower addresses
//        */
//        dst = (char*)dst + count - 1;
//        src = (char*)src + count - 1;
//        while (count--) {
//            *(char*)dst = *(char*)src;
//            dst = (char*)dst - 1;
//            src = (char*)src - 1;
//        }
//    }
//    return(ret);
//}
