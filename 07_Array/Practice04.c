/*
	05 ������Ʈ - Practice03.c ����

	�������� ��� ���� 2�����迭�� ���� �� ����ϱ�

		1. �����ϴ� for��
				i, j�� �̿��Ͽ� �迭�� �� �����ϱ� (��� X)

		2. ����ϴ� for��
				printf("%2d * %2d = %2d\t", i, j, arr[i][j]);
				�̷� ���·� i,j �� �迭�� ���� ����Ͽ� ����ϱ�
				(�� �ڵ尡 ������ �ƴ�)
*/

#include <stdio.h>

void main()
{

	int iArr[9][9] = { 0, };

	// �����ϴ� for��
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
			iArr[i][j] = (i + 1) * (j + 1);
		}
	}

	// ����ϴ� for��
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			printf("%d * %d = %d\n", (i+1), (j+1), iArr[i][j]);
		}
		printf("\n");
	}
}
