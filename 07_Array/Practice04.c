/*
	05 프로젝트 - Practice03.c 참고

	구구단의 결과 값을 2차원배열에 저장 후 출력하기

		1. 저장하는 for문
				i, j를 이용하여 배열에 값 저장하기 (출력 X)

		2. 출력하는 for문
				printf("%2d * %2d = %2d\t", i, j, arr[i][j]);
				이런 형태로 i,j 와 배열의 값을 사용하여 출력하기
				(위 코드가 정답은 아님)
*/

#include <stdio.h>

void main()
{

	int iArr[9][9] = { 0, };

	// 저장하는 for문
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
			iArr[i][j] = (i + 1) * (j + 1);
		}
	}

	// 출력하는 for문
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			printf("%d * %d = %d\n", (i+1), (j+1), iArr[i][j]);
		}
		printf("\n");
	}
}
