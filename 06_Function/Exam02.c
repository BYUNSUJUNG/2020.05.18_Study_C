// Exam02.c

/*	
	�� ���� ��Ģ���� �Լ� 
	����, ����, ȣ��
*/

#include <stdio.h>

// [����]
int add(int iNum1, int iNum2); // ���ϱ�

int sub(int iNum1, int iNum2); // ����

int mul(int iNum1, int iNum2); // ���ϱ�

int div(int iNum1, int iNum2); // ������


void main() 
{
	int iNum1 = 0; // ù��° ��
	int iNum2 = 0; // �ι�° ��
	printf("��Ģ������ �� �� ���� �Է�: ");
	scanf("%d %d", &iNum1, &iNum2);

	// [ȣ��]
	printf("%d + %d = %d\n", iNum1, iNum2, add(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, sub(iNum1, iNum2));
	printf("%d x %d = %d\n", iNum1, iNum2, mul(iNum1, iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, div(iNum1, iNum2));

}

// [����]
int add(int iNum1, int iNum2) // ���ϱ�
{
	return (iNum1 + iNum2);
}

int sub(int iNum1, int iNum2) // ����
{
	return (iNum1 - iNum2);
}

int mul(int iNum1, int iNum2) // ���ϱ�
{
	return (iNum1 * iNum2);
}

int div(int iNum1, int iNum2) // ������
{
	return (iNum1 / iNum2);
}