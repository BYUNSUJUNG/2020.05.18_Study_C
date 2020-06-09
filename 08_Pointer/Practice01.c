#include <stdio.h>

void main()
{
	int iValue = 0;
	int* pValue = &iValue;

	// pValue만 이용하여 코드 완성하기
	printf("숫자 입력 : ");
	scanf("%d", pValue);
	
	printf("입력한 값의 2제곱은 %d 입니다.\n", (*pValue)*(*pValue));
}