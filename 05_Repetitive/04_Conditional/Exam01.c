// Exam01.c

#include <stdio.h>

void main()
{
	// if의 사용
	int iValue = 0;

	// 1번
	if (iValue == 0) 
	{
		printf("1. iValue == 0 \n");	// 출력됨
	}

	// 2번
	if (iValue != 0)
	{
		printf("2. iValue != 0 \n");	// 출력안됨
	}

	// 3번
	if (!(iValue == 0))
	{
		printf("3. !(iValue == 0) \n");	// 출력안됨
	}

	// 4번
	if (!(iValue != 0))
	{
		printf("4. !(iValue != 0) \n");	// 출력됨
	}

	printf("\n\n");

	// 5번 : 수행문의 코드가 1줄이면, {} 생략 가능
	if (iValue == 0)
		printf("5. iValue == 0\n"); 	// 출력됨

	// 6번 : 수행문의 코드가 1줄이면, 같은 줄에 사용 가능
	if (iValue != 0) printf("6. iValue != 0\n"); // 출력안됨

	// 7번
	if (!(iValue == 0))
		printf("7. !(iValue == 0)\n");  // 출력안됨, 7번의 수행문
		printf("나는 7번의 수행문\n"); // 출력됨

}