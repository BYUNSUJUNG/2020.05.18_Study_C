// Exam20.c
// 20. 원하는 구구단의 단수를 scanf를 이용하여 입력 받고,
// while문을 사용하여 구구단 출력
// 위 구문을 사용자가 -1을 입력할 때까지 반복한다.

#include <stdio.h>

void main() {

	int iInput = 0; // 사용자 입력 변수

	while (1) {
		int iCnt = 0;
		printf("원하는 구구단의 단수를 입력해주세요: ");
		scanf("%d", &iInput); // & 필수
		if (iInput == -1) break;

		while (iCnt != 9)
		{
			iCnt++;
			printf("%d X %d = %d\n", iInput, iCnt, (iInput*iCnt));

		}
	}
}

