// Exam14.c
//	14. ����ڿ��� ������ �Է¹ް�,
//	0 ~ 100 ���� �Է��̸� Error ���,
//	90�� �̻��̶�� ȭ�鿡 'A' ���,
//	80�� �̻��̶�� 'B' ���,
//	70�� �̻��̶�� 'C' ���, 
//	70�� �̸��̶�� 'D' ��� (switch������)

#include <stdio.h>

void main()
{
	int iInput = 0; // ����� �Է� ����
	printf("������ �Է����ּ���: ");
	scanf("%d", &iInput); // & �ʼ�


	switch(iInput / 10)
	{
		case 10:
		case 9: printf("A\n"); break;	// 100�� ���� 90�� �̻�
		case 8: printf("B\n"); break;	// 80�� �̻�
		case 7: printf("C\n"); break;	// 70�� �̻�
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:	printf("D\n"); break; // 70�� �̸� 0�� �̻�
		default: printf("Error\n"); break; // 0 ~ 100 ��

	}
}