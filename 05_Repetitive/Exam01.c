// Exam01.c

#include <stdio.h>

void main() 
{
	//  for문을 이용하여 1~10까지 합 구하기
	int iSum = 0; // 합을 누적할 변수
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
	printf("1에서부터 10까지의 합계는: %d\n", iSum);
}