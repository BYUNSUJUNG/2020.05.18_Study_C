// Exam01.c

#include <stdio.h>

void main() 
{
	// 산술연산자(사칙연산)
	int iNum1 = 10;
	int iNum2 = 3;

	// 연산을 수행할 때, 소괄호로 하나의 값으로 묶어준다.
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));

	// 정수와 정수를 연산하면, 그 결과도 정수이기 때문에 소수점이하의 값이 나오지 않는다.
	// 10/3 --> 3.3333333...... 이지만 둘다 정수라서 3이 나온다.
	// 정수와 실수를 연산하면, 그 결과는 실수이다.
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));

	// 문자열 안에서 %를 출력하려면 %%
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));

}