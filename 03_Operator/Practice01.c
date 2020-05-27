/*
	2개의 숫자를 입력 받고 사칙연산과 나머지 결과를 출력하세요.

	[출력결과]
	두 수 입력 : 20 6
	20 + 6 = 26
	20 - 6 = 14
	20 * 6 = 120
	20 / 6 = 3
	20 % 6 = 2
*/

#include <stdio.h>

void main()
{
	// 1. 2개의 공간이 필요 (변수)
	int iNum1 = 0, iNum2 = 0;

	// 2. 출력 문구 만들기
	printf("두 수 입력: "); // \n를 뺏음

	// 3. 입력 형식 만들기
	scanf("%d %d", &iNum1, &iNum2); // &필수! (주소값)
	
	// 4. 입력한 값을 사용 (printf)
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));
}






