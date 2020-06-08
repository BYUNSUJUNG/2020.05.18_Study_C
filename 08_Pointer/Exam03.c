//Exam03.c

#include <stdio.h>

void main() 
{
	/*
		배열과 포인터
			- 배열명은 첫 번째 요소의 주소 (시작주소/ 첫번째 byte)
				> 2차원 배열에서 [][]인덱스를 [] 하나만 사용하면 한행의 시작 주소
		
			- 배열변수를 포인터 변수에 저장하면 똑같이 다룰 수 있다
				> 차이점
				1. 크기
				2. 배열의 연산 여부

	
	*/	

	int iArr[5] = { 1,2,3,4,5 };
	int * pArr = iArr; // iArr자체가 주소값
	int i = 0;

	printf("배열명 자체의 값: %d\n", iArr); // 생성된 배열의 시작 주소
	printf("배열 첫 번째 요소의 주소: %d\n", &iArr[0]); // iArr와 같다
	printf("배열명이 가리키는 값: %d\n", *iArr);
	printf("배열 첫 번째 요소의 값", iArr[0]);

	printf("포인터 변수의 값: %d\n", pArr);
	printf("포인터 첫 번째 주소: %d\n", pArr + 0);
	printf("포인터 두 번째 주소: %d\n", pArr + 1);
	printf("포인터 네 번째 주소: %d\n", pArr + 3);
	// 무조건 주소값 + 정수

	printf("배열 네번째 요소의 주소: %d\n", &iArr[2]);

	for (i = 0; i < 5; i++)
	{
		printf("%d회차 수행 \n", i + 1);
		prinf("1. 배열 각 요소의 주소: %d\n", iArr+i);
		prinf("2. 배열 각 요소의 값: %d\n", *(iArr + i));
		prinf("3. 포인터 각 요소의 주소: %d\n", &pArr[i]);
		prinf("4. 포인터 각 요소의 값: %d\n", pArr[i]);
		
	}

}