// var_gl_game.c
#include <stdio.h>
#include <stdlib.h> //rand(), srand(time())
#include <time.h> // time() ~ 1970 1월 1일 00:00 부터 지금까지 ms


// 전역변수
int randNum;

// 게임 초기화 함수
void gamelnit()
{
	srand(time(0));
	randNum = rand() % 10 + 1; //(0~9) + 1 = 1~10
}

//게임 실행 함수
void gamePlay() 
{
	//지역 변수
	int guess = 0;
	int count = 0;
	int allowed = 5; //5개의 추측만 할 수 있음

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
	} while (guess != allowed); // 5개 추측의 제한

	printf("Too many guessed! you lost!");
}

int main(void)
{
	gamelnit();
	gamePlay();

	return 0;
}