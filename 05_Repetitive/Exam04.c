// Exam04.c

#include <stdio.h>

void main() 
{
	/*
		2중 for문 별(*) 찍기
		*****
		*****
		*****
		*****
		*****
	*/


	printf("(1) 반복문 없이 그냥 출력\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");

	printf("(2) 반복문 1개 사용, , 1번 출력시 * 5개 출력 \n");

	for (int i = 0; i < 5; i++)
	{
		printf("*****\n");
	}

	printf("(3) 반복문 2개 사용, 1번 출력시 * 1개 출력 \n");
	for (int i = 0; i < 5; i++) // 1회 수행 = 1줄 출력
	{
		for (int j = 0; j < 5; j++) // 1회 수행 = 별 1개 출력
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(4) 반복문 1개 사용, 1번 출력시 * 1개 출력 \n");

	for (int i = 1; i <=25; i++) 
	{
		printf("*");
		if (i % 5 == 0)  // 5의 배수
		{
			printf("\n");
		}
	}
}