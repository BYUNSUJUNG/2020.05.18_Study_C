
/*
	별점 출력기
		- 점수에 따라 별 그리기
			> 5점당 별 1개
			> 남는 점수는 버리기
		1. 배열에 점수를 입력 받기
		2. 배열과 배열크기를 전달 받은 함수를 정의하고 함수에서 별 찍기

	[출력결과]
	(51) **********			<-- 10개
	(13) **					<-- 2개
	(75) ***************	<-- 15개
	...
*/

#include <stdio.h>

void PrintStar( int* pArr, int iArrLen );

void main()
{
	int iArrScore[5] = {0, };
	int i = 0;
	// 코드 작성

	int iArrLen = sizeof(iArrScore) / sizeof(iArrScore[0]);
	for (i = 0; i < iArrLen; i++)
	{
		printf("점수를 입력해주세요: ");
		scanf("%d", iArrScore[i]);
	}
	PrintStar(iArrScore, iArrLen);

}

void PrintStar( int* pArr, int iArrLen )
{
	for (int i = 0; i < iArrLen; i++)
	{
		printf("(%d)", *pArr[i]);
		for (int j = 0; j < *pArr[i] / 5; j++) 
		{
			printf("*");
		}
	}
}
