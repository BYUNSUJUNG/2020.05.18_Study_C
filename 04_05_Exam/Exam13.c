// Exam13.c
//	13. ����ڿ��� ������ �Է¹ް�, 
//	0 ~ 100 ���� �Է��̸� Error ���,
//	90�� �̻��̶�� ȭ�鿡 'A' ���,
//	80�� �̻��̶�� 'B' ���,
//	70�� �̻��̶�� 'C' ���, 
//	70�� �̸��̶�� 'D' ��� (if������)

#include <stdio.h>

void main()
{
	int iInput = 0; // ����� �Է� ����
	printf("������ �Է����ּ���: ");
	scanf("%d", &iInput); // & �ʼ�

	if (iInput<=100 && iInput >=90) // 100�� ���� 90�� �̻�
	{
		printf("A\n");
	}
	else if (iInput < 90 && iInput >= 80) // 90�� �̸� 80�� �̻�
	{
		printf("B\n");
	}
	else if (iInput < 80 && iInput >= 70) // 80�� �̸� 70�� �̻�
	{
		printf("C\n");
	}
	else if (iInput < 70) // 70�� �̸� 
	{
		printf("D\n");
	}
	else // 0 ~ 100 ��
	{
		printf("Error\n");
	}
}
