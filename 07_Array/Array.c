//Array.c


#include <stdio.h>

/*
	배열
		> 같은 타입의 여러 공간을 하나의 변수로 다루는 것

		> 선언(생성) : [] 대괄호를 이용
			type 배열명[공간의 개수]
			int iArr[5] // 길이가 5인 int 배열, 4byte*5=20byte 
			float fArr[3] // 길이가 3인 float 배열, 4byte*3=12byte 

		>index(인덱스)
			배열의 요소 : 생성된 배열의 '각' 저장 공간
			배열이름[index] 형태로 요소에 접근(사용)
			인덱스 = 순서
				> 모든 언어에서 인텍스는 0부터 시작
				> index의 범위 = 0 ~ (길이-1)
*/

void main() 
{
	// 배열 생성
	int iArr1[5]; // 각 공간은 초기화 되지 않음 (쓰레기 값)
	int iArr2[5] = { 1, 2, 3, 4, 5 }; // 생성과 동시에 초기화(순서대로)

	int iArr3[5] = { 1, 2 }; // {1,2,0,0,0} // 자동 0 대입

	int iArr4[5] = { 0, }; // 배열만 들때 가장 올바른 방법 (모든 공간 0)

	int iArr5[] = { 1, 2, 3, 4, 5 }; // 자동으로 길이가 5 (컴파일러 역할)

	// 배열 요소 접근
	iArr1[0] = 10; // 첫 번째 욧소에 10대입
	iArr1[1] = 20;
	iArr1[2] = 30;
	iArr1[3] = 40;
	iArr1[4] = 50; 
	// iArr1[5] = 60;// 잘못된 인덱스, 6번째 공간은 없다'

	int i = 0;
		
	//C, java에서는 인덱스에 음수 값 불가능, 파이션에서는 가능
	printf("iArry[0] = -%d\n", iArr1[0]);
	printf("iArry[1] = %d\n", iArr1[1]);
	printf("iArry[2] = %d\n", iArr1[2]);
	printf("iArry[3] = %d\n", iArr1[3]);
	printf("iArry[4] = %d\n", iArr1[4]);

	for (i = 0; i < 5; i++)
	{
		// i: 0,1,2,3,4 / 5 끝
		printf("[0] = %d\n", iArr1[i]);

		iArr1[i] = 100 * (i + 1);
		printf("[0] = %d\n", iArr1[i]);
	
	}
	// 배열의 크기 sizeof()
	printf("iArry의 크기: %d\n", sizeof(iArr1));

	//변수 선언 (지역 - 그냥 무조건 진입)
	{
		int iArr[10] = { 0, };
		int iArrLen = 0;

				// 40byte / 4byte => 10 (배열의 길이)
		iArrLen = sizeof(iArr) / sizeof(iArr[0]);

		for (i = 0; i < iArrLen; i++) // 조건식에 배열 길이
		{
			iArr[i] = 1 * (i + 1);
			printf("iArr[%d] = %d\n", i, iArr[i]);
		}
	}
	// 바람직한 배열과 for문의 사용법
}