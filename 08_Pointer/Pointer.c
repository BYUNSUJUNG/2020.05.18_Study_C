//Pointer.c

/*
	포인터
		- 메모리 주소를 저장하는 '변수'
		
		- 생성: type(자료형) * 포인터변수명
			> 포인터 변수의 type은 가리킬 변수의 type과 일치해야한다		
			> 주소 값의 범위는 4byte --> 포인터 변수의 크기는 무조건 4byte
		
		- 주소를 다루는 방법	: &연산자(주소 연산자)
			>scanf("%d,&iNum");
			>&연산자는 변수의 주소값을 반환한다
				>> 시작 주소를 가르쳐 준다 (type에 맞게 알아서 공간사용)

		- 포인터를 다루는 방법 : *연산자 (간접 참조 연산자)
			> int * pNum = NULL; // 초기화, 0을 넣어도 되지만 포인터 변수임을 알리기 위해서
			> 0 OR NULL 은 주소가 없음을 뜻함
*/

#include <stdio.h>

void main() 
{
	int iNum = 0;
	int * pNum = NULL;
	int * pNum2 = &iNum; // 이렇게도 가능 
	int * pNum3 = NULL;

	iNum = 10; // int, 정수 저장
	pNum = &iNum; // 포인터 변수, 주소 저장

	printf("iNum의 값: %d\n", iNum); // 10
	printf("iNum의 주소 값: %d\n", &iNum); // 주소 값이 반환, 실행할 때마다 바뀜
	printf("iNum의 주소 값: %p\n", &iNum); // 16진수로 주소 값 실행

	printf("pNum의 값: %d\n", pNum);
	printf("pNum의 값(주소)을 따라간 공간의 값: %d\n", *pNum); // 10


	*pNum = 20;
	printf("iNum의 값: %d\n", iNum); // 20
	printf("pNum의 값(주소)을 따라간 공간의 값: %d\n", *pNum); // 20

	// pNum == &iNum : iNum의 주소값
	// *pNum == iNum : iNum 변수의 값

	*pNum3 = iNum; // 오류 뜸, 간접 참고할 공간이 현재 NULL로 없기에









}