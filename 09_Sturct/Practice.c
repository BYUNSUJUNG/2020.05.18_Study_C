/*
	3���� �л� ������ �Է� �ް� ����ϱ�
		- �л� ����
			�̸�			(char�迭)
			����			(int)
			��ȭ��ȣ (���ڿ� - ���ھƴ�)  (char�迭)
			����1 ����	(int �迭)
			����2 ����
			����3 ����
		- ���
			> ��� ���� 90�� �̻� 1, 80�� �̻� 2, 70�� �̻� 3, ������ 4
		- �л� ���� �Է� �޴� �Լ� : InputStudent()
		- �л� ���� ����ϴ� �Լ� : PrintStudent()
		- ������ (enum) ��� -> GRADE = { GRADE1, GRADE2, ...

[��°��]
	[1�� �л� ���� �Է�]
	�̸� : ȫ�浿
	���� : 20
	��ȣ : 010-2233-4455
	����1 : 100
	����2 : 90
	����3 : 91
	...

	[ȫ�浿 �л��� ����]
	���� : 20��
	��ȣ : 010-2233-4455
	���� : 281
	��� : 93.7
	��� : 1���
*/

#include <stdio.h>

// ������
enum GRADE { GRADE1=1, GRADE2, GRADE3, GRADE4 };

// ����ü ���� 
typedef struct _STUDENT
{
	char szName[20]; // �̸�
	int iAge; // ����
	char szPhone[20]; // ����ȣ
	int iScore[3]; // ����

}STUDENT;


// [����]
void InputStudent(STUDENT * pStudent, int iNum);
void PrintStudent(STUDENT * pStudent, int iNum);

void main()
{
	STUDENT sKim[3] = { 0, };
	int i = 0;

	// �Է� �޴� for��
	for (i = 0; i < 3; i++)
	{
		printf("[%d�� �л� ���� �Է�]\n", (i + 1));
		InputStudent(&sKim[i], i);
	}

	// ��� �ϴ� for��
	for (i = 0; i < 3; i++)
	{
		PrintStudent(sKim, i);
	}
}
// [����]

void InputStudent(STUDENT * pStudent, int iNum)
{
	// 1. �̸� �Է�
	printf("�̸� : ");
	scanf("%s", &pStudent->szName);
	// 2. ���� �Է� 
	printf("���� : ");
	scanf("%d", &pStudent->iAge);
	// 3. ��ȭ��ȣ 
	printf("��ȭ��ȣ : ");
	scanf("%s", &pStudent->szPhone);
	// 4. ����1
	printf("����1 : ");
	scanf("%d", &pStudent->iScore[0]);
	// 5. ����2
	printf("����2 : ");
	scanf("%d", &pStudent->iScore[1]);
	// 6. ����3
	printf("����3 : ");
	scanf("%d", &pStudent->iScore[2]);
}

void PrintStudent(STUDENT * pStudent, int iNum)
{
	int iTotal = 0; // ���� ������ ���� 
	int iAvg = 0; // ��� ������ �������·� �����ϴ� ���� 

	iTotal += pStudent[iNum].iScore[0] + pStudent[iNum].iScore[1] + pStudent[iNum].iScore[2];
	printf("�̸� : %s\n", pStudent[iNum].szName);
	printf("���� : %d��\n", pStudent[iNum].iAge);
	printf("���� : %d��\n", iTotal);
	printf("��� : %.1f��\n", iTotal / 3.0);

	iAvg = iTotal / 3;

	switch (iAvg / 10)
	{
	case 10:
	case 9:
		printf("%d���\n", GRADE1);
		break;
	case 8:
		printf("%d���\n", GRADE2);
		break;
	case 7:
		printf("%d���\n", GRADE3);
		break;
	default:
		printf("%d���\n", GRADE4);
	}

}


