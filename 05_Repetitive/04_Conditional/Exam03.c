// Exam03.c

#include <stdio.h>

void main() 
{
	// if, else if, else ���

	int iNum = 0;
	printf("���� �Է�: ");
	scanf("%d", &iNum);

	// �Էµ� ������ ��/0/�� �Ǻ�
	if (iNum > 0)
	{
		printf("���\n");
	}
	else if (iNum < 0) 
	{
		printf("����\n");
	}
	/*
	else if (iNum == 0) // ����� else�� �����ϳ�, 
						// cpu�� ����Ͽ� �񱳿��� ������ �ؾ��Ѵ�. 
	{
		printf("0�̴�\n");
	}
	*/
	else 
	{
		printf("0�̴�\n");
	}
}