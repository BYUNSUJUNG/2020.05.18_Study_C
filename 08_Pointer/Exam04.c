// Exam04.c

// 배열과 포인터의 관계를 배웠다.
// --> 함수에서 외부 배열을 다룰 수 있다. 

#include <stdio.h>

// [선언]
void PrintArr(int * pArr, int iArrLen);

void main()
{
	int iArr1[5] = { 10, 20, 30, 40, 50 }; 
	int iArr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int iArrLen = 0; 

	// 함수 내부에서는 배열의 길이를 알 수 없기 때문에 
	// 함수 호출 전에 미리 길이를 구해서 같이 전달한다. 
	iArrLen = sizeof(iArr1) / sizeof(iArr1[0]);
	PrintArr(iArr1, iArrLen);

	iArrLen = sizeof(iArr2) / sizeof(iArr2[0]);
	PrintArr(iArr2, iArrLen); 
}
//[정의]
void PrintArr(int * pArr, int iArrLen) // 길이는 전달받아야만 알 수 있다. 
{
	int i = 0;
	
	//int iArrLen = 0;
	//iArrLen = sizeof(pArr) / sizeof(pArr[0]);
	// 함수안에서는 포인터변수만 가지고서 절대로 배열의 길이를 구할 수 없다. 
	// 포인터변수는 항상 4byte라서 4/4 = 1

	printf("배열의 모든 요소 : ");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");
}