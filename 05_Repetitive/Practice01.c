/*
	1���� �Է¹��� ������ ¦������ ���� ���ϱ� 

	[��°��]
	���ڸ� �Է��ϼ��� : 10
	1~10���� ¦���� ���� 30�Դϴ�.
*/

#include <stdio.h>

void main()
{
	int iNum = 0;
	int iSum = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &iNum);

	for (int i = 1; i <= iNum ; i++)
	{
		if (i % 2 == 0) 
		{
			iSum += i;
		}
	}
	printf("1~%d���� ¦���� ���� %d�Դϴ�.\n", iNum, iSum);
}