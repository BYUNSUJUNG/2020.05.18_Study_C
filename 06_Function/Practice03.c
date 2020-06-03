/*
	재귀호출을 이용하여 팩토리얼 함수 만들기

		팩토리얼(factorial) : 1부터 특정 수까지 정수를 모두 곱한 것
			5! = 5 * 4 * 3 * 2 * 1
			3! = 3 * 2 * 1
			   = 3 * 2!
			   = 3 * 2 * 1!
			1! = 1

			n! = n * (n-1)!
		
		함수
			기능 : 전달된 숫자의 팩토리얼을 구한 값을 반환
			함수명 : GetFactorial

		[출력결과]
		숫자를 입력하세요 : 5
		5! = 120
*/


#include <stdio.h>

int GetFactorial(int iNum);

void main()
{
	int iInput = 0; // 사용자 입력 변수

	printf("숫자를 입력하세요 : ");
	scanf("%d", &iInput);

	printf("%d! = %d\n", iInput, GetFactorial(iInput));

	/*
		[출력결과]
		숫자를 입력하세요 : 5
		5! = 120
	*/
}

int GetFactorial(int iNum)
{
	if (iNum == 1) // iNum이 1일 때, 1를 return
	{
		return 1;
	}
	return iNum * GetFactorial(iNum-1); // 팩토리얼: n! = n * (n-1)!

}