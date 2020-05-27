// Exam05.c

#include <stdio.h>

void main() 
{
	// 5. sizeof() ->  자료의 크기를 확인하는 '연산자'
	//	> 자료의 크기를 byte단위로 알려줌
	//	> sizeof()는 '정수'로 반환
	char cNum = 10;
	int iNum = 20;
	float fNum = 1.1f;
	double dNum = 2.2;
	
// (1) char cNum = 10; 
// char의 사이즈는 1

	// 자료형명으로 사이즈 확인
	int iCharSize = sizeof(char); // 1
	printf("iCharSize = %d\n",iCharSize);

	// 변수명으로 사이즈 확인
	printf("cNum의 크기 = %d\n", sizeof(cNum));

	printf("======================================\n");

// (2) int iNum = 20;
// int의 사이즈는 4

	// 변수 값으로 사이즈 확인
	printf("10의 크기 = %d\n", sizeof(10));

	// 자료형명으로 사이즈 확인
	printf("int = %d\n", sizeof(int));

	// 변수명으로 사이즈 확인
	printf("iNum의 크기 = %d\n", sizeof(iNum));

	printf("======================================\n");

// (3) float fNum = 1.1f;
// float의 사이즈는 4

	// 변수 값으로 사이즈 확인
	printf("1.1f의 크기 = %d\n", sizeof(1.1f));

	// 자료형명으로 사이즈 확인
	printf("float = %d\n", sizeof(float));

	printf("======================================\n");

// (4) double dNum = 2.2;
// double의 사이즈는 8

	// 변수 값으로 사이즈 확인
	printf("2.2의 크기 = %d\n", sizeof(2.2));

	// 자료형명으로 사이즈 확인
	printf("double = %d\n", sizeof(double));

	printf("======================================\n");

// 우리가 쉽게 생각하는 5 + 3.3인 결과 8.3이 %f에 들어가겠구나
// 실제로는 변수 공간이 만들어지는 것처럼
// 5(int 4byte), 3.3(double 8byte)이
// 임시로 만들어져서 8.3도 임의의 공간에 저장되었다가
// %f에 사용되고 없어진다.

	printf("%f\n", (5 + 3.3));

}