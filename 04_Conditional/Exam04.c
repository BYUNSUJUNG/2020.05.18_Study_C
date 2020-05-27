// Exam04.c

#include <stdio.h>

void main() 
{
	// if문 중첩: if문 수행문 안에 또 다른 if문을 사용
	int iNum = 0;
	printf("숫자 입력: ");
	scanf("%d", &iNum);

	// 입력된 정수가 양/0/음 판별
	
	// 삼항연산자 중첩과 동일한 형태
	if (iNum > 0)
	{
		printf("양수\n");
	}
	else
	{
		// 새로운 지역
		// main() 함수에서 사용할 수 있는 모든 코드를 동일하게 작성할 수 있다.
		if (iNum < 0)
		{
			printf("음수\n");
		}
		else
		{
			printf("0이다\n");
		}
		
	}
}