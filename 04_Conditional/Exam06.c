// Exam06.c

#include <stdio.h>

void main()
{
	/*
		switch ~ case��
			�ϳ��� �������� ���� ����� ���� ó��
			1. ���ǽ��� ����� '����'�� ��� (���갡��)
			2. case���� ���� '���� ���'�� �����ϸ�, �ߺ� �Ұ�

			-break
				> switch���� ����������. (Ż��)
				> case�� �����ϰ� �����ߴµ� break�� ������
					�� �Ʒ��ִ� ��� case�� ������ ������ �����ϰ� �ټ���
						
	*/

	int iNum = 0;

	printf("=====================\n");
	printf("����ִ� ���α׷���~ \n");
	printf("1. C��� \n");
	printf("2. JAVA \n");
	printf("3. PYTHON \n");
	printf("4. C++ \n");
	printf("=====================\n");

	printf("������ �� �Է��ϼ���: ");
	scan("%d", &iNum);

	// ���ǽ� (���갡��)
	switch (iNum)
	{
	case 1: // iNum�� 1�̸�, if(iNum == 1)
		printf("������ ���� C����Դϴ�.\n");
		break;
	case 2:
		printf("������ ���� JAVA�Դϴ�.\n");
		break;
	case 3:
		printf("������ ���� PYTHON�Դϴ�.\n");
		break;
	case 4:
		printf("������ ���� C++�Դϴ�.\n");
		break;
	case 5 :
	default:
		printf("�߸� �Է��Ͽ����ϴ�\n");
		break;
	}
}