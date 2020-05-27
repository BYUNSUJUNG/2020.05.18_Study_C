// Exam05.c

#include <stdio.h>

void main() 
{
	// 입력된 정수에 따라 학점 출력

	int iScore = 0;
	printf("정수 입력: ");
	scanf("%d", &iScore);

	/*
		100		: (만점)A학점
		90~99	: A학점
		80~89	: B학점
		70~79	: C학점
		70점미만	: F학점
		0		: (빵점)F학점

		학점별 if문 사용
		즉, 100점과 0점은 if문 중첩 사용
	*/

	if (iScore >= 90 && iScore <=100)
	{ 
		if (iScore == 100) 
		{
			printf("(만점)A학점\n");
		} 
		else 
		{
			printf("A학점\n");
		}

		/*
			if (iScore == 100)
			{
				printf("(만점)");
			} 
			printf("A학점\n");
		
		*/
	}
	else if (iScore >= 80)
	{
		printf("B학점\n");
	}
	else if (iScore >= 70)
	{
		printf("C학점\n");
	} 
	else
	{ // (iScore < 70)
		if (iScore == 0)
		{
			printf("(빵점)F학점\n");
		}
		else
		{
			printf("F학점\n");
		}
	}
}