// Exam04.c

#include <stdio.h>

void main() 
{
	// if�� ��ø: if�� ���๮ �ȿ� �� �ٸ� if���� ���
	int iNum = 0;
	printf("���� �Է�: ");
	scanf("%d", &iNum);

	// �Էµ� ������ ��/0/�� �Ǻ�
	
	// ���׿����� ��ø�� ������ ����
	if (iNum > 0)
	{
		printf("���\n");
	}
	else
	{
		// ���ο� ����
		// main() �Լ����� ����� �� �ִ� ��� �ڵ带 �����ϰ� �ۼ��� �� �ִ�.
		if (iNum < 0)
		{
			printf("����\n");
		}
		else
		{
			printf("0�̴�\n");
		}
		
	}
}