// Exam03.c

#include <stdio.h>

void main() 
{
	/*
		3. 진수 표현
			10진수
			8진수: 숫자 앞 0을 붙인다
			16진수: 숫자 앞 0x를 붙인다
				> 서식문자 옵션에 #를 사용하면, 어떤 진수 인지 함께 출력
	*/

	int iValue1 = 10;
	int iValue2 = 010;
	int iValue3 = 0x10;

	// 10진수로 출력
	printf("iValue1 = %d\n", iValue1);
	printf("iValue2 = %d\n", iValue2);
	printf("iValue3 = %#d\n", iValue3);

	// 8진수로 출력
	printf("iValue1 = %o\n", iValue1);
	printf("iValue2 = %o\n", iValue2);
	printf("iValue3 = %#o\n", iValue3);

	// 8진수로 출력
	printf("iValue1 = %x\n", iValue1);
	printf("iValue2 = %x\n", iValue2);
	printf("iValue3 = %#x\n", iValue3);

}