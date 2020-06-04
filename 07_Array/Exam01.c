//Exam01.c

#include <stdio.h>
#include <string.h> // strcpy를 사용하기 위함

void main() 
{
	/*
		char 배열
			- char는 1개 문자를 표현하는 자료형
			- 문자열의 끝에는 null 문자 \0가 삽입되어 있다 (자동)
				> 문자열의 끝을 의미
				> null 문자 때문에 배열 선언시 원하는 문자열 길이보다
					최소 1 이상 여유있게 선언해야한다.
				> null 문자 포함 때문에 변수명의 접두사에 sz가 붙는다
													string zero

	*/
	char szStr1[20] = "Hello"; //Hello000000000000000 
							   // 나머지공간에는 자동으로 null 문자
	char szStr2[20] = { 'H','e','l','l','o', }; //szStr1과 동일 // 작은 따옴표

	char szStr3[20] = { 0, }; // 모든 공간을 0으로 초기화 (정수0은 null문자)

	char szStr4[20]; // 초기화 하지 않은 문자 배열

	char szStr[] = "Hello World"; // 길이가 자동으로 잡힌다 
								  //(11글자+null문자=12글자)

	printf("szStr의 크기: %d\n",sizeof(szStr));

	printf("null문자 문자로 출력: [%c]\n", szStr[11]); // [ ] // 공백
	printf("null문자 정수로 출력: [%d]\n", szStr[11]); // [0] // 0

	printf("공백을 문자로 출력: [%c]\n", ' '); // [ ] // 공백
	printf("공백을 정수로 출력: [%d]\n", ' '); // [32] // 32

	// 널문자는 정수로 0
	// 공백과는 다른 문자 (공백은 정수 32)


	// =====================================================================
	printf("szStr = [%s]\n", szStr); 
	// 문자 배열의 모든 내용은 %s 문자열로 출력할 수 있다
	// %s은 널문자 만날 때까지의 글자를 출력

	szStr4[0] = 'H';
	szStr4[1] = 'e';
	szStr4[2] = 'l';
	szStr4[3] = 'l';
	szStr4[4] = 'o';
	szStr4[5] = 0;
	// szStr4[5] = '/0'; // 똑같음
	printf("szStr4 = [%s]\n", szStr4);


	// =====================================================================
	//szStr4 = "Hello" 불가능, 배열을 선언할 땐 문자열 대입이 가능하지만
							// 선언하고 나서는 문자열 대입이 불가능하다

	// 문자열을 배열에 대입하려면 관련 '함수'를 사용해야한다.
	// strcpy(저장될 배열이름, 저장할 문자열);
	// string.h 헤더 파일 필요

	strcpy(szStr4, "Hello World"); // 문자열 대입
	printf("szStr4 = [%s]\n", szStr4);
	strcpy(szStr3, szStr4); // szStr4의 문자를 szStr3에 대입
	printf("szStr3 = [%s]\n", szStr3);

}