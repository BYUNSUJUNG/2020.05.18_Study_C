// Exam17.c
// 17. 사용자가 - 1을 입력할때까지 반복적으로 수를 입력 받고,
//	-1을 입력하면 현재까지 입력된 짝수의 개수와 홀수의 개수를 출력하고,
//	입력된 모든 수의 합을 출력하는 프로그램 작성.

#include <stdio.h>

void main()
{
	int iInput = 0; // 사용자 입력 변수
	int iEvenCnt = 0; // 짝수 개수
	int ioddCnt = 0; // 홀수 개수
	int iSum = 0; // 합

	while (iInput!=-1) 
	{
		printf("수를 입력해주세요 : ");
		scanf("%d", &iInput); // & 필수

		if (iInput % 2 == 0) // 짝수
		{
			iEvenCnt++;
		}
		else // iInput % 2 == 1, 홀수
		{
			ioddCnt++;
		}
		iSum += iInput; // 입력된 모든 수를 합함
	}

	printf("현재까지 입력된 짝수의 개수: %d, 홀수의 개수: %d\n", iEvenCnt, ioddCnt);
	printf("입력된 모든 수의 합: %d\n",iSum);

}