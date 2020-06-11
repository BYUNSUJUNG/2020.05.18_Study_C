/*
	3개의 숫자를 입력받아서 큰 순서대로 출력하기
		1. Sort 함수 완성
			> Sort함수 수행 후 각 변수들의 값이 바뀌어있어야 한다.
*/

#include <stdio.h>

// 선언
void Swap(int *pNum1, int *pNum2); // 두 변수의 값을 바꾼다.
void Sort(int *pNum1, int *pNum2, int *pNum3); 

void main()
{
	int iMax = 0;
	int iMid = 0;
	int iMin = 0;

	printf("정수 3개 입력 : ");
	scanf("%d %d %d", &iMax, &iMid, &iMin);

	Sort(&iMax, &iMid, &iMin);
	printf("정렬된 값 : %d, %d, %d\n", iMax, iMid, iMin);
}

void Swap(int *pNum1, int *pNum2)
{
	int temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;
}

void Sort(int *pNum1, int *pNum2, int *pNum3)
{
	if (*pNum1 < *pNum2)
	{
		Swap(&(*pNum1), &(*pNum2));
		if (*pNum2 < *pNum3) {
			Swap(&(*pNum2), &(*pNum3));
		}
	}
	
}
