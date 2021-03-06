// Repetitive.c

/*
	반복문
		주어진 조건이 만족하면 반복하는 제어문
			> 조건이 만족 하지 않을 때까지 반복
		조건식에 들어가는 변수는 조건변수


	1. for문
		for(초기식; 조건식; 증감식)
		{
			수행문;
		}

		초기식: 최초 한 번만 수행
		조건식: 조건이 참(true)이면 수행문 수행
		증감식: 수행문 수행 후 증감식이 수행

		3개의 식들은 각각 생략이 가능하며
		모두 생략한 경우 항상 참으로 간주한다 (무한반복)
		for( ; ; )

	2. while문
		while(조건식)
		{
			수행문;
		}
		if문과 구조가 같으나, 수행문이 끝난 후 조건식으로

	3. do-while문: 일단 1번 수행해야 할 때
		do 
		{

		} while(조건식);

		무조건 수행문 1회 수행 후, 조건식을 판별

		*주의* 조건식 뒤에 세미콜론을 붙인다.

	반복문 공통 : break, continue;
		break: 현재 진행 중인 반복문을 빠져 나간다.
				> switch-case문, 반복문에서 사용
		continue: 다음 수행문 코드를 실행하지 않고 다음 식으로 점프한다.
				> 반복문에서만 사용

*/

#include <stdio.h>

void main() 
{
	// 1. for문
	int i = 0; // i라는 이름은 for문 사용할 때 쓰는 명칭 (index)
				// for문이 여러개 사용된다면, 알파벳 순으로 사용 i,j,k

	// 초기식;조건식;증감식
	for (i = 0; i < 5; i++) // i = 0, 1, 2, 3, 4 수행, 5일 때 끝
	{
		// 수행문
		printf("for문: %d\n", i);

	}

	// for문이 끝났을 때 i의 값
	printf("i의 값: %d\n", i); // 5


	// 2. while문
	i = 0;  // 초기식
	while (i < 5) // 조건식
	{
		// 수행문
		printf("while문: %d\n", i);
		i++; // 증감식
	}

	// 3. do-while문
	do {
		printf("(1) 9를 입력하면 종료: ");
		scanf("%d", &i);
	} while (i != 9);

	// while문
	i = 0;
	while (i != 10)
	{
		printf("(2) 10을 입력하면 종료 : ");
		scanf("%d", &i);
	}

	while (1) // 항상 만족하는 반복문 - 무한반복
	{
		printf("(3) 5을 입력하면 종료 : ");
		scanf("%d", &i);

		// 무한반복 탈출
		if (i == 5) 
		{
			break;
		}
	}

	// 반복문은 서로 대체 가능
	//		반복 횟수가 정해져 있을 때는 for문
	//		특정 조건이 있을 때는 while문, do-while문
	//		무한반복+while+break를 사용하는 것이 편하다.
}