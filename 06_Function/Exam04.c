//Exam04.c

#include <stdio.h>

/*
	재귀호출	- 재귀함수(비효율적)
		>함수의 수행문 안에 '자기자신'의 함수를 다시 호출하는 것
		>반복문과 유사함

		>함수는 호출되면 'stack'이라는 메모리를 사용한다
		stack: First In Last out (FILO)
		queue: First In First out (FIFO)

		
		> 종료조건이 없어 너무 많은 반복 호출시 -> 오류
		(stack overflow 오류)
		> 반복문보다 느리다.

		> 함수 호출시 stack를 사용하는 이유는 수행이 끝나고 돌아와야할 위치를 기억
*/


// [선언]
void fn(int iNum);

void main() 
{
	printf("main 시작 \n");
	fn(3); // [호출]
	printf("main 끝 \n");

	/*
		[결과]
		main 시작
		fn 시작, iNum = 3
		fn 시작, iNum = 2
		fn 시작, iNum = 1
		fn 시작, iNum = 0
		fn 끝!, iNum = 0
		fn 끝, iNum = 1
		fn 끝, iNum = 2
		fn 끝, iNum = 3
		main 끝
	*/
}

// [정의]
void fn(int iNum) {
	printf("fn 시작, iNum = %d\n", iNum);

	if (iNum == 0) {  // iNum이 0일 경우
		printf("fn 끝!, iNum = %d\n", iNum);
		return; // 함수 종료
	}

	fn(iNum - 1); // 재귀호출
	printf("fn 끝, iNum = %d\n", iNum);
}