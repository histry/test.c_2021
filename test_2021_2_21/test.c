#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <n-i-1 ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//void reverse_arr(char* str)
//{
//	int sz = strlen(str);
//	int i = 0;
//	for (i = 0; i<=sz-1; i++)
//	{
//		int tmp = *(str + i);
//		(*(str + i)) = (*(str + sz -1));
//		*(str + sz - 1) = tmp;
//		sz--;
//	}
//}
//int main()
//{
//	char arr[256] = {0};
//	/*scanf("%s", arr);*/
//	gets(arr);
//	reverse_arr(arr);
//	printf("%s\n", arr);
//	return 0;
//}






//int sum() 
//{
//    int i, sum = 0;
//    for (i = 1; i <= 100; i++) {
//        sum += i;
//    }
//    return sum;
//}






//#include <stdio.h>
//int sum() {
//    int i, sum = 0;
//    for (i = 1; i <= 100; i++) {
//        sum += i;
//    }
//    return sum;
//}
//int main() {
//    int a = sum();
//    printf("The sum is %d\n", a);
//    return 0;
//}




//int sum(int m, int n) {
//    int i, sum = 0;
//    for (i = m; i <= n; i++) {
//        sum += i;
//    }
//    return sum;
//}






//#include <stdio.h>
//int sum(int m, int n) {
//    int i, sum = 0;
//    for (i = m; i <= n; i++) {
//        sum += i;
//    }
//    return sum;
//}
//int main() {
//    int begin = 5, end = 86;
//    int result = sum(begin, end);
//    printf("The sum from %d to %d is %d\n", begin, end, result);
//    return 0;
//}





//#include <stdio.h>
//void func1() {
//    printf("hello");
//    void func2() {
//        printf("C”Ô—‘–°∞◊±‰π÷ ﬁ");
//    }
//}
//int main() {
//    func1();
//    return 0;
//}






//#include <stdio.h>
//void func2() {
//    printf("C”Ô—‘–°∞◊±‰π÷ ﬁ");
//}
//void func1() {
//    printf("hello");
//    func2();
//}
//int main() {
//    func1();
//    return 0;
//}