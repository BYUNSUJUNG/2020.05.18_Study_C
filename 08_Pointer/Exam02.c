//Exam02.c

#include <stdio.h>
	
//	1. 함수의 수행문에서 함수 외부의 변수를 접근
//	2. 동적할당


// [선언]
void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);
void main() 
{
	/*
		함수에서 매개변수를 통해 값을 전달받는 방법
		1. call by Value
			- 값에 의한 호출
			- 실제 '갑을' 전달받는다.

		2. call by Refernce (address)
			- 참조에 의한 호출 (주소에 의한 호출)
			- 포인터 변수를 매개 변수로 사용하여 '주소값'을 받는다
	*/
	int iNum1 = 100;
	int iNum2 = 200;

	SwapValue(iNum1, iNum2);
	printf("SwapValue 호출 후, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 1. 값에 의한 호출.
	// 즉, 값만 전달했기에 실제 값은 바뀌지 않는다
	
	// =================================================
	SwapRef(&iNum1, &iNum2);
	printf("SwapRef 호출 후, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 2. 참조에 의한 호출.
}

// [정의]
void SwapValue(int iNum1, int iNum2) 
{
	int iTemp = iNum1; // 임시 공간에 iNum1의 값을 저장
	iNum1 = iNum2;
	iNum2 = iTemp; // 임시 공간의 값을 iNum2에 저장

	printf("swapValue 수행문, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);

}
void SwapRef(int * pNum1, int * pNum2) 
{
	int iTemp = *pNum1; 
	*pNum1 = *pNum2;
	*pNum2 = iTemp; // 임시 공간의 값을 iNum2에 저장


}
