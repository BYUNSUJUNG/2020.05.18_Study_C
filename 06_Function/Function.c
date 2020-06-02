//Function.c


/*
	함수(Function)

	반환타입 함수이름(매개변수) {
		(수행문)
	}


	>리턴타입
		함수의 기능 수행이 끝나고 호출했던 위치로 돌려줄 값의 타입
		돌려줄 값이 없으면 void
		반환될 값이 여러 개 일 수 없다.

	>매개변수
		지역변수이기에 
		함수 호출됐을 때 생성되고, 함수의 수행이 끝나면 자동으로 소멸

	>반환타입과 매개변수 유무에 따른 함수의 형태

	>함수의 세가지 상태
		선언: 함수의 원형을 미리 알리는 용도 뒤에 세미콜론 붙임
			반환타입 함수이름(매개변수);
		정의: 함수를 만든다 (수행문을 작성)		
		호출: 함수를 사용한다						//어떠한 메소드내에
*/	

#include <stdio.h>

// 함수 정의
int ADD(int iNum1, int iNum2)
{	// 매개변수 2개 있으면, 호출할 때도 매개변수의 타입에 맞는 값을 2개 전달해야한다.
	return iNum1 + iNum2;
}

// 호출 되면 Hello가 출력되도록
void printHello() { // 매개변수가 없다 
	printf("Hello\n");
}


/*
	c언어는 절차지향언어이기에, 위에서 아래로 코드를 읽는다
	main에서 사용할 함수가 아래에 있으면 그 존재를 모른다
	그래서 선언을 main함수 위에 해야한다

	일반적인 순서는
	1. #include <stdio.h>
	2. main() 위에 함수 [선언]
	3. main() 안에 함수 [호출]
	4. main() 아래에 함수 [정의] (함수 작성)
*/

// [선언]
void PrintAdd(int iNum1, int iNum2);

void main() 
{
	int iNum1 = 10;
	int iNum2 = 20;		
	int iResult = 0;					// 함수 호출 1  -  30 // 반환되는 값을 %d에 넣는데 사용
	printf("%d + %d = %d\n", iNum1, iNum2, ADD(iNum1, iNum2));
										// 함수 호출 2  -  300
	printf("%d + %d = %d\n", 100, 200, ADD(100, 200));
	// 함수는 반환 값이 있을 때, 함수의 호출코드는 결국 반환 값으로 바뀐다고 생각
			
			// 함수 호출 3 : 반환 값을 변수 대입에 사용
	iResult = ADD(iNum1, iNum2);
	printf("iResult = %d\n", iResult);

	printHello(); // Hello

	PrintAdd(10,20); // [호출]
}

// [정의]
void PrintAdd(int iNum1, int iNum2) 
{

	if (iNum1 == 0 && iNum2 == 0)
	{
		printf("둘다 0이다 \n");
		return; // 함수 종료
	}
	printf("두수의 합: %d\n", iNum1 + iNum2);
}