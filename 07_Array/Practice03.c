/*
	�Ǻ���ġ ���� fibo
		�Է¹��� Ƚ����ŭ �Ǻ���ġ���� ���
			1 1 2 3 5 8 13 21 34 ...
			n = (n-1) + (n-2)
2	1	0	1
3	2	1 	3
4	3	2	5
5	4	3	7
6	5	4	9

		 
		1. �迭�� ũ��� �˳��ϰ� 100���� ����
		2. ó�� �� ���� 1�� ���� ���̹Ƿ� �迭�� ���� �ְ� ����
		3. �Է� ���� Ƚ����ŭ �ݺ��ϸ� �Ǻ���ġ �迭�� ������ ä���. (for�� 1)
		4. ������ �� ä��� �� �� ����Ѵ�. (for�� 2)
*/

#include <stdio.h>

void main()
{
	int iArrFibo[100] = {0, };
	int iCount = 0;
	int i = 0;
	
	iArrFibo[0] = 1;
	iArrFibo[1] = 1;
	
	printf("Ƚ�� �Է� : ");
	scanf("%d", &iCount);
	
	for(i=2; i <=iCount; i++) 
	{
		iArrFibo[i] = (i-1) + (i-2);
	}


	for(i=0; i <=iCount; i++) 
	{
		printf("iArrFibo[%d] = %d\n", i, iArrFibo[i]);
	}

}






