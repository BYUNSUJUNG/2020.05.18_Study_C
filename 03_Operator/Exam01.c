// Exam01.c

#include <stdio.h>

void main() 
{
	// ���������(��Ģ����)
	int iNum1 = 10;
	int iNum2 = 3;

	// ������ ������ ��, �Ұ�ȣ�� �ϳ��� ������ �����ش�.
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));

	// ������ ������ �����ϸ�, �� ����� �����̱� ������ �Ҽ��������� ���� ������ �ʴ´�.
	// 10/3 --> 3.3333333...... ������ �Ѵ� ������ 3�� ���´�.
	// ������ �Ǽ��� �����ϸ�, �� ����� �Ǽ��̴�.
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));

	// ���ڿ� �ȿ��� %�� ����Ϸ��� %%
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));

}