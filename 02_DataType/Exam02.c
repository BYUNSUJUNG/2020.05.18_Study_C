// Exam02.c

#include <stdio.h>

void main() 
{
	// 2. �Ǽ��� (�Ҽ�)
	float fValue = 2.2f; // f�� ������ ������ double�ڷ���
	double dValue = -3.666666666666666;

	printf("fValue: %f\n", fValue); // �⺻ �Ҽ��� 6��° �ڸ����� ���
	printf("dValue: %f\n", dValue); // 7��° �ڸ������� �ݿø�

	printf("dValue: %.2f\n", dValue); // [%.m] : �Ҽ��� ����
}