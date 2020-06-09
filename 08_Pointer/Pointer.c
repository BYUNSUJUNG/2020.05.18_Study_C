// Pointer.c

/*
	포인터 (Pointer)
		- 메모리 주소를 저장하는 '변수'
			> 다른 값이 저장된 공간(변수)을 가리킨다. 

		- type * 포인터변수명 
			> 포인터 변수의 type은 가리킬 변수의 type과 일치해야 한다. 
				>> 주소 값의 범위는 4byte --> 포인터변수의 크기는 4byte 

		- 주소를 다루는 방법	: & 연산자 (주소 연산자)
			> scanf("%d", &iNum);
			> &연산자는 변수의 주소 값을 반환한다. (연산의 결과가 주소 값)
				>> 시작 주소를 가르쳐준다. (type의 크기에 맞게 알아서 공간 사용)

		- 포인터를 다루는 방법 : *연산자 (간접 참조 연산자)
			> int * pNum = NULL;  // NULL은 초기값 
			> NULL은 정수 0이다. (포인터인 것을 명시하려고 사용)
			> 0은 가리키는 공간이 없다라고 해석 
*/
#include <stdio.h>

void main()
{
	int iNum = 0; 
	int * pNum = NULL;
	int * pNum2 = &iNum; 
	int * pNum3 = NULL; 

	iNum = 10;		// int이기 때문에 iNum 공간에는 정수를 저장할 수 있다. 
	pNum = &iNum;	// 포인터 변수이기 때문에 pNum 공간에는 주소를 저장 

	printf("iNum의 값 : %d\n", iNum);
	printf("iNum의 주소 값 : %d\n", &iNum); // 주소 값이 반환 
	printf("iNum의 주소 값 : %p\n", &iNum); // 16진수로 주소 값 출력 

	printf("pNum의 값 : %d\n", pNum);
	printf("pNum의 값(주소)을 따라간 공간의 값 : %d\n", *pNum);
	// (1) pNum		: 포인터 변수를 그대로 사용 (내 공간의 값 = 주소 값)
	// (2) *pNum	: 내 공간의 주소를 따라가서 그 공간의 값을 사용 (간접 참조)
	//	--> 정수 값을 저장할 수 있는 공간은 현재 iNum 밖에 없다. 
	//		이 공간을 접근할 수 있는 방법이 늘어났다. (포인터 변수를 통해서)

	*pNum = 20; 
	printf("iNum = %d\n", iNum);
	printf("*pNum = %d\n", *pNum);


	// pNum과 &iNum은 같다 --> iNum의 주소 값 
	// *pNum과 iNum은 같다 --> iNum 변수의 값 
	*pNum3 = iNum; 
	printf("*pNum3 = %d\n", *pNum3);
	// 간접 참조(*)할 공간이 없다 --> 오류 발생 

}