#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse_string(char* start, char* end)
{
    assert(start != NULL && end != NULL);
    while (start < end)
    {
        int tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}
int main()
{
    char arr[] = "i love you";
    reverse_string(arr, arr + strlen(arr) - 1);
    printf("%s", arr);
}






//�ַ�������kλ
//��������������������������η�ת
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse_string(char* start, char* end)
//{
//    assert(start != NULL && end != NULL);
//    while (start < end)
//    {
//        int tmp = *start;
//        *start = *end;
//        *end = tmp;
//        start++;
//        end--;
//    }
//}
//
//char* left_remove(char* arr, int k)
//{
//    int len = strlen(arr) - 1;
//    char* ret = arr;
//    assert(arr != NULL);
//    reverse_string(arr, arr + len);
//    reverse_string(arr, arr + len - k);
//    reverse_string(arr + len - k + 1, arr + len);
//    return ret;
//}
//int main()
//{
//    char arr[] = " i love you";
//    int kpoi = 2;
//    printf("%s", left_remove(arr, kpoi));
//}





//����һ���ַ����е�һ��ֻ����1(K)�ε��ַ�
//������Ҫ���ǽ���hash˼�룬�ռ任ʱ��
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int find_first(char* arr, int* Count, int k)
//{
//    int i = 0;
//    assert(arr != NULL);
//    for (i = 0; i < strlen(arr); i++)
//    {
//        Count[arr[i]]++;
//    }
//    for (i = 0; i < strlen(arr); i++)
//    {
//        if (Count[arr[i]] == k)
//        {
//            return arr[i];
//        }
//    }
//    return -1;
//}
//int main()
//{
//    char arr[] = "i really really like you";
//    int arrCount[255] = { 0 };
//    int k = 1;
//    int ret = 0;
//    if ((ret = find_first(arr, arrCount, k)) != -1)
//    {
//        printf("%c", ret);
//    }
//    else
//    {
//        printf("δ�ҵ�");
//    }
//}






//�������������
//1
//22
//333
//4444
//55555
//
//��ͼ��
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void print_first(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            printf("%d", i);
//        }
//        printf("\n");
//    }
//}
//void print_second(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 0; j < n - i; j++)
//        {
//            printf(" ");
//        }
//        printf("%d\n", i);
//    }
//}
//void print_third(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 0; j < n - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < i; j++)
//            printf("%d", i);
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 4;
//    print_first(n);
//    print_second(n);
//    print_third(n);
//}






//һ���������п��ܿ��Ա���ʾΪ m(m >= 2) ������������֮��
//15 = 1 + 2 + 3 + 4 + 5
//15 = 4 + 5 + 6
//15 = 7 + 8
//��дһ����������һ����������Ȼ���ҳ���������Ҫ�������
//�������������У����������������У����ӡNone��
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void print_sequence(int n)
//{
//    int i = 0;
//    int k = 0;
//    for (i = 1; i <= n / 2; i++)
//    {
//        int sum = 0;
//        int tmp = i;
//        while (sum < n)
//        {
//            sum += tmp;
//            if (sum == n)
//            {
//                for (k = i; k <= tmp; k++)
//                {
//                    printf("%d", k);
//                }
//                printf("\n");
//            }
//            tmp++;
//        }
//    }
//}
//int main()
//{
//    int n = 15;
//    print_sequence(n);
//}





//��������ʹ����ȫ����λ��ż��ǰ��
//����ָ������ƶ�����������ָ���ƶ���Ҫ�������������ȫΪ������
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void remove_odd(int arr[], int size)
//{
//    int left = 0;
//    int right = size - 1;
//    int tmp = 0;
//    assert(arr != NULL);
//    while (left < right)
//    {
//        while (left < right && ((arr[left] & 1) == 1))
//        {
//            left++;
//        }
//        while (left < right && ((arr[right] & 1) != 1))
//        {
//            right--;
//        }
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//    }
//}
//int main()
//{
//    int i = 0;
//    int arr[] = { 8,3,9,5,2,7,4,6 };
//    //  int arr[] = {1,3,5,7,9};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    remove_odd(arr, size);
//    for (i = 0; i < size; i++)
//    {
//        printf("%d", arr[i]);
//    }
//}




//���Ͼ���
//���Ӷ�С��O��n���Ĳ��ң�ÿ�ν���һ�����ҿ���ɸѡ��һ�л�һ�С�
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#define ROW 3
//#define COL 3
//int search_num(int arr[ROW][COL], int key, int* x, int* y)
//{
//    int xTmp = *x;
//    int yTmp = *y;
//    assert(x != NULL && y != NULL && arr != NULL);
//    while (xTmp >= 0 && yTmp < ROW)
//    {
//        if (key == arr[xTmp][yTmp]) {
//            *x = xTmp;
//            *y = yTmp;
//            return 1;
//        }
//        else if (key < arr[xTmp][yTmp])
//        {
//            xTmp--;
//        }
//        else if (key > arr[xTmp][yTmp])
//        {
//            yTmp++;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int key = 1;
//    int arr[ROW][COL] = { 1,2,3,2,3,4,3,4,5 };
//    int ret = 0;
//    int x = ROW - 1, y = 0;
//    if (ret = search_num(arr, key, &x, &y) != -1)
//    {
//        printf("%d��������%d %d", key, x, y);
//    }
//    else
//    {
//        printf("δ�ҵ�");
//    }
//}






//�ж�һ���ַ����Ƿ�Ϊ�����ַ���
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int judge_string(char arr[])
//{
//    int left = 0;
//    int right = strlen(arr) - 1;
//    while (left < right)
//    {
//        if (arr[left] != arr[right])
//        {
//            return 0;
//        }
//        left++;
//        right--;
//    }
//    return 1;
//}
//int main()
//{
//    char arr[] = "abccba";
//    int ret = judge_string(arr);
//    if (ret)
//    {
//        printf("�ǻ����ַ���");
//    }
//    else
//    {
//        printf("���ǻ����ַ���");
//    }
//}





//�ж�һ�����Ƿ�Ϊ������
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int judge_num(int num)
//{
//    int tmp = 0;
//    int newNum = 0;
//    int copyNum = num;
//    while (num > 0)
//    {
//        tmp = num % 10;
//        num /= 10;
//        newNum *= 10;
//        newNum += tmp;
//    }
//
//    if (newNum == copyNum)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main()
//{
//    int num = 12344321;
//    int ret = judge_num(num);
//    if (ret == 1)
//    {
//        printf("�ǻ�����");
//    }
//    else
//    {
//        printf("���ǻ�����");
//    }
//}