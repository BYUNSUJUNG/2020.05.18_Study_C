// Exam08.c
// 8. 1 ���� 100������ �� �߿��� Ȧ���� ���

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 ���� 100���� �ݺ�
		if (i % 2 == 1) // Ȧ���� ���
		{
			printf("%d ", i);
		}
	}

}