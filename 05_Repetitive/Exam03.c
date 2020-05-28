// Exam03.c

#include <stdio.h>

void main()
{
	// for문 중첩: 2중 for문

	int i = 0;
	int j = 0;
	int k = 0;

	printf("i j\n");
	printf("======\n");

	for (i = 0; i < 3; i++) // i: 0, 1, 2 수행  3 끝
	{
		for (j = 0; j < 3; j++) // j: 0, 1, 2 수행  3 끝
		{
			printf("%d %d\n", i, j);
		}
	}

	/*
		i j
		0 0
		0 1
		0 2
		1 0
		...
		2 2
	*/


	// for문 중첩: 3중 for문

	printf("======\n\n");
	printf("i j k\n");
	printf("======\n");

	for (i = 0; i < 3; i++) // i: 0, 1, 2 수행  3 끝
	{
		for (j = 0; j < 3; j++) // j: 0, 1, 2 수행  3 끝
		{
			for (k = 0; k < 3; k++) // k: 0, 1, 2 수행  3 끝
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}

}