// Exam09.c
// 9. 1 ���� 500������ �� �߿��� ¦���� ������ Ȧ���� ������ ���Ͽ� �� ������ ���

#include <stdio.h>

void main()
{
	int iEvenCnt = 0; // ¦��
	int ioddCnt = 0; // Ȧ��

	for (int i = 1; i < 501; i++) { // 1 ���� 500���� �ݺ�
		if (i % 2 == 0) // ¦��
		{
			iEvenCnt++;
		}
		else // i % 2 == 1, Ȧ��
		{
			ioddCnt++;
		}
	}
	printf("¦���� ������ %d��, Ȧ���� ������ %d�� �Դϴ�.\n", iEvenCnt, ioddCnt);

}
