// Exam18.c
// 18. scanf�� ����Ͽ� ������ �ΰ� �Է¹ް�
//	�μ� ����(�� �� ����)�� 5�� ����� ������ ��� ���� ����ϰ�
//	5�� ����� ������ ��� ���� ���� ����϶�.

#include <stdio.h>

void main()
{
	int iInput1 = 0; // ����� �Է� ����
	int iInput2 = 0; // ����� �Է� ����
	int iStart = 0; // ����, ���� ��
	int iEnd = 0; // ��, ū ��
	int iSum = 0;

	printf("�� ���� �Է����ּ���: ");
	scanf("%d %d", &iInput1, &iInput2); // & �ʼ�

	// �� �� �߿��� ���� ���� iStart, ū ���� iEnd 

	if (iInput1 < iInput2) // iInput1 < iInput2
	{
		iStart = iInput1;
		iEnd = iInput2;
	}
	else // iInput1 >= iInput2
	{
		iStart = iInput2;
		iEnd = iInput1;
	}

	for (int i = iStart; i <= iEnd; i++)
	{
		if (i % 5 != 0)
		{
			iSum += i;  // 5�� ��� ����
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("�� �� ������ 5�� ����� ������ ��� ���� ��: %d\n", iSum);

}
	