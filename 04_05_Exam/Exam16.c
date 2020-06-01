// Exam16.c
//	16. 원하는 구구단의 단수를 입력받은 후
//	while 문을 사용하여 거꾸로 출력하는 프로그램을 작성.


#include <stdio.h>

void main()
{
	int iInput = 0; // 사용자 입력 변수
	int iCnt = 10;
	printf("원하는 구구단의 단수를 입력해주세요: ");
	scanf("%d", &iInput); // & 필수

	while (iCnt != 1)
	{
		iCnt--;
		printf("%d X %d = %d\n", iInput, iCnt, (iInput*iCnt));

	}
}