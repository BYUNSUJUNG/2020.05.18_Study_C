/*
	크기 5인 정수배열에 값을 입력 받고, 가장 큰 값 출력하기
*/

#include <stdio.h>

int FindMaxValue( int* pArr, int iArrLen );

void main()
{
	int iArr[5]		= {0, };
	int iMaxValue	= 0;
	int i = 0;

	int iArrLen = sizeof(iArr) / sizeof(iArr[0]); // 5
	
	// 코드 작성
	for (i = 0; i < iArrLen; i++) 
	{
		printf("%d 인덱스의 값을 입력해주세요: ",i);
		scanf("%d", iArr[i]);
	}
	

	iMaxValue = FindMaxValue(iArr, iArrLen);
	printf("가장 큰 값은: %d", iMaxValue);
}


int FindMaxValue( int* pArr, int iArrLen )
{
	int iMax = 0;
	for (int i = 0; i < iArrLen; i++)
	{
		if (*pArr[i] > iMax) 
		{
			iMax = *pArr[i];
		}
	}
	return iMax;

}