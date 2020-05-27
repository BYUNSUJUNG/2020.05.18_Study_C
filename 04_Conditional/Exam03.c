// Exam03.c

#include <stdio.h>

void main() 
{
	// if, else if, else 사용

	int iNum = 0;
	printf("숫자 입력: ");
	scanf("%d", &iNum);

	// 입력된 정수가 양/0/음 판별
	if (iNum > 0)
	{
		printf("양수\n");
	}
	else if (iNum < 0) 
	{
		printf("음수\n");
	}
	/*
	else if (iNum == 0) // 결과는 else와 동일하나, 
						// cpu를 사용하여 비교연산 수행을 해야한다. 
	{
		printf("0이다\n");
	}
	*/
	else 
	{
		printf("0이다\n");
	}
}