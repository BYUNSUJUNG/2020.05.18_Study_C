// Exam11.c
//	11. 1 ���� 100������ �� �߿��� 3�� ����� ����
//	����ڰ� �Է��� ���ڸ�ŭ ���(ex �Է� : 5 -> 3, 6, 9, 12, 15 ���)

#include <stdio.h>

void main()
{
	int iCnt = 0;
	int iInput = 0; // ����� �Է� ����

	printf("����ϰ� ���� ������ �Է����ּ���: ");
	scanf("%d", &iInput);
	for (int i = 1; i < 101; i++) { // 1 ���� 100���� �ݺ�
		if (i % 3 == 0) // 3�� ����� ��
		{
			printf("%d ", i);
			iCnt++;
			if(iCnt == iInput) break;
		}
	}

}