// Exam12.c
//	12. 1 부터 100까지의 수 중에서 3의 배수의 합을 구하고 출력

#include <stdio.h>

void main()
{
	int iSum = 0;

	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if (i % 3 == 0) // 3의 배수인 수
		{
			iSum+=i;	
		}
	}
	printf("3의 배수의 합은 %d입니다\n", iSum);
}


