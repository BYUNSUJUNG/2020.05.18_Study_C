// Exam01.c

#include <stdio.h>

void main()
{
	// if�� ���
	int iValue = 0;

	// 1��
	if (iValue == 0) 
	{
		printf("1. iValue == 0 \n");	// ��µ�
	}

	// 2��
	if (iValue != 0)
	{
		printf("2. iValue != 0 \n");	// ��¾ȵ�
	}

	// 3��
	if (!(iValue == 0))
	{
		printf("3. !(iValue == 0) \n");	// ��¾ȵ�
	}

	// 4��
	if (!(iValue != 0))
	{
		printf("4. !(iValue != 0) \n");	// ��µ�
	}

	printf("\n\n");

	// 5�� : ���๮�� �ڵ尡 1���̸�, {} ���� ����
	if (iValue == 0)
		printf("5. iValue == 0\n"); 	// ��µ�

	// 6�� : ���๮�� �ڵ尡 1���̸�, ���� �ٿ� ��� ����
	if (iValue != 0) printf("6. iValue != 0\n"); // ��¾ȵ�

	// 7��
	if (!(iValue == 0))
		printf("7. !(iValue == 0)\n");  // ��¾ȵ�, 7���� ���๮
		printf("���� 7���� ���๮\n"); // ��µ�

}