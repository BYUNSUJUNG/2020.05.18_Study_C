// Exam06.c
// 6. scanf�� ����Ͽ� ������ �ΰ� �Է¹ް� �� �� ���� ������
//	�� �� ������ ��� ���� ���� ���Ͽ� ���
#include <stdio.h>

void main()
{
	int iInput1 = 0;
	int iInput2 = 0;
	int iSum = 0;
	int iStart = 0;
	int iEnd = 0;

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
		iSum += i;
	}
	printf("�� �� ������ ��� ���� ��: %d\n", iSum);



	

}