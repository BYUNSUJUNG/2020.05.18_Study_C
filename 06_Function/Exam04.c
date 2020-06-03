//Exam04.c

#include <stdio.h>

/*
	���ȣ��	- ����Լ�(��ȿ����)
		>�Լ��� ���๮ �ȿ� '�ڱ��ڽ�'�� �Լ��� �ٽ� ȣ���ϴ� ��
		>�ݺ����� ������

		>�Լ��� ȣ��Ǹ� 'stack'�̶�� �޸𸮸� ����Ѵ�
		stack: First In Last out (FILO)
		queue: First In First out (FIFO)

		
		> ���������� ���� �ʹ� ���� �ݺ� ȣ��� -> ����
		(stack overflow ����)
		> �ݺ������� ������.

		> �Լ� ȣ��� stack�� ����ϴ� ������ ������ ������ ���ƿ;��� ��ġ�� ���
*/


// [����]
void fn(int iNum);

void main() 
{
	printf("main ���� \n");
	fn(3); // [ȣ��]
	printf("main �� \n");

	/*
		[���]
		main ����
		fn ����, iNum = 3
		fn ����, iNum = 2
		fn ����, iNum = 1
		fn ����, iNum = 0
		fn ��!, iNum = 0
		fn ��, iNum = 1
		fn ��, iNum = 2
		fn ��, iNum = 3
		main ��
	*/
}

// [����]
void fn(int iNum) {
	printf("fn ����, iNum = %d\n", iNum);

	if (iNum == 0) {  // iNum�� 0�� ���
		printf("fn ��!, iNum = %d\n", iNum);
		return; // �Լ� ����
	}

	fn(iNum - 1); // ���ȣ��
	printf("fn ��, iNum = %d\n", iNum);
}