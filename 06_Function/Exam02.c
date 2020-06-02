// Exam02.c

/*	
	두 수의 사칙연산 함수 
	선언, 정의, 호출
*/

#include <stdio.h>

// [선언]
int add(int iNum1, int iNum2); // 더하기

int sub(int iNum1, int iNum2); // 빼기

int mul(int iNum1, int iNum2); // 곱하기

int div(int iNum1, int iNum2); // 나누기


void main() 
{
	int iNum1 = 0; // 첫번째 수
	int iNum2 = 0; // 두번째 수
	printf("사칙연산을 할 두 숫자 입력: ");
	scanf("%d %d", &iNum1, &iNum2);

	// [호출]
	printf("%d + %d = %d\n", iNum1, iNum2, add(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, sub(iNum1, iNum2));
	printf("%d x %d = %d\n", iNum1, iNum2, mul(iNum1, iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, div(iNum1, iNum2));

}

// [정의]
int add(int iNum1, int iNum2) // 더하기
{
	return (iNum1 + iNum2);
}

int sub(int iNum1, int iNum2) // 빼기
{
	return (iNum1 - iNum2);
}

int mul(int iNum1, int iNum2) // 곱하기
{
	return (iNum1 * iNum2);
}

int div(int iNum1, int iNum2) // 나누기
{
	return (iNum1 / iNum2);
}