
/*	� �л��� Ű�� �ƹ����� ��Ӵ��� Ű�� ��պ��� 5cm ũ��
	�����Դ� �ƹ����� ��Ӵ��� �������� ��պ��� 4.5kg �����ٰ� �Ѵ�.
	Ű�� �����Ը� ��������� ���� ����ü�� �����ϰ� 
	�ƹ����� ��Ӵ��� Ű�� �����Ը� �Է¹޾� 
	�л��� Ű�� �����Ը� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	(Ű�� �����̸� �����ϰ� �����Դ� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ��Ÿ����)

	�Է� ��)
	�ƹ����� Ű�� ������? 175 68.8
	��Ӵ��� Ű�� ������? 166 56.4

	��� ��)
	�л��� Ű : 175cm
	�л��� ������ : 58.1kg
*/

#include <stdio.h>

typedef struct _FATHER
{
	double dHeight;
	double dWeight;

} FATHER;

typedef struct _MOTHER
{
	double dHeight;
	double dWeight;

} MOTHER;

typedef struct _STUDENT
{
	double dHeight;
	double dWeight;

} STUDENT;


void main()
{
	FATHER F = { 0, };
	MOTHER M = { 0, };
	STUDENT S = { 0, };

	double dHAvg = 0; // �ƹ����� ��Ӵ��� Ű ���
	double dWAvg = 0; // �ƹ����� ��Ӵ��� ������ ���

	printf("�ƹ����� Ű�� ������?");
	scanf("%f %f", &F.dHeight, &F.dWeight);

	printf("��Ӵ��� Ű�� ������?");
	scanf("%f %f", &M.dHeight, &M.dWeight);

	dHAvg = (F.dHeight + M.dHeight) / 2.0;
	dWAvg = (F.dWeight + M.dWeight) / 2.0;

	printf("�л��� Ű : %.0f\n", dHAvg+5);
	printf("�л��� ������ : %.1f\n", dWAvg-4.5);


}