/*
	피보나치 수열 fibo
		입력받은 횟수만큼 피보나치수열 출력
			1 1 2 3 5 8 13 21 34 ...
			n = (n-1) + (n-2)
2	1	0	1
3	2	1 	3
4	3	2	5
5	4	3	7
6	5	4	9

		 
		1. 배열의 크기는 넉넉하게 100으로 선언
		2. 처음 두 개의 1은 고정 값이므로 배열에 값을 넣고 시작
		3. 입력 받은 횟수만큼 반복하며 피보나치 배열의 값들을 채운다. (for문 1)
		4. 값들을 다 채우고 난 후 출력한다. (for문 2)
*/

#include <stdio.h>

void main()
{
	int iArrFibo[100] = {0, };
	int iCount = 0;
	int i = 0;
	
	iArrFibo[0] = 1;
	iArrFibo[1] = 1;
	
	printf("횟수 입력 : ");
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






