// Exam15.c
//	15. 원하는 구구단의 단수를 scanf를 이용하여 입력받고
//	while문을 사용하여 구구단 출력


#include <stdio.h>

void main()
{
	int iInput = 0; // 사용자 입력 변수
	int iCnt = 0;
	printf("원하는 구구단의 단수를 입력해주세요: ");
	scanf("%d", &iInput); // & 필수

	while (iCnt!=9)
	{
		iCnt++;
		printf("%d X %d = %d\n",iInput,iCnt, (iInput*iCnt));
		
	}
}