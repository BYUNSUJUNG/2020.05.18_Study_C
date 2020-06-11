//Exam04.c

/*
	������(enumeration)
		������ �̸� �����س��� �ڷ���
		������ ��� �뵵�� ����
		�⺻ �� 0 (���� �������� �ʾ��� ��)
		���� �������� ������ ���� ���ں��� 1����
		���ϴ� ������ ��� ��ġ�� ���԰���
		�׸��̸� �ߺ��Ұ�
*/

#include <stdio.h>

		//  0   1   2   3   4
enum ENUM1 {A1, B1, C1, D1, E1};
		//   0	-200		-199	1	2	
enum ENUM2 { A2, B2 = -200, C2, D2 = 1, E2 };

// ���� �߿��ϱ� ���ٴ� � �������� ��Ȯ�� �˾ƾ� �� ��

enum _LANGUAGE {
	LANGUAGE_C = 1,
	LANGUAGE_JAVA,
	LANGUAGE_PYTHON
}; // �ʱⰪ�� �����ϰ� �� �׸��� ����

enum _ERR_CODE
{
	ERR_SUCCESS = 1,
	ERR_FAIL,
	ERR_FILE_SIZE,
	ERR_MEMORY,
	ERR_DISK
};

void main() 
{

	/*
		int iNum = A1;
		printf("iNum = %d\n", iNum);	// 0
		printf("%d %d %d %d %d\n", A1, B1, C1, D1, E1); //  0   1   2   3   4
	*/
	int iNum = A1;
	printf("====================\n");
	printf("[����ִ� ���α׷���]\n");
	printf("1. C���\n");
	printf("2. JAVA\n");
	printf("3. PYTHON\n");
	printf("====================\n");

	printf("������ �� �Է��ϼ���: ");
	scanf("%d", &iNum);

	// case 1,2,3 �������� ������ �ǹ��ϴ��� �ڵ带 �ٽ� �����Ѵ�.

	switch (iNum) 
	{
	case LANGUAGE_C: // ������ �ƴ� ����̱⿡ ���� �� �ִ�
		printf("C��� ����");
		break;
	case LANGUAGE_JAVA:
		printf("JAVA ����");
		break;
	case LANGUAGE_PYTHON:
		printf("PYTHON ����");
		break;
	default:
		printf("");
	}
}