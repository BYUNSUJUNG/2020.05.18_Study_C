/*
	3���� ������ �Է¹޾� ��� ������ 60�� �̻��̸� �հ�, �ƴϸ� ���հ�

	[��°��]
	������ ���ʴ�� �Է����ּ��� : 60 60 60
	�հ�
*/

#include <stdio.h>

void main()
{
	// ���� 3�� ���� ����
	int iScore1 = 0;
	int iScore2 = 0;
	int iScore3 = 0;

	float iAVG_Score = 0; // ���

	// ��� ���� �����
	printf("������ ���ʴ�� �Է����ּ��� : ");

	// �Է¹ޱ�
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);

	// �� ���
	iAVG_Score = (iScore1 + iScore2 + iScore3) / (float)3;

	// ���ǹ�
	if (iAVG_Score >= 60 && iAVG_Score <= 100) // 60�� �̻� �հ�
	{
		printf("�հ�\n");
	}
	else // 60 �̸� ���հ�
	{
		printf("���հ�\n");
	}

	
}