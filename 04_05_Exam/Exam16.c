// Exam16.c
//	16. ���ϴ� �������� �ܼ��� �Է¹��� ��
//	while ���� ����Ͽ� �Ųٷ� ����ϴ� ���α׷��� �ۼ�.


#include <stdio.h>

void main()
{
	int iInput = 0; // ����� �Է� ����
	int iCnt = 10;
	printf("���ϴ� �������� �ܼ��� �Է����ּ���: ");
	scanf("%d", &iInput); // & �ʼ�

	while (iCnt != 1)
	{
		iCnt--;
		printf("%d X %d = %d\n", iInput, iCnt, (iInput*iCnt));

	}
}