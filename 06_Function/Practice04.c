/*
	�Ҽ� ���ϱ�

	1���� �Է¹��� �� ���� �Ҽ� (Prime Number) �� ����ϱ�!
		* 1�� �Ҽ��� �ƴմϴ�.

	�Լ�
		��� : �Ű������� ���޵� ���ڰ� �Ҽ����� �Ǻ� �� 1/0 ���� (��/����)
		�Լ��� : IsPrimeNumber
	
		> for�� �ȿ��� �Լ��� ȣ���� ��, �� ����� ���� �ش� ���ڸ� ����Ѵ�.

	[��°��]
	���ڸ� �Է��ϼ��� : 20
	��� : 2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int IsPrimeNumber(int iNum);

void main()
{
	int iNum = 0;
	int i = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &iNum);
	printf("��� : ");
	for (i = 1; i <= iNum; i++)
	{
		if (IsPrimeNumber(i)==1) { // return ���� 1�� ���̸� �Ҽ�
			printf("%d", i);
		}
	}
}

int IsPrimeNumber(int iNum)
{
	int iCnt = 0; // 1�� ��� �Ҽ�

	// �Ҽ��� ��� 1 return
	for (int i = 1; i <= iNum; i++)
	{
		if (iNum % i == 0) iCnt++;
	}
	if (iCnt == 1) // �Ҽ�
	{
		return 1;
	}
	else // �Ҽ��� �ƴ� ��
	{
		return 0;
	}

}