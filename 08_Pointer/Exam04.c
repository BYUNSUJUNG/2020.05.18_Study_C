// Exam04.c

// �迭�� �������� ���踦 �����.
// --> �Լ����� �ܺ� �迭�� �ٷ� �� �ִ�. 

#include <stdio.h>

// [����]
void PrintArr(int * pArr, int iArrLen);

void main()
{
	int iArr1[5] = { 10, 20, 30, 40, 50 }; 
	int iArr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int iArrLen = 0; 

	// �Լ� ���ο����� �迭�� ���̸� �� �� ���� ������ 
	// �Լ� ȣ�� ���� �̸� ���̸� ���ؼ� ���� �����Ѵ�. 
	iArrLen = sizeof(iArr1) / sizeof(iArr1[0]);
	PrintArr(iArr1, iArrLen);

	iArrLen = sizeof(iArr2) / sizeof(iArr2[0]);
	PrintArr(iArr2, iArrLen); 
}
//[����]
void PrintArr(int * pArr, int iArrLen) // ���̴� ���޹޾ƾ߸� �� �� �ִ�. 
{
	int i = 0;
	
	//int iArrLen = 0;
	//iArrLen = sizeof(pArr) / sizeof(pArr[0]);
	// �Լ��ȿ����� �����ͺ����� ������ ����� �迭�� ���̸� ���� �� ����. 
	// �����ͺ����� �׻� 4byte�� 4/4 = 1

	printf("�迭�� ��� ��� : ");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");
}