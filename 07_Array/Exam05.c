//Exam05.c

#include <stdio.h>

void main() 
{
	// 3차원 배열 : 면 행 열
	// int iArr[2][2][2] = {0,};
	
	int iArr[2][2][2] = { 0, };
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 2; i++) // i는 면
	{
		for (j = 0; j < 2; j++) // j는 행
		{
			for (k = 0; k < 2; k++) // k는 열
			{
				scanf("%d", &iArr[i][j][k]);
				printf("iArr[%d][%d][%d] = %d\n", i, j, k, iArr[i][j][k]);
			}
		}
	}
}