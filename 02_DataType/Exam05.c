// Exam05.c

#include <stdio.h>

void main() 
{
	// 5. sizeof() ->  �ڷ��� ũ�⸦ Ȯ���ϴ� '������'
	//	> �ڷ��� ũ�⸦ byte������ �˷���
	//	> sizeof()�� '����'�� ��ȯ
	char cNum = 10;
	int iNum = 20;
	float fNum = 1.1f;
	double dNum = 2.2;
	
// (1) char cNum = 10; 
// char�� ������� 1

	// �ڷ��������� ������ Ȯ��
	int iCharSize = sizeof(char); // 1
	printf("iCharSize = %d\n",iCharSize);

	// ���������� ������ Ȯ��
	printf("cNum�� ũ�� = %d\n", sizeof(cNum));

	printf("======================================\n");

// (2) int iNum = 20;
// int�� ������� 4

	// ���� ������ ������ Ȯ��
	printf("10�� ũ�� = %d\n", sizeof(10));

	// �ڷ��������� ������ Ȯ��
	printf("int = %d\n", sizeof(int));

	// ���������� ������ Ȯ��
	printf("iNum�� ũ�� = %d\n", sizeof(iNum));

	printf("======================================\n");

// (3) float fNum = 1.1f;
// float�� ������� 4

	// ���� ������ ������ Ȯ��
	printf("1.1f�� ũ�� = %d\n", sizeof(1.1f));

	// �ڷ��������� ������ Ȯ��
	printf("float = %d\n", sizeof(float));

	printf("======================================\n");

// (4) double dNum = 2.2;
// double�� ������� 8

	// ���� ������ ������ Ȯ��
	printf("2.2�� ũ�� = %d\n", sizeof(2.2));

	// �ڷ��������� ������ Ȯ��
	printf("double = %d\n", sizeof(double));

	printf("======================================\n");

// �츮�� ���� �����ϴ� 5 + 3.3�� ��� 8.3�� %f�� ���ڱ���
// �����δ� ���� ������ ��������� ��ó��
// 5(int 4byte), 3.3(double 8byte)��
// �ӽ÷� ��������� 8.3�� ������ ������ ����Ǿ��ٰ�
// %f�� ���ǰ� ��������.

	printf("%f\n", (5 + 3.3));

}