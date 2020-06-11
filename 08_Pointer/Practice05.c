/*
	로또 당첨 판별기
		- 함수에서 1등번호 배열과 구매번호 배열을 전달 받고,
		  일치하는 숫자의 개수를 반환하기
*/

#include <stdio.h>

int CheckLotto( int* iArrLotto, int* iArrMy );

void main()
{
	int iDreamNumber[6] = {5, 8, 10, 23, 30, 42};	// 1등 번호 배열
	int iMyNumber[6]	= {1, 5, 7, 21, 23, 30};	// 구매 번호 배열
	int iCount			= 0;						// 일치하는 숫자 개수 
	
	iCount = CheckLotto( iDreamNumber, iMyNumber );

	printf("일치하는 개수는 %d개 입니다.\n", iCount);
}


int CheckLotto( int *iArrLotto, int *iArrMy )
{
	int Count = 0;
	for (int i = 0; i < sizeof(iArrLotto); i++)
	{
		for (int j = 0; j < sizeof(iArrMy); j++)
		{
			if (iArrLotto[i] == iArrMy[j])
			{
				Count++;
			}
		}
	}
	return Count;
}