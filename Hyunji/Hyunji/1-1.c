// 1���� ���� 1. �������� �������� �����ϱ� (���ڿ�)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[101];

int input_char(); //���ڿ�, ���Ĺ�� �Է�
int func_sort(int n); //����
int func_print(); //���

int main() {
	input_char();
}

int input_char() {
	char sort[20];
	scanf("%s", str);
	scanf(" %s", sort);
	
	//��������: 0, ��������: -1 ��
	func_sort(strcmp(sort, "��������"));
}

int func_sort(int n) {
	char tmp;
	for (int i = 0; i < strlen(str); i++) {
		for (int j = i; j < strlen(str); j++) {
			// ���������� ���
			if ((str[i] > str[j]) && n==0) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			// ���������� ���
			else if ((str[i] < str[j]) && n == -1) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
	func_print();
}

int func_print() {
	printf("%s", str);
}