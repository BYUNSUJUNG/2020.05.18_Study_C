/*
	2���� ���ڸ� �Է� �ް� ��Ģ����� ������ ����� ����ϼ���.

	[��°��]
	�� �� �Է� : 20 6
	20 + 6 = 26
	20 - 6 = 14
	20 * 6 = 120
	20 / 6 = 3
	20 % 6 = 2
*/

#include <stdio.h>

void main()
{
	// 1. 2���� ������ �ʿ� (����)
	int iNum1 = 0, iNum2 = 0;

	// 2. ��� ���� �����
	printf("�� �� �Է�: "); // \n�� ����

	// 3. �Է� ���� �����
	scanf("%d %d", &iNum1, &iNum2); // &�ʼ�! (�ּҰ�)
	
	// 4. �Է��� ���� ��� (printf)
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));
}






