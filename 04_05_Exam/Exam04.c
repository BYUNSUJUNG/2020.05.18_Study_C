// Exam04.c
// 4. 1 ���� 100���� ��� ���� ���� ���Ͽ� �� ���� ��� (while ���� ���)

#include <stdio.h>

void main()
{
	int iNum = 0;
	int iSum = 0;	

	while (1) { // ���� �ݺ�
		iNum++;
		iSum+=iNum;
		printf("%d ",iSum);
		if (iNum == 100) break; // iNum�� 100�� ��, break;
		
	}

}