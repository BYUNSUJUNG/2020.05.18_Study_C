//Struct.c

/*
	구조체 - 사용자 정의 자료형 (type)
		다양한 타입의 변수들을 묶은 자료형
			> 배열: 같은 타입 변수들의 나열
			> 구조체: 여러 타입 변수들의 나열

		- 구조체는 미리 선언하고 사용한다.
			> 함수 선언부 위 (함수 원형에서 사용할 수 있기 때문)
			> 구조체의 선언 = 새로운 자료형을 만들었다

		- 구조체 멤버로 배열, 포인터, 다른 구조체 등도 사용할 수 있다
			> 변수화 가능한 모든 것
		
		- 구조체 변수는 멤버들을 묶은 '단위'이다
			> 일반 변수처럼 사용할 수 있다

*/

#include <stdio.h>
#include <string.h> // strcpy() 사용

// (1) 구조체의 기본 선언
struct STUDENT
{
	// 멤버 선언
	char	szName[20]; //  학생 이름 --> 20byte
	int		iAge;		//  학생 나이 --> 4byte
	double	dGrade;		//  학생 점수 --> 8byte
	// 구조체 멤버 선언시에는 초기화를 할 수 없다
	// 이 때는 공간를 만드는 것이 아니라 
	// 이런 자료형이 있다라고 선언을 하는 것 뿐
};
// (2) typedef를 이용하여 struct 글자 떼기
typedef struct _EMPLOYEE // _EMPLOYEE 사용하지 않을 이름이라, _를 앞에 붙임(관례아님)
{
	// 멤버 선언
	char	szName[20];	// 사원 이름
	int		iAge;		// 사원 나이
	int		iSalary;	// 사원 월급

} EMPLOYEE;


void main() 
{
	// 1-1. 구조체를 사용하면 학생 10명일 때, 구조체 변수 10개면 된다.
	struct STUDENT sKim1; // STUDENT 자료형으로 만든 변수(초기화되지 않았음)
	struct STUDENT sKim2 = { 0, }; // 초기화 (배열과 동일)
	struct STUDENT sLee = { "이몽룡",20,99.9 }; // 멤버 타입 순서에 맞게 초기값

	// 1-2. 구조체를 사용하지 않았다면, 각각의 변수를 10개씩 만들어야 한다.
	char szName1[20];	// 학생1의 이름
	int iAge1;			// 학생1의 나이
	double dGrade1;		// 학생1의 점수

	// 2. typedef를 이용하여 struct 글자 떼기
	EMPLOYEE sHong = { 0, }; // 구조체를 다룰 때 가장 베스트~! (typedef, 0초기화)
	struct _EMPLOYEE sHong2 = { 0, }; // 물론, 이렇게도 사용가능
	EMPLOYEE * pHong = NULL; // 구조체는 단지 자료형이기에 포인터 변수도 생성 가능
	pHong = &sHong; // 앞서 배운 포인터 개념과 동일, 자료형만 바뀐 것

	// 구조체 변수명에서 점(.)을 붙이면 구조체 멤버에 접근(사용)할 수 있다.
	sHong.iAge = 20;
	sHong.iSalary = 2000000;
	// sHong.szName = "홍길동"; // 배열에서 문자열은 초기화에서만 넣을 수 있다
	
	// strcpy(); 함수를 통해 문자열 복사 --> string.h 필요
	strcpy(sHong.szName, "홍길동");
	printf("이름: %s\n", sHong.szName);
	printf("나이: %d\n", sHong.iAge);
	printf("월급: %d\n", sHong.iSalary);

	//구조체의 포인터 변수로 멤버를 접근할 때는 점(.)대신 -> 사용
	pHong->iAge = 21; // sHong 구조체를 따라가서 멤버를 사용
	pHong->iSalary = 2500000; // sHong 구조체를 따라가서 멤버를 사용
	
	strcpy(pHong->szName, "홍길당");
	printf("이름: %s\n", pHong->szName);
	printf("나이: %d\n", pHong->iAge);
	printf("월급: %d\n", pHong->iSalary);

	printf("월급: %d\n", (*pHong).iSalary);

	strcpy((*pHong).szName, "홍길등");
	printf("이름: %s\n", pHong->szName);

	
}