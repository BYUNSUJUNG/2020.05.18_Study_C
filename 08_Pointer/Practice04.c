
/*
	���� ��±�
		- ������ ���� �� �׸���
			> 5���� �� 1��
			> ���� ������ ������
		1. �迭�� ������ �Է� �ޱ�
		2. �迭�� �迭ũ�⸦ ���� ���� �Լ��� �����ϰ� �Լ����� �� ���

	[��°��]
	(51) **********			<-- 10��
	(13) **					<-- 2��
	(75) ***************	<-- 15��
	...
*/

#include <stdio.h>

void PrintStar( int* pArr, int iArrLen );

void main()
{
	int iArrScore[5] = {0, };
	int i = 0;
	// �ڵ� �ۼ�

	int iArrLen = sizeof(iArrScore) / sizeof(iArrScore[0]);
	for (i = 0; i < iArrLen; i++)
	{
		printf("������ �Է����ּ���: ");
		scanf("%d", iArrScore[i]);
	}
	PrintStar(iArrScore, iArrLen);

}

void PrintStar( int* pArr, int iArrLen )
{
	for (int i = 0; i < iArrLen; i++)
	{
		printf("(%d)", *pArr[i]);
		for (int j = 0; j < *pArr[i] / 5; j++) 
		{
			printf("*");
		}
	}
}
