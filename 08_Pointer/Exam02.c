// Exam02.c

// 1. 함수의 수행문에서 함수 외부의 변수를 접근 
// 2. 동적할당 

#include <stdio.h>

// [선언]
void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);

void main()
{
	/*
		함수에서 매개변수를 통해 값을 전달 받는 방법 
			1. Call by Value 
				- 값에 의한 호출 
				- 우리가 여태 함수를 호출했던 형태 
				- 실제 '값'을 전달 받는다. 

			2. Call by Reference (address)
				- 참조에 의한 호출(주소에 의한 호출)
				- 포인터변수를 매개변수로 사용하여 '주소 값'을 받는다.
					> 함수 외부의 변수에 접근할 수 있다. 
	*/
	int iNum1 = 100; 
	int iNum2 = 200; 

	SwapValue(iNum1, iNum2); 
	printf("SwapValue 호출 후, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 1. 값에 의한 호출.
	// SwapValue 호출 시 각 변수에 저장된 실제 값 (100, 200)을 전달
	// iNum1, iNum2는 값만 전달해줬기 때문에 영향이 없다. 

	// =================================================
	SwapRef(&iNum1, &iNum2);
	printf("SwapRef 호출 후, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 2. 참조에 의한 호출.
}
// [정의]
void SwapValue(int iNum1, int iNum2)
{
	int iTemp = iNum1; // 임시공간에 iNum1의 값을 저장 
	iNum1 = iNum2; 
	iNum2 = iTemp; // 임시공간의 값(원래 iNum1의 값)을 iNum2에 저장 

	printf("SwapValue 수행문, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
}

void SwapRef(int * pNum1, int * pNum2)
{
	int iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp; // 임시 공간의 값을 iNum2에 저장
}