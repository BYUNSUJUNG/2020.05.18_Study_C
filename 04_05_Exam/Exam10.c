// Exam10.c
// 10. 1 부터 100까지의 수 중에서 3의 배수인 수만 출력

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if (i % 3 == 0) // 의 배수인 수만 출력
		{
			printf("%d ", i);
		}
	}

}