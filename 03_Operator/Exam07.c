// Exam07.c

#include <stdio.h>

void main() 
{
	/*
		조건 연산자 (삼항 연산자)
			(조건식 ? 식 1 : 식 2) 
			> 조건식이 참이면 식1를 수행
				거짓이면 식 2를 수행
	*/

	int iNum1 = 10;
	int iNum2 = 0;

	// (1) 삼항연산자의 식1, 식2는 printf() %s에 들어갈 값으로 '사용'
	printf("iNum1은 %s\n", iNum1 == 0 ? "0입니다." : "0이 아닙니다");
	
	// (2) 삼항연산자의 식1, 식2는 iNum2 변수에 대입될 값으로 '사용'
	iNum2 = iNum1 > 0 ? iNum1 : 0;
	// iNum1이 0보다 크면, iNum2 = iNum1;과 같다
	// iNum1이 0보다 작으면, iNum2 = 0;과 같다
	printf("iNum2 = %d\n", iNum2); // 10

	// (3) 삼항 연산자 중첩 (식1이나 식2에 새로운 삼항연산자 사용) -> 복잡
	iNum2 = 20 > 30 ? 20 : (3>2 ? 3:2); 
	printf("iNum2 = %d\n", iNum2); // 3

	// 뒤에 배우는 조건문으로 대체가능
}