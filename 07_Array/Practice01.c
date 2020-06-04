#include <stdio.h>

void main()
{
	// 배열에 담긴 모든 숫자의 합 구하기
	// for문 이용
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	
	/////////////////////////////////////////////////////////////
	int iArrLen = sizeof(iArr) / sizeof(iArr[0]); 
					// 40byte / 4byte => 10 (배열의 길이)
	int iArrSum = 0; // 배열의 합

	for (int i = 0; i < iArrLen; i++)
	{
		iArrSum += iArr[i];
	}
	printf("iArr의 합: %d\n", iArrSum);

	
}