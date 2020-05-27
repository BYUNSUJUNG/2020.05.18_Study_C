// Exam08.c

#include <stdio.h>

void main() 
{
	/*
		형변환 -> 자료형의 변환
			1. 자동형변환
				(1) 정수 -> 실수
				(2) 실수 -> 정수
				(3) 작은 타입 정수 -> 큰 타입 정수
			2. 명시적 형변환(casting)
			(type)을 값 앞에 명시하여 변환
	*/


	// 1. 자동형변환
	//	(1) 정수 -> 실수
	double dNum = 123; // int -> double 자동형변환
	//	(2) 실수 -> 정수
	int iNum = 126.123; // double -> int 자동형변환
	//	(+) 정수 -> 문자
	char cNum = iNum; // int -> char 자동형변환

	printf("%f\n", dNum);
	printf("%d\n", iNum);
	printf("%d\n", cNum);

	//	(3) 작은 타입 정수 -> 큰 타입 정수
	printf("5 + 3.14 = %f\n", (5 + 3.14)); // int + double => double 


	// 2. 명시적 형변환(casting)
	printf("5 + 3.14 = %d\n", (5 + (int)3.14)); // 5 + 3 --> 8 
	printf("5 + 3.14 = %d\n", (int)(5 + 3.14)); // (int)8.14 --> 8 

	// %f
	printf("5 + 3.14 = %f\n", (int)5 + 3.14); // 8.14


}