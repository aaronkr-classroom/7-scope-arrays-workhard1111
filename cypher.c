// cyper.c
#include <stdio.h>
#include "encrypt.h"

int main(void)
{
	extern int shift;
	char msg[100];

	// �޽��� �Է� �ޱ�
	printf("Enter a message to encrypt: ");
	fgets(msg, sizeof(msg), stdin);
	//scanf_s() �Լ��� ����� �� �پ����� ���� �� ������
	//fgets() �Լ��� ����ϸ� ��ü �پ��� ���� ���� �� �ִ�.

	printf("How many letters to shift? ");
	scanf_s("%d", &shift);

	encrypt(msg);

	printf("Encrypted : %s\n", msg);

	return 0;
}