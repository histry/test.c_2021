#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int sum = 0;
	int f1 = 1;
	int f2 = 1;
	int i;
	int n;
	printf("�����n����:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}
	printf("%d", sum);
	printf("\n");
	return 0;
}



//int fibo(int n) {
//	int f1;
//	if (n == 1 || n == 2) {
//		f1 = 1;
//		return f1;
//	}
//	else {
//		return (fibo(n - 2) + fibo(n - 1));
//	}
//}
//#include <stdio.h>
//int main() {
//	int  n;
//	printf("����n��ֵ:\n");
//	scanf("%d", &n);
//	printf("%d", fibo(n));
//	printf("\n");
//	return 0;
//}

// 2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��


//int square(int n, int k) {                              //k����¼�η���
//	if (k == 1)                                               //����Ϊ1ʱ����n��ֵ
//		return n;
//	else {
//		return square(n, k - 1) * n;                    //���ص��õ�ֵ������ε�ֵ�ٷ��ظ���һ��
//	}
//}
//#include <stdio.h>
//int main() {
//	int n, k;
//	printf("�����������:\n");
//	scanf("%d", &n);
//	printf("����������ôη�:\n");
//	scanf("%d", &k);
//	printf("%d", square(n, k));
//	return 0;
//}

// 3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
// ���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//
//#include<stdio.h>
//int  DigitSum(int n) {
//	if (n / 10 == 0)                                            //�������ֵС��10�Ļ�,�ͷ����������,Ҳ�������һλ
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;           //����ۼ�ֵ       
//}
//int main() {
//	int number;
//	printf("������һ������:\n");
//	scanf("%d", &number);
//	printf("%d", DigitSum(number));
//	printf("\n");
//	return 0;
//}

// 4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������С�
// Ҫ�󣺲���ʹ��C�������е��ַ�������������

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void reverse_string(char* string) {
//	char p;                                                          //����һ���ַ����洢��һ����ַ�������һ���ַ�
//	p = *string;
//	if (*(string++) == '\0')
//		return;                                                       //����ǽ�������,��ô����
//	else
//		reverse_string(string++);
//	printf("%c", p);                                               //˳��ִ�����p�洢���ַ�,�ٷ�����һ��
//}
//int main() {
//	char string[20];
//	gets(string);
//	reverse_string(string);
//	printf("\n");
//	return 0;
//}

// 5.�ݹ�ֱ�ʵ��strlen

//#include<stdio.h>
//void get_strlen(char* str) {
//	static  int count = 0;                     //������һ����̬��������¼��ѭ������,ѭ���˼��ξ����м�������
//	if (*(str++) == '\0')
//		printf("%d", count);
//	else {
//		count++;
//		get_strlen(str++);
//	}
//}
//int main() {
//	char string[20];
//	gets(string);
//	get_strlen(string);
//	printf("\n");
//	return 0;
//}

//// 6.�ݹ�ʵ����n�Ľ׳�
//
//#include <stdio.h>
//int fac(int n) {
//	if (n == 1)                                              //�����1����ֵΪ1      2*fac(2-1)   ֵΪ2,�ڷ��ظ���һ��
//		return 1;
//	else return n * fac(n - 1);
//}
//int main() {
//	int n;
//	printf("����һ������:\n");
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	printf("\n");
//	return 0;
//}

// 7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//
//#include <stdio.h> 
//int  fun(int number) {
//	if (number > 9)
//	{
//		fun(number / 10);                                       //���е�������1Ȼ�󷵻���һ�㺯��                                 
//	}
//	printf("%d ", number % 10);                        //����˳��ִ��,���2���ŷ�����һ�����˳��ִ��3,4,
//}
//int main() {
//	int number;
//	printf("����һ������:\n");
//	scanf("%d", &number);
//	fun(number);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	return 0;
//}