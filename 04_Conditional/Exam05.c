// Exam05.c

#include <stdio.h>

void main() 
{
	// �Էµ� ������ ���� ���� ���

	int iScore = 0;
	printf("���� �Է�: ");
	scanf("%d", &iScore);

	/*
		100		: (����)A����
		90~99	: A����
		80~89	: B����
		70~79	: C����
		70���̸�	: F����
		0		: (����)F����

		������ if�� ���
		��, 100���� 0���� if�� ��ø ���
	*/

	if (iScore >= 90 && iScore <=100)
	{ 
		if (iScore == 100) 
		{
			printf("(����)A����\n");
		} 
		else 
		{
			printf("A����\n");
		}

		/*
			if (iScore == 100)
			{
				printf("(����)");
			} 
			printf("A����\n");
		
		*/
	}
	else if (iScore >= 80)
	{
		printf("B����\n");
	}
	else if (iScore >= 70)
	{
		printf("C����\n");
	} 
	else
	{ // (iScore < 70)
		if (iScore == 0)
		{
			printf("(����)F����\n");
		}
		else
		{
			printf("F����\n");
		}
	}
}