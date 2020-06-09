// Exam02.c

// 1. �Լ��� ���๮���� �Լ� �ܺ��� ������ ���� 
// 2. �����Ҵ� 

#include <stdio.h>

// [����]
void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);

void main()
{
	/*
		�Լ����� �Ű������� ���� ���� ���� �޴� ��� 
			1. Call by Value 
				- ���� ���� ȣ�� 
				- �츮�� ���� �Լ��� ȣ���ߴ� ���� 
				- ���� '��'�� ���� �޴´�. 

			2. Call by Reference (address)
				- ������ ���� ȣ��(�ּҿ� ���� ȣ��)
				- �����ͺ����� �Ű������� ����Ͽ� '�ּ� ��'�� �޴´�.
					> �Լ� �ܺ��� ������ ������ �� �ִ�. 
	*/
	int iNum1 = 100; 
	int iNum2 = 200; 

	SwapValue(iNum1, iNum2); 
	printf("SwapValue ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 1. ���� ���� ȣ��.
	// SwapValue ȣ�� �� �� ������ ����� ���� �� (100, 200)�� ����
	// iNum1, iNum2�� ���� ��������� ������ ������ ����. 

	// =================================================
	SwapRef(&iNum1, &iNum2);
	printf("SwapRef ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 2. ������ ���� ȣ��.
}
// [����]
void SwapValue(int iNum1, int iNum2)
{
	int iTemp = iNum1; // �ӽð����� iNum1�� ���� ���� 
	iNum1 = iNum2; 
	iNum2 = iTemp; // �ӽð����� ��(���� iNum1�� ��)�� iNum2�� ���� 

	printf("SwapValue ���๮, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
}

void SwapRef(int * pNum1, int * pNum2)
{
	int iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp; // �ӽ� ������ ���� iNum2�� ����
}