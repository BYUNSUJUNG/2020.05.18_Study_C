/*
	- �� ���� ������ �Է� �޾� ū ������ ���� ���� �� ��� ���� ���
		> �Լ� : �Ű������� 2���� ������ �ް�, ����Ͽ� ��� �� ��ȯ

	[��°��]
	�� �� �Է� : 1 20
	��� : 19 
*/

#include <stdio.h>

// [����]
int sub(iInput1, iInput2);

void main()
{
	int iInput1 = 0;
	int iInput2 = 0;

	printf("��Ģ������ �� �� ���� �Է�: ");
	scanf("%d %d", &iInput1, &iInput2);
	// [ȣ��]
	printf("��� : %d\n",sub(iInput1,iInput2));

}

// [����]
int sub(iInput1, iInput2)
{
	if (iInput1 > iInput2)
	{
		return(iInput1 - iInput2);
	}
	else // iInput1 <= iInput2
	{
		return(iInput2 - iInput1);
	}
}



