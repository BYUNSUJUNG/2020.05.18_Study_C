
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

	double f_dH = 0;
	double f_dW = 0;
	double m_dH;
	double m_dW;

	double dHAvg = 0; // �ƹ����� ��Ӵ��� Ű ���
	double dWAvg = 0; // �ƹ����� ��Ӵ��� ������ ���

	printf("�ƹ����� Ű�� ������?");
	scanf("%f %f", &f_dH, &f_dH);

	printf("%d\n ", f_dH);
	printf("%d\n ", f_dW);
	printf("==============");
	F.dHeight = f_dH;
	F.dWeight = f_dW;
	printf("%f\n", F.dHeight);
	printf("%f\n",F.dWeight);

	printf("��Ӵ��� Ű�� ������?");
	scanf("%f %f", &m_dH, &m_dW);
	M.dHeight = m_dH;
	M.dWeight = m_dW;

	dHAvg = (F.dHeight + M.dHeight) / 2.0;
	dWAvg = (F.dWeight + M.dWeight) / 2.0;

	printf("�л��� Ű : %.0f\n", dHAvg+5);
	printf("�л��� ������ : %.1f\n", dWAvg-4.5);


}