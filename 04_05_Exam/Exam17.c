// Exam17.c
// 17. ����ڰ� - 1�� �Է��Ҷ����� �ݺ������� ���� �Է� �ް�,
//	-1�� �Է��ϸ� ������� �Էµ� ¦���� ������ Ȧ���� ������ ����ϰ�,
//	�Էµ� ��� ���� ���� ����ϴ� ���α׷� �ۼ�.

#include <stdio.h>

void main()
{
	int iInput = 0; // ����� �Է� ����
	int iEvenCnt = 0; // ¦�� ����
	int ioddCnt = 0; // Ȧ�� ����
	int iSum = 0; // ��

	while (iInput!=-1) 
	{
		printf("���� �Է����ּ��� : ");
		scanf("%d", &iInput); // & �ʼ�

		if (iInput % 2 == 0) // ¦��
		{
			iEvenCnt++;
		}
		else // iInput % 2 == 1, Ȧ��
		{
			ioddCnt++;
		}
		iSum += iInput; // �Էµ� ��� ���� ����
	}

	printf("������� �Էµ� ¦���� ����: %d, Ȧ���� ����: %d\n", iEvenCnt, ioddCnt);
	printf("�Էµ� ��� ���� ��: %d\n",iSum);

}