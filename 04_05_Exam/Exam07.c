// Exam07.c
// 7. 1 ���� 100������ �� �߿��� ¦���� ���

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 ���� 100���� �ݺ�
		if (i % 2 == 0) // ¦���� ���
		{
			printf("%d ",i);
		}
	}

}