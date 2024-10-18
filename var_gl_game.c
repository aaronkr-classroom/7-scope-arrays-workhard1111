// var_gl_game.c
#include <stdio.h>
#include <stdlib.h> //rand(), srand(time())
#include <time.h> // time() ~ 1970 1�� 1�� 00:00 ���� ���ݱ��� ms


// ��������
int randNum;

// ���� �ʱ�ȭ �Լ�
void gamelnit()
{
	srand(time(0));
	randNum = rand() % 10 + 1; //(0~9) + 1 = 1~10
}

//���� ���� �Լ�
void gamePlay() 
{
	//���� ����
	int guess = 0;
	int count = 0;
	int allowed = 5; //5���� ������ �� �� ����

	printf("guess the number (1~10): ");

	do
	{
		scanf_s("%d", &guess);
		count++;

		if (guess == randNum)
		{
			printf("Good guess! you win!");
			break;
		}
		else if (guess < randNum)
		{
			printf("Tow low! Try again! = >");
		}
		else if (guess > randNum)
		{
			printf("Too high! Try again! = >");
		}
	} while (guess != allowed); // 5�� ������ ����

	printf("Too many guessed! you lost!");
}

int main(void)
{
	gamelnit();
	gamePlay();

	return 0;
}