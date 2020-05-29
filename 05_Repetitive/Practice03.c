/*
	2중for문을 이용한 구구단 출력
		printf("%d * %d = %d\t", ...... 형식으로 출력!
	
	[출력결과]
	2 * 1 = 2	2 * 2 = 4	....
	3 * 1 = 3	3 * 2 = 6	....
	...
	9 * 1 = 9	9 * 2 = 18  ....

	[심화] 입력 받은 수까지 구구단을 출력!
*/

#include <stdio.h>

void main()
{
	int iNum = 0;

	// 2중for문을 이용한 구구단 출력
	for (int i = 2; i < 10 ; i++) // 구구단 단, 2 ~ 9까지 나온다
	{
		for (int j = 1; j < 10 ; j++) {// 구구단 곱, 1 ~ 9까지 나온다
			printf("%d * %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}


	printf("======================\n");
	printf("출력할 단까지의 수를 입력해주세요");
	scanf("%d", &iNum);

	// 입력 받은 수까지 구구단 출력
	for (int i = 1; i <= iNum; i++)
	{
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}

}
