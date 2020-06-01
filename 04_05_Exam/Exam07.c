// Exam07.c
// 7. 1 부터 100까지의 수 중에서 짝수만 출력

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if (i % 2 == 0) // 짝수만 출력
		{
			printf("%d ",i);
		}
	}

}