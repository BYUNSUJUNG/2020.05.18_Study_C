//Exam04.c

#include <stdio.h>

void main() 
{
	// 2���� ���� �迭�� ���� �̸� �Է¹ޱ�
	char szArrAnimal[3][20] = { 0, };

	// 1�����̴� 2�����̴� �迭���� �ε����� ����Ͽ� ��ҿ� �����Ѵ�

	int i = 0;
	int iArrLen = 0;

	//			20byte * 3		/ 20byte		= 3 (���� ����)
	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]);

	printf("���� �̸�: \n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%�� ����: ", (i + 1));
		gets(szArrAnimal[i]); // �� �� ��ü�� �ǹ� = 1���� ���� �迭�� ����
	}

	for  (i = 0; i < iArrLen; i++)
	{
		printf("%d�� ������ %s\n",(i+1),szArrAnimal[i]);
	}
}