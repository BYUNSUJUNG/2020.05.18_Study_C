/*
	국어,영어,수학 세 과목의 점수를 입력 받고,
	총점과 평균을 출력하세요. (평균은 소수점 이하 1자리까지)
	
	[출력결과]
	국어,영어,수학 점수를 차례로 입력하세요 : 97 86 95
	총점 : 278점
	평균 : 92.7점
*/

#include <stdio.h>

void main()
{
	// 1. 3개의 공간이 필요 (변수)
	int kScore = 0;
	int mScore = 0; 
	int eScore = 0;

	int total = 0;

	// 2. 출력 문구 만들기
	printf("국어,영어,수학 점수를 차례로 입력하세요 :");

	// 3. 입력 형식 만들기
	scanf("%d %d %d", &kScore, &mScore, &eScore);

	total = kScore + mScore + eScore;

	// 4. 입력한 값을 사용 (printf)
	printf("총점 : %d점\n평균 : %.1f점\n", total, (float)total/3); // OR 3.0
	// 정수와 정수의 계산에서는 정수 값이 나온다.
	// 실수 값을 원하면 두 정수중 하나이상을 실수형으로 바꾸어야 한다.
}