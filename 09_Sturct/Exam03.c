//Exam03.c

#include <stdio.h>


typedef struct _EMPLOYEE // _EMPLOYEE ������� ���� �̸��̶�, _�� �տ� ����(���ʾƴ�)
{
	// ��� ����
	char	szName[20];	// ��� �̸�
	int		iAge;		// ��� ����
	int		iSalary;	// ��� ����

} EMPLOYEE;


void main() 
{
	//					20		4		4	= 28
	EMPLOYEE sHan = { "�Ѽ���", 20, 2000000 };
	EMPLOYEE sArrEmp[5] = { 0, }; // 28byte * 5 
	EMPLOYEE sArrEmp2[5] = { { "�Ѽ���", 20, 2000000 }, { "�Ѽ���", 20, 2000000 } }; // 28byte * 5 

	// �迭 �ι�° ����� iAge ���� ����
	sArrEmp[1].iAge = 30;
	printf("�迭 �ι�° ����� iAge: %d\n", sArrEmp[1].iAge);

	// �Է¹޴� for��
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ����: ", (i + 1));
		scanf("%d", &sArrEmp[i].iAge);
	}

	printf("========================\n");

	// ����ϴ� for��
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ����: %d\n", (i + 1), sArrEmp[i].iAge);
	}
}