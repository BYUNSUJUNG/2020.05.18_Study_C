// Exam02.c

#include <stdio.h>

void main()
{
	//continue �� break
	int i = 0;

	// continue
	for (i = 0; i <= 2; i++) // i: 0,1,2 ���� 3�� �� ��
	{
		if (i == 1)
		{
			continue; // �� ���� ���������� ����!
			// ���๮�� �����ڴ�
		}
		printf("%d\n", i); // 0, 2 �� ��µ�
		// ���๮�� ������ ����
	}

	printf("======\n");

	for (i = 0; i <= 2; i++) // i: 0,1,2 ���� 3�� �� ��
	{
		if (i == 1)
		{
			break; // �ݺ��� ��ü�� �Ѿ
		}
		printf("%d\n", i); // 0�� ��µ�
	}
}