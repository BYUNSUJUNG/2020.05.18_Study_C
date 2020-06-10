// Exam01.c

// 구조체안에 또다른 구조체
// 매개변수로 사용

#include <stdio.h>


typedef struct _POINT
{
	int x;
	int y;
} POINT;
// 구조체 안에 또 다른 구조체를 멤버로 가지려면,
// 그 구조체가 더 위에 선언되어 있어야한다.

typedef struct _CIRCLE
{
	POINT sPoint; // 좌표(원점)
	int iLen;	// 반지름

} CIRCLE;

// [선언]
void setCircleVal(CIRCLE sCircle);
void setCircleRef(CIRCLE *pCircle); // CIRCLE 타입 변수의 주소 값을 전달 받겠다 (포인터 변수)

void main() {
	POINT sPoint = { 0, }; // POINT가 CIRCLE안에 있다고해서 따로 사용 못하는것이 아님
	CIRCLE c1 = { 0, };
	CIRCLE c2 = { 0, };
	CIRCLE c3 = { 0, };

	printf("c1의 크기: %d\n", sizeof(c1)); // 4x3 = 12
	
	// 구조체의 멤버가 구조체일 때, 또 점(.)을 찍고 접근한다.
	printf("c1 좌표: (%d,%d), 반지름: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	// [호출]
	setCircleVal(c1); // Call By Value
	// c1의 값은 바뀌지 않음
	printf("c1 좌표: (%d,%d), 반지름: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	setCircleRef(&c1);
	// c1의 값이 바뀜
	printf("c1 좌표: (%d,%d), 반지름: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	/*
		setCircleVal 사용시 호출할 때마다 12byte 공간이 생성
		(매개변수 타입이 CIRCLE - 12byte)
		> 구조체의 크기가 크면 그 크기만큼 생성
		> 많이 호출할 수록 프로그램이 힘들어 한다.

		setCircleRef 사용시 호출할 때마다 4byte 공간이 생성
		(매개변수가 포인터 4byte)

		따라서, 포인터 변수를 주로 사용하는 것이다.
	*/

	// 멤버 하나씩 복사하는 방법
	c2.sPoint.x = c1.sPoint.x;
	c2.sPoint.y = c1.sPoint.y;
	c2.iLen = c1.iLen;
	printf("c2 좌표: (%d,%d), 반지름: %d \n", c2.sPoint.x, c2.sPoint.y, c2.iLen);

	c3 = c2 // 자료형이 같기 때문에 대입 가능
	// if(c1 == c3) {} 불가능 --> 우리가 정의한 자료형이기 때문에 어떻게 비교할지 모른다.


}
// [정의]
void setCircleVal(CIRCLE sCircle) // 함수 호출시 12byte짜리 CIRCLE 공간이 새로 생성
{
	sCircle.sPoint.x = 3;
	sCircle.sPoint.y = 4;
	sCircle.iLen = 5;
	printf("setCircleVal 함수 안 좌표: (%d,%d), 반지름: %d \n", 
		sCircle.sPoint.x, sCircle.sPoint.y, sCircle.iLen);

}

void setCircleRef(CIRCLE *pCircle)  // 포인터 변수
{
	pCircle->sPoint.x = 5;
	pCircle->sPoint.y = 6;
	pCircle->iLen = 10;
	printf("setCircleRef 함수 안 좌표: (%d,%d), 반지름: %d \n",
		pCircle->sPoint.x, pCircle->sPoint.y, pCircle->iLen);
	// pCircle은 구조체의 포인터 변수 : 해당 주소의 멤버 접근 시 -> 사용
	// 멤버를 접근했더니 sPoint가 있다. 포인트 변수가 아님 (일반구조체 변수)
	// 그래서 점(.)을 사용해서 접근
}