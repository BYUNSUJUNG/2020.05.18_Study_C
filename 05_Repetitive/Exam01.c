// Exam01.c

#include <stdio.h>

void main() 
{
	//  for���� �̿��Ͽ� 1~10���� �� ���ϱ�
	int iSum = 0; // ���� ������ ����
	int i = 0; // 1~10

	//			i < 11
	for  (i = 0; i <= 10; i++)
	{
		iSum += i;
		/*
			iSum = iSum + i;   
					0	  1		iSum = 1;
					1	  2		iSum = 3 (1 + 2);
					3	  3		iSum = 6 (1 + 2 + 3);

						...
					45	  10	iSum = 55 (1 + 2 + 3 ...... + 10);
			
		*/
	}
	printf("1�������� 10������ �հ��: %d\n", iSum);
}