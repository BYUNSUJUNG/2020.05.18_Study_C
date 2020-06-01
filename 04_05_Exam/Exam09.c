// Exam09.c
// 9. 1 부터 500까지의 수 중에서 짝수의 개수와 홀수의 개수를 구하여 그 개수를 출력

#include <stdio.h>

void main()
{
	int iEvenCnt = 0; // 짝수
	int ioddCnt = 0; // 홀수

	for (int i = 1; i < 501; i++) { // 1 부터 500까지 반복
		if (i % 2 == 0) // 짝수
		{
			iEvenCnt++;
		}
		else // i % 2 == 1, 홀수
		{
			ioddCnt++;
		}
	}
	printf("짝수의 개수는 %d개, 홀수의 개수는 %d개 입니다.\n", iEvenCnt, ioddCnt);

}
