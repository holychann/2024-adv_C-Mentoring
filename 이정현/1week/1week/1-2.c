#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[5][21];//2���� �迭 ����
    int max = 0;
    int lenth = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", a[i]);//5���� �迭�� �Է�
    }

    for (int i = 0; i < 5; i++) {//5���� �迭 �߿���
        lenth = strlen(a[i]);
        if (max < lenth) {
            max = lenth;//���� ���̰� �� �迭�� ���̸� max�� ����
        }
    }

    for (int i = 0; i < max; i++) {//max�� �ݺ�
        for (int j = 0; j < 5; j++) {
            if (i < strlen(a[j])) {//i�� ���ڿ� ���̺��� �������� ���
                printf("%c", a[j][i]);
            }
        }
    }

}
