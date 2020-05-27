//Exam04.c	

#include <stdio.h>

void main() 
{
	/*
		비교 연산자
			- 조건문, 반복문의 '조건식'에서 사용
			- 조건만족 : 정수 1반환 (참) --> true
			- 조건불만족 : 정수 0반환 (거짓) --> false
				> c언어에서는 0이 아닌 모든 값은 '참'으로 간주

			1. 등가 비교: 두 값이 같은지 다른지 비교 (== !=)
			2. 대소 비교: 두 값의 크기 비교 (	>	<	>=	<=)
	*/			

	int iNum1 = 5;
	int iNum2 = 5;

	// 1. 등가비교
	printf("iNum1 == iNum2 : %d\n", (iNum1 == iNum2)); // 1 --> true
	printf("iNum1 != iNum2 : %d\n", (iNum1 != iNum2)); // 0 --> false

	// 2. 대소비교
	printf("iNum1 > iNum2 : %d\n", (iNum1 > iNum2)); // 0 --> false
	printf("iNum1 < iNum2 : %d\n", (iNum1 < iNum2)); // 0 --> false

	printf("iNum1 >= iNum2 : %d\n", (iNum1 >= iNum2)); // 1 --> true
	printf("iNum1 <= iNum2 : %d\n", (iNum1 <= iNum2)); // 1 --> true

}