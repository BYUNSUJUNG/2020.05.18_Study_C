//Exam04.c	

#include <stdio.h>

void main() 
{
	/*
		�� ������
			- ���ǹ�, �ݺ����� '���ǽ�'���� ���
			- ���Ǹ��� : ���� 1��ȯ (��) --> true
			- ���ǺҸ��� : ���� 0��ȯ (����) --> false
				> c������ 0�� �ƴ� ��� ���� '��'���� ����

			1. � ��: �� ���� ������ �ٸ��� �� (== !=)
			2. ��� ��: �� ���� ũ�� �� (	>	<	>=	<=)
	*/			

	int iNum1 = 5;
	int iNum2 = 5;

	// 1. ���
	printf("iNum1 == iNum2 : %d\n", (iNum1 == iNum2)); // 1 --> true
	printf("iNum1 != iNum2 : %d\n", (iNum1 != iNum2)); // 0 --> false

	// 2. ��Һ�
	printf("iNum1 > iNum2 : %d\n", (iNum1 > iNum2)); // 0 --> false
	printf("iNum1 < iNum2 : %d\n", (iNum1 < iNum2)); // 0 --> false

	printf("iNum1 >= iNum2 : %d\n", (iNum1 >= iNum2)); // 1 --> true
	printf("iNum1 <= iNum2 : %d\n", (iNum1 <= iNum2)); // 1 --> true

}