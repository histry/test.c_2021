#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct line {
    struct line* prior; //ָ��ֱ��ǰ��
    int data;
    struct line* next; //ָ��ֱ�Ӻ��
}line;





line* initLine(line* head) {
    head = (line*)malloc(sizeof(line));//���������һ����㣨��Ԫ��㣩
    head->prior = NULL;
    head->next = NULL;
    head->data = 1;
    line* list = head;
    for (int i = 2; i <= 3; i++) {
        //��������ʼ��һ���½��
        line* body = (line*)malloc(sizeof(line));
        body->prior = NULL;
        body->next = NULL;
        body->data = i;

        list->next = body;//ֱ��ǰ������nextָ��ָ���½��
        body->prior = list;//�½��ָ��ֱ��ǰ�����
        list = list->next;
    }
    return head;
}


#include <stdio.h>
#include <stdlib.h>
//�ڵ�ṹ
typedef struct line {
    struct line* prior;
    int data;
    struct line* next;
}line;
//˫����Ĵ�������
line* initLine(line* head);
//���˫����ĺ���
void display(line* head);
int main() {
    //����һ��ͷָ��
    line* head = NULL;
    //��������������
    head = initLine(head);
    //��������õ�����
    display(head);
    //��ʾ˫������ŵ�
    printf("�����е� 4 ���ڵ��ֱ��ǰ���ǣ�%d", head->next->next->next->prior->data);
    return 0;
}
line* initLine(line* head) {
    //����һ����Ԫ�ڵ㣬�����ͷָ��Ϊhead
    head = (line*)malloc(sizeof(line));
    //�Խڵ���г�ʼ��
    head->prior = NULL;
    head->next = NULL;
    head->data = 1;
    //����һ��ָ����Ԫ�ڵ��ָ�룬�������������������´����Ľڵ�
    line* list = head;
    for (int i = 2; i <= 5; i++) {
        //�����µĽڵ㲢��ʼ��
        line* body = (line*)malloc(sizeof(line));
        body->prior = NULL;
        body->next = NULL;
        body->data = i;
        //�½ڵ����������һ���ڵ㽨����ϵ
        list->next = body;
        body->prior = list;
        //list��Զָ�����������һ���ڵ�
        list = list->next;
    }
    //�����´���������
    return head;
}
void display(line* head) {
    line* temp = head;
    while (temp) {
        //����ýڵ��޺�̽ڵ㣬˵���˽ڵ�����������һ���ڵ�
        if (temp->next == NULL) {
            printf("%d\n", temp->data);
        }
        else {
            printf("%d <-> ", temp->data);
        }
        temp = temp->next;
    }
}