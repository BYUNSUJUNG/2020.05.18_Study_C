// Exam04.c

#include <stdio.h>

void main() 
{
	/*
		2�� for�� ��(*) ���
		*****
		*****
		*****
		*****
		*****
	*/


	printf("(1) �ݺ��� ���� �׳� ���\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");

	printf("(2) �ݺ��� 1�� ���, , 1�� ��½� * 5�� ��� \n");

	for (int i = 0; i < 5; i++)
	{
		printf("*****\n");
	}

	printf("(3) �ݺ��� 2�� ���, 1�� ��½� * 1�� ��� \n");
	for (int i = 0; i < 5; i++) // 1ȸ ���� = 1�� ���
	{
		for (int j = 0; j < 5; j++) // 1ȸ ���� = �� 1�� ���
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(4) �ݺ��� 1�� ���, 1�� ��½� * 1�� ��� \n");

	for (int i = 1; i <=25; i++) 
	{
		printf("*");
		if (i % 5 == 0)  // 5�� ���
		{
			printf("\n");
		}
	}
}