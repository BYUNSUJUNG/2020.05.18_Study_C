// Exam05.c

/*
	2중 포인터
		포인터 변수의 주소 값을 가지는 변수 
*/

#include <stdio.h>

// [정의]
void swap(int **ptr1, int **ptr2) // 2중 포인터 매개변수 2개 
{
	int temp = **ptr1; 
	**ptr1 = **ptr2; 
	**ptr2 = temp; 
}
void main()
{
	int num1 = 10;
	int num2 = 20;
	int *p1 = &num1;
	int *p2 = &num2; 
	
	printf("Before %d, %d\n", *p1, *p2);	// 10 20
	swap(&p1, &p2);
	printf("After %d, %d\n", *p1, *p2);		// 20 10
	printf("num1(%d), num2(%d)\n", num1, num2);	// 10 20 
}
