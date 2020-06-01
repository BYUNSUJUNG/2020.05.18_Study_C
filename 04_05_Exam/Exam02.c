// Exam02.c
// 	2. 1 부터 100까지 모든 수를 출력하고 10의 배수는 숫자대신 "!!!" 출력
//	ex )7 8 9 !!! 11

#include <stdio.h>

void main()
{
	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if(i%10==0) // i가 10의 배수일 때
		{
			printf("!!! ");
		}
		else 
		{
			printf("%d ", i);
		}
	}
	

}