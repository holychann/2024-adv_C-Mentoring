#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void input_char(char* a, char* b);//�Է� �޴� �Լ�
void func_print(char* a, char* b);//��ȯ�Լ�
void func_sort(char* a);//��� �Լ�

int main() {
    char a[101];//�ִ� 100���� ���ڿ��̴ϱ� \0 ���� 101��
    char b[10];//����,���� �Է� ���ڿ�

    input_char(a, b);
    func_print(a, b);
    func_sort(a);

    return 0;
}

void input_char(char* a, char* b) {
    scanf("%s", a);//������ ���ڿ� �Է�
    scanf("%s", b);//����, ���� �Է�

}
void func_print(char* a, char* b) {
    int lenth = strlen(a);//�Է¹��� ���ڿ� ����
    char c;//��ȯ�� ����
    for (int i = 0; i < lenth - 1; i++) {//ù��° ���ں��� �ݺ�
        for (int j = i + 1; j < lenth; j++) {//�ι�° ���ں��� ��
            if (strcmp(b, "��������") == 0 && a[i] > a[j]) {//b���� ���� ���ڰ� ���������̸鼭 �� ���ڰ� �� ũ��
                char c = a[i];//�ڸ� �ٲ�
                a[i] = a[j];
                a[j] = c;
            }
            else if (strcmp(b, "��������") == 0 && a[i] < a[j]) {//b���� ���� ���ڰ� ���������̸鼭 �ձ��ڰ� �� ������
                char c = a[i];//�ڸ� �ٲ�
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}
void func_sort(char* a) {
    printf("%s", a);//�ٲ� ���ڿ� ���
}
