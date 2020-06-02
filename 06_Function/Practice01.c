/*
	- 두 개의 정수를 입력 받아 큰 수에서 작은 수를 뺀 결과 값을 출력
		> 함수 : 매개변수로 2개의 정수를 받고, 계산하여 결과 값 반환

	[출력결과]
	두 수 입력 : 1 20
	결과 : 19 
*/

#include <stdio.h>

// [선언]
int sub(iInput1, iInput2);

void main()
{
	int iInput1 = 0;
	int iInput2 = 0;

	printf("사칙연산을 할 두 숫자 입력: ");
	scanf("%d %d", &iInput1, &iInput2);
	// [호출]
	printf("결과 : %d\n",sub(iInput1,iInput2));

}

// [정의]
int sub(iInput1, iInput2)
{
	if (iInput1 > iInput2)
	{
		return(iInput1 - iInput2);
	}
	else // iInput1 <= iInput2
	{
		return(iInput2 - iInput1);
	}
}



