// Exam03.c

#include <stdio.h>

void main() 
{
	/*
		단항 연산자 
			- 항이 하나 밖에 없다. (피연산자가 1개)

			1. 증감연산자 : ++, --
				피연산자의 값을 1증가(++) 또는 1감소(--)

			2. 부호연산자 
				피연산자의 값에 부호 적용 (- 기호)
	*/

	int iNum1 = 10;
	int iNum2 = -10; // 부호 연산자
	int iNum3 = 0;

	// 1. 증감 연산자
	printf("iNum1++ = %d\n", iNum1++); // (1) 후위증감: 피연산자를 '사용'한 후 값을 증감
	printf("iNum1 = %d\n", iNum1);
	printf("++iNum1 = %d\n", ++iNum1); // (2) 전위증감: 피연산자의 값을 증감한 후에 '사용'

	iNum3 = iNum1++;
	printf("iNum3 = %d\n", iNum3);
	printf("iNum1 = %d\n", iNum1);

	// 2. 부호 연산자
	printf("iNum2 = %d\n", iNum2);
	printf("-iNum2 = %d\n", -iNum2); // 부호 연산 사용 : - (-10) => 10

	// 부호 연산자는 사용만 할 뿐, 값자체를 바꾸지는 않는다.
	printf("iNum2 = %d\n", iNum2);

}