// encrypt.c
extern int shift; // A -> 0 (4 shift)
#include <stdio.h>

int shift = 5;

void encrypt(char* msg)
{
	printf("Entered encrypt()!");
	char ch;
	int i = 0;

	while (msg[i] != '\0')
	{
		printf("Encrypting %c", msg[i]);
		ch = msg[i];

		//�ҹ��� ��ȣȭ
		if (ch >= 'a' && ch <= 'z')
		{
			ch = (ch - 'a' + shift) % 26 + 'a';
		}
		//�빮�� ��ȣȭ
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = (ch - 'A' + shift) % 26 + 'A';
		}
		printf("%c", ch);

		msg[i] = ch; //msg ������ ������Ʈ �ϱ�
		i++;
	}

	//return msg;
}