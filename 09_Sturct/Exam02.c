// Exam02.c

/*
	�л� 3���� �̸�, ����, ����, ���� ������ ����ü�� ����
	3������ ��հ� ������ ����϶�

*/
#include <stdio.h>

typedef struct _SCORE
{
	int iMScore;	// ����
	int iEScore;	// ����
	int iKScore;	// ����

} SCORE;

typedef struct _STUDENT
{
	char sName[20];
	SCORE sScore; // ����, ����, ���� ����

} STUDENT;

void main() 
{
	int iScore = 0; // ������
	int iAvg = 0; // ���


	STUDENT s1 = { "������", 99,99,99 };	// ù��° �л�
	STUDENT s2 = { "������", 99,99,99}; // �ι�° �л�
	STUDENT s3 = { "���ٻ�", 99,99,99 }; // ����° �л�

	// ù��° �л�
	iScore = s1.sScore.iMScore + s1.sScore.iEScore + s1.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("�̸�: %s\n", s1.sName);
	printf("����: %d\n", iScore);
	printf("���: %.2f\n", iAvg);

	// �ι�° �л�
	iScore = s2.sScore.iMScore + s2.sScore.iEScore + s2.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("�̸�: %s\n", s2.sName); 
	printf("����: %d\n", iScore);
	printf("���: %.2f\n", iAvg);

	// ����° �л�
	iScore = s3.sScore.iMScore + s3.sScore.iEScore + s3.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("�̸�: %s\n", s3.sName); 
	printf("����: %d\n", iScore);
	printf("���: %.2f\n", iAvg);
}