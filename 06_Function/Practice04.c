/*
	소수 구하기

	1부터 입력받은 수 까지 소수 (Prime Number) 만 출력하기!
		* 1은 소수가 아닙니다.

	함수
		기능 : 매개변수로 전달된 숫자가 소수인지 판별 후 1/0 리턴 (참/거짓)
		함수명 : IsPrimeNumber
	
		> for문 안에서 함수를 호출한 뒤, 그 결과에 따라 해당 숫자를 출력한다.

	[출력결과]
	숫자를 입력하세요 : 20
	결과 : 2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int IsPrimeNumber(int iNum);

void main()
{
	int iNum = 0;
	int i = 0;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &iNum);
	printf("결과 : ");
	for (i = 1; i <= iNum; i++)
	{
		if (IsPrimeNumber(i)==1) { // return 값이 1로 참이면 소수
			printf("%d", i);
		}
	}
}

int IsPrimeNumber(int iNum)
{
	int iCnt = 0; // 1일 경우 소수

	// 소수일 경우 1 return
	for (int i = 1; i <= iNum; i++)
	{
		if (iNum % i == 0) iCnt++;
	}
	if (iCnt == 1) // 소수
	{
		return 1;
	}
	else // 소수가 아닌 수
	{
		return 0;
	}

}