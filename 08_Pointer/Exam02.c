//Exam02.c

#include <stdio.h>
	
//	1. �Լ��� ���๮���� �Լ� �ܺ��� ������ ����
//	2. �����Ҵ�


// [����]
void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);
void main() 
{
	/*
		�Լ����� �Ű������� ���� ���� ���޹޴� ���
		1. call by Value
			- ���� ���� ȣ��
			- ���� '����' ���޹޴´�.

		2. call by Refernce (address)
			- ������ ���� ȣ�� (�ּҿ� ���� ȣ��)
			- ������ ������ �Ű� ������ ����Ͽ� '�ּҰ�'�� �޴´�
	*/
	int iNum1 = 100;
	int iNum2 = 200;

	SwapValue(iNum1, iNum2);
	printf("SwapValue ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 1. ���� ���� ȣ��.
	// ��, ���� �����߱⿡ ���� ���� �ٲ��� �ʴ´�
	
	// =================================================
	SwapRef(&iNum1, &iNum2);
	printf("SwapRef ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
	// 2. ������ ���� ȣ��.
}

// [����]
void SwapValue(int iNum1, int iNum2) 
{
	int iTemp = iNum1; // �ӽ� ������ iNum1�� ���� ����
	iNum1 = iNum2;
	iNum2 = iTemp; // �ӽ� ������ ���� iNum2�� ����

	printf("swapValue ���๮, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);

}
void SwapRef(int * pNum1, int * pNum2) 
{
	int iTemp = *pNum1; 
	*pNum1 = *pNum2;
	*pNum2 = iTemp; // �ӽ� ������ ���� iNum2�� ����


}
