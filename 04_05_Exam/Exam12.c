// Exam12.c
//	12. 1 ���� 100������ �� �߿��� 3�� ����� ���� ���ϰ� ���

#include <stdio.h>

void main()
{
	int iSum = 0;

	for (int i = 1; i < 101; i++) { // 1 ���� 100���� �ݺ�
		if (i % 3 == 0) // 3�� ����� ��
		{
			iSum+=i;	
		}
	}
	printf("3�� ����� ���� %d�Դϴ�\n", iSum);
}


