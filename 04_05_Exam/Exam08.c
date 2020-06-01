// Exam08.c
// 8. 1 부터 100까지의 수 중에서 홀수만 출력

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if (i % 2 == 1) // 홀수만 출력
		{
			printf("%d ", i);
		}
	}

}