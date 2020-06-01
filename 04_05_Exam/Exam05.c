// Exam05.c
// 5. 1 부터 100까지 모든 수의 합을 구하여 그 합을 출력 (for 구문 사용)


#include <stdio.h>

void main()
{
	int iSum = 0;
	for (int i = 1; i < 101; i++) // 1부터 100까지 반복
	{
		iSum += i;
		printf("%d ", iSum);
	}


}