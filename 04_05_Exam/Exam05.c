// Exam05.c
// 5. 1 ���� 100���� ��� ���� ���� ���Ͽ� �� ���� ��� (for ���� ���)


#include <stdio.h>

void main()
{
	int iSum = 0;
	for (int i = 1; i < 101; i++) // 1���� 100���� �ݺ�
	{
		iSum += i;
		printf("%d ", iSum);
	}


}