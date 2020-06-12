// MemoryAllocation.c

/*
	메모리 동적 할당
		- 정적 할당 : 일반 변수나 배열(코드에 공간의 크기 고정)
				> 우리가 여태 사용하던 방식 

		- 동적 할당 : 함수를 이용하여 '런타임' 도중 원하는 크기의 메모리 할당
				> 런타임		: 프로그램이 실행 중인 상태 
				> malloc()	: 메모리 할당 (공간을 만든다.)
				> free()	: 할당된 메모리 해제(공간 삭제)

		- 정적 할당은 기본적으로 자동 소멸이 된다. (지역변수 : 지역이 끝나면 소멸)
		- malloc()으로 할당한 공간은 사용을 다 한 뒤, free()로 삭제 
		  malloc()으로 할당한 공간은 자동 소멸이 되지 않는다. 
			> 삭제 하지 않으면 동적 할당한 공간은 메모리 상에 계속 존재하며 
			  이러한 메모리가 쌓이면 프로그램 오류가 발생 (메모리 누수 현상)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
	// 3개 과목의 점수를 입력 받고, 총점과 평균을 출력하는 코드(정적코드)
	// -> 과목의 개수를 입력 받고, 유동적으로 공간을 만들도록 수정(동적할당)
	
	// 동적 할당 코드

	int iCount = 0; // 과목의 개수 입력 변수
	int * pArrScore = NULL;	// 동적 할당에 필요한 포인터 변수
	int iTotal = 0; // 합계를 누적할 변수
	int i = 0;

	printf("입력할 과목의 수: ");
	scanf("%d", iCount);

	//			(형변환)		(만들고 싶은 공간의 크기) - byte단위
	// 문자일 경우에는 사이즈+1해줘야한다 null문자 포함이기에
	pArrScore = (int *)malloc(iCount * sizeof(int)); // = iCount * 4
	// malloc()은 공간을 만든 뒤, 그 공간을 사용할 수 있도록
	// 만든 공간의 시작 주소 값을 반환해준다. (return)
	// 반환 값을 대입 받을 포인터의 타입은 malloc() 기준에서 모르기 때문에
	// 우리가 사용할 포인터의 타입으로 형변환을 해주어야한다.
	// stdlib.h 헤더 파일 필요

	// 초기화 --> 우리가 직접 초기화 할 수 있는 함수

	// memset(값을 세팅할 주소, 세팅할 값, 크기) // 메모리세팅
	// string.h 헤더 파일 필요
	memset(pArrScore, 0, iCount * sizeof(int));

	// 동적할당 + 초기화까지 완료가 되면 우리는 포인터 변수를 배열처럼 사용할 수 있다
	printf("%d개 과목의 점수를 입력: ", iCount);

	// 입력 받는 for문
	for (i = 0; i < iCount; i++)
	{
		scanf("%d", &pArrScore[i]);
	}

	// 총점을 누적하는 for문
	for (i = 0; i < iCount; i++)
	{
		iTotal += pArrScore[i];
	}

	free(pArrScore); // 메모리 해제

	printf("총점: %d점\n", iTotal);
	printf("평균: %.1f점\n", (float)iTotal / iCount);
















	

	// 정적 할당 코드 -> 배열의 크기가 변경될 때마다, 프로그램을 새로 만들어줘야한다.
	/*
	int iArrScore[3] = 0;
	int iTotal = 0;
	int i = 0;

	printf("3개 과목 점수 입력: ");

	// 입력 받는 for문
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &iArrScore[i]);
	}

	// 총점을 누적하는 for문
	for (i = 0; i < 3; i++)
	{
		iTotal += iArrScore[i];
	}

	printf("총점: %d\n", iTotal);
	printf("평균: %.1f점 \n", iTotal / 3.0);
	*/
}