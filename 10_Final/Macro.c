//Macro.c

/*
	선행처리
		- 컴파일 이전에 하는 일
		- #define 매크로
			> 단순 치환하기
			> 특정 패턴일 때 변경하기 (매크로 확장)


*/

#include <stdio.h>

#define PI	3.14		// 3.14 대신에 PI를 사용하겠다
						// 단순 치환 (가독성 + 중복 코드 제거)
// 변수와 다르게 자료형을 신경쓰지 않아도 되기에 편하다


#define SQUARE(X) X * X		// 매크로 확장 (마치 함수 같다)
#define SQUARE2(X) ((X) * (X))

#define	NUM_INT 0

void main() 
{
	int iNum = NUM_INT;
	printf("파이는 %f입니다. \n", PI);

	printf("파이는 %f입니다. \n", SQUARE(5)); // 5 * 5
	// 함수와 다르게 계산해서 값만 가져오는 것이 아니고
	// 그대로 5 * 5 가져와서 계산하는 것

	printf("파이는 %f입니다. \n", SQUARE(2.5));
	// 2.5 * 2.5 로 치환

	printf("파이는 %f입니다. \n", SQUARE(1 + 3));
	// 4 * 4으로 16이 아닌
	// 1 + 3 * 1 + 3 = 1 + (3 * 1) + 3 = 1 + 3 + 3 = 7
	printf("파이는 %f입니다. \n", SQUARE2(1 + 3));
	// ((1 + 3) * (1 + 3)) = 16
}