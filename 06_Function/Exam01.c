// Exam01.c

#include <stdio.h>


// [����]
int GetSum(int iNum);

void main()
{
	int iInput = 0; 
	printf("�����Է�: ");
	scanf("%d", &iInput);
	printf("1~%d������ ��: %d\n", iInput, GetSum(iInput)); 
	printf("1~10������ ��: %d\n", GetSum(10));
	printf("1~20������ ��: %d\n", GetSum(20));
}
// [����] : 1���� ���޵� ������ ���� ���ؼ� ��ȯ
int GetSum(int iNum)
{
	int i = 0;
	int iSum = 0;
	for (i = 1; i <= iNum; i++)
	{
		iSum += i; // ����
	}
	return iSum;
}