/*
	ũ�� 5�� �����迭�� ���� �Է� �ް�, ���� ū �� ����ϱ�
*/

#include <stdio.h>

int FindMaxValue( int* pArr, int iArrLen );

void main()
{
	int iArr[5]		= {0, };
	int iMaxValue	= 0;
	int i = 0;

	int iArrLen = sizeof(iArr) / sizeof(iArr[0]); // 5
	
	// �ڵ� �ۼ�
	for (i = 0; i < iArrLen; i++) 
	{
		printf("%d �ε����� ���� �Է����ּ���: ",i);
		scanf("%d", iArr[i]);
	}
	

	iMaxValue = FindMaxValue(iArr, iArrLen);
	printf("���� ū ����: %d", iMaxValue);
}


int FindMaxValue( int* pArr, int iArrLen )
{
	int iMax = 0;
	for (int i = 0; i < iArrLen; i++)
	{
		if (*pArr[i] > iMax) 
		{
			iMax = *pArr[i];
		}
	}
	return iMax;

}