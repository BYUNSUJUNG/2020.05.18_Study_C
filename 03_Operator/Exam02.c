// Exam02.c

#include <stdio.h>

void main() 
{
	/*
		복합 대입 연산자
			대입연산자(=)에 다른 연산자가 합쳐진 것
	*/

	int iNum = 10;

	iNum += 5;	// iNum = iNum + 5;
	printf("iNum = %d\n", iNum); // 10 + 5 = 15
		
	iNum -= 5;	// iNum = iNum - 5;
	printf("iNum = %d\n", iNum); // 15 - 5 = 10

	iNum *= 3;	// iNum = iNum * 3;
	printf("iNum = %d\n", iNum); // 10 * 3 = 30

	iNum /= 10;	// iNum = iNum / 10;
	printf("iNum = %d\n", iNum); // 30 / 10 = 3

	iNum += 1; // 4
	iNum += 1; // 5
	iNum += 1; // 6
	printf("iNum = %d\n", iNum);

}
