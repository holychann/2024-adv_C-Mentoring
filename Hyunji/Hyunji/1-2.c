// 1���� ���� 2. ���ε帳
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[5][20];
	
	// �� �� ���ڿ� �ޱ�
	for (int i = 0; i < 5; i++) {
		scanf("%s", *(str + i));
	}

	// A~z ���̶�� ����ϱ� (�ƽ�Ű�ڵ�)
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j][i] >= 'A' && str[j][i] <= 'z') {
				printf("%c", str[j][i]);
			}
		}
	}
}