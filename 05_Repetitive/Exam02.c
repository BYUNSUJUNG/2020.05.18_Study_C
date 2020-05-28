// Exam02.c

#include <stdio.h>

void main()
{
	//continue 와 break
	int i = 0;

	// continue
	for (i = 0; i <= 2; i++) // i: 0,1,2 수행 3일 때 끝
	{
		if (i == 1)
		{
			continue; // 이 순간 증감식으로 점프!
			// 수행문을 끝내겠다
		}
		printf("%d\n", i); // 0, 2 만 출력됨
		// 수행문이 끝나는 지점
	}

	printf("======\n");

	for (i = 0; i <= 2; i++) // i: 0,1,2 수행 3일 때 끝
	{
		if (i == 1)
		{
			break; // 반복문 자체를 넘어감
		}
		printf("%d\n", i); // 0만 출력됨
	}
}