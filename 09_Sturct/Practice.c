/*
	3���� �л� ������ �Է� �ް� ����ϱ�
		- �л� ����
			�̸�
			����
			��ȭ��ȣ (���ڿ� - ���ھƴ�)
			����1 ����
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

// [����]
//int InputStudent();
//void PrintStudent();

// ����ü ����
typedef struct _STUDENT
{
	/*
		�̸�
		����
		��ȭ��ȣ(���ڿ� - ���ھƴ�)
		����1 ����
		����2 ����
		����3 ����
	*/

	char	szName[20];			//  �л� �̸� 
	int		iAge;				//  �л� ���� 
	char	szPhoneNumber[20];	//	��ȭ��ȣ
	// int iGrade[3]
	int		iGrade1;			//  ����1 ����
	int		iGrade2;			//  ����2 ����
	int		iGrade3;			//  ����3 ����
} STUDENT;

// ������ ����
enum GRADE {
	GRADE1 = 1, 
	GRADE2,
	GRADE3,
	GRADE4
}; 

void main()
{
	int iGrade = 0;
	double dAvg = 0;


	STUDENT st1 = { 0, };
	for (int i = 0; i < 3; i++)
	{
		printf("---------------------------------------\n");
		printf("�̸�: ");
		scanf("%s", &st1.szName);
		printf("����: ");
		scanf("%d", &st1.iAge);
		printf("��ȣ: ");
		scanf("%s", &st1.szPhoneNumber);
		printf("����1: ");
		scanf("%d", &st1.iGrade1);
		printf("����2: ");
		scanf("%d", &st1.iGrade2);
		printf("����3: ");
		scanf("%d", &st1.iGrade3);

		
		iGrade = st1.iGrade1 + st1.iGrade2 + st1.iGrade3;
		dAvg = (iGrade / 3.0);

		printf("[%s �л��� ����]\n", st1.szName);
		printf("����: %d\n", st1.iAge);
		printf("��ȣ: %s\n", st1.szPhoneNumber);

		
		printf("����1: %d\n", st1.iGrade1);
		printf("����2: %d\n", st1.iGrade2);
		printf("����3: %d\n", st1.iGrade3);

		printf("����: %d\n", iGrade);
		printf("���: %.1f\n", dAvg);
		printf("���:"); 

		// ��� ���� 90�� �̻� 1, 80�� �̻� 2, 70�� �̻� 3, ������ 4
		if (dAvg >= 90)
		{
			printf(GRADE1+"���");	// 1
		}
		else if (dAvg >= 80)
		{
			printf(GRADE2+"���"); // 2
		}
		else if (dAvg >= 70)
		{
			printf(GRADE3+"���"); // 3
		}
		else
		{
			printf(GRADE4); // 4
		}

	}
}

/*
// [����]

//�л� ���� �Է� �޴� �Լ�
int InputStudent()
{
	printf("�̸�: ");
	scanf("%s", &st1.szName);
	printf("����: ");
	scanf("%d", &st1.iAge);
	printf("��ȣ: ");
	scanf("%s", &st1.szPhoneNumber);
	printf("����1: ");
	scanf("%f", &st1.dGrade1);
	printf("����2: ");
	scanf("%f", &st1.dGrade2);
	printf("����3: ");
	scanf("%f", &st1.dGrade3);

	return st1.szName, st1.iAge, st1.szPhoneNumber, st1.dGrade1, st1.dGrade2, st1.dGrade3;
}
//�л� ���� ����ϴ� �Լ� 
void PrintStudent(char szName, int	iAge, char szPhoneNumber, 
	double	dGrade1, double	dGrade2, double	dGrade3)
{

	double dGrade = 0;
	double dAvg = 0;

	dGrade = dGrade1 + dGrade2 + dGrade3;
	dAvg = dGrade / 3.0;

	printf("[%s �л��� ����]\n", szName);
	printf("����: %d\n",iAge);
	printf("��ȣ: %s\n", szPhoneNumber);

	printf("����: %d\n", dGrade);
	printf("���: %d\n", dAvg);
	printf("���:");
	
	// ��� ���� 90�� �̻� 1, 80�� �̻� 2, 70�� �̻� 3, ������ 4
	if (dAvg >= 90) 
	{
		printf(GRADE1);	// 1
	}
	else if (dAvg >= 80)
	{
		printf(GRADE2); // 2
	}
	else if (dAvg >= 70)
	{
		printf(GRADE3); // 3
	}
	else 
	{
		printf(GRADE4); // 4
	}

}

*/