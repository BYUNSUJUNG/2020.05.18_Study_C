// Exam15.c
//	15. ���ϴ� �������� �ܼ��� scanf�� �̿��Ͽ� �Է¹ް�
//	while���� ����Ͽ� ������ ���


#include <stdio.h>

void main()
{
	int iInput = 0; // ����� �Է� ����
	int iCnt = 0;
	printf("���ϴ� �������� �ܼ��� �Է����ּ���: ");
	scanf("%d", &iInput); // & �ʼ�

	while (iCnt!=9)
	{
		iCnt++;
		printf("%d X %d = %d\n",iInput,iCnt, (iInput*iCnt));
		
	}
}