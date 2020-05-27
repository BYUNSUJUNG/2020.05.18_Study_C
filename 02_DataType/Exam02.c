// Exam02.c

#include <stdio.h>

void main() 
{
	// 2. 실수형 (소수)
	float fValue = 2.2f; // f를 붙이지 않으면 double자료형
	double dValue = -3.666666666666666;

	printf("fValue: %f\n", fValue); // 기본 소수점 6번째 자리까지 출력
	printf("dValue: %f\n", dValue); // 7번째 자리수에서 반올림

	printf("dValue: %.2f\n", dValue); // [%.m] : 소수점 지정
}