// cyper.c
#include <stdio.h>
#include "encrypt.h"

int main(void)
{
	extern int shift;
	char msg[100];

	// 메시지 입력 받기
	printf("Enter a message to encrypt: ");
	fgets(msg, sizeof(msg), stdin);
	//scanf_s() 함수를 사용할 때 뛰어쓰기까지 받을 수 있지만
	//fgets() 함수를 사용하면 전체 뛰어쓰기와 같이 받을 수 있다.

	printf("How many letters to shift? ");
	scanf_s("%d", &shift);

	encrypt(msg);

	printf("Encrypted : %s\n", msg);

	return 0;
}