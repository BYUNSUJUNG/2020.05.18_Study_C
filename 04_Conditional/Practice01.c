/*
	3과목 점수를 입력받아 평균 점수가 60점 이상이면 합격, 아니면 불합격

	[출력결과]
	점수를 차례대로 입력해주세요 : 60 60 60
	합격
*/

#include <stdio.h>

void main()
{
	// 정수 3개 공간 생성
	int iScore1 = 0;
	int iScore2 = 0;
	int iScore3 = 0;

	float iAVG_Score = 0; // 평균

	// 출력 문구 만들기
	printf("점수를 차례대로 입력해주세요 : ");

	// 입력받기
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);

	// 식 계산
	iAVG_Score = (iScore1 + iScore2 + iScore3) / (float)3;

	// 조건문
	if (iAVG_Score >= 60 && iAVG_Score <= 100) // 60점 이상 합격
	{
		printf("합격\n");
	}
	else // 60 미만 불합격
	{
		printf("불합격\n");
	}

	
}