//Exam03.c

#include <stdio.h>

/*
	다차원 배열: 2차원, 3차원, ......
	int iArr[2][3] = { 0, };

	[0][0] [0][1] [0][2]
	[1][0] [1][1] [1][2]
		> 2차원 배열은 2행, 3열에서 - 2중for문의 i, j순서와 동일

	2차원 배열은 그림은 2차원으로 표현되지만, 실제는 1차원(가로 방향)
		[0][0] [0][1] [0][2]  [1][0] [1][1] [1][2]

	iArr[1][2] = 6; // 정상
	iArr[2][1] = 6; // 없는 공간

	2차원 배열 생성시 초기값 넣기
		int iArr[2][3] = { {1,2,3}, {4,5,6} };
		int iArr[2][3] = { 1,2,3,4,5,6 }; // 이렇게도 가능
							1행		2행

*/


void main() 
{
	// 학생 3명에 대해서 4개 과목 총점과 평균 구하기
	int iArrScore[3][4] = { 0, }; 
	int i = 0; // 배열의 행
	int j = 0; // 배열의 열

	// 점수를 입력받는 2중 for문
	for (i = 0; i < 3; i++)
	{
		printf("%d번 학생의 점수 입력: ", (i + 1));
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &iArrScore[i][j]); // 띄어쓰기로 입력하면 편하다
		}
	}
	
	// 점수를 출력하는 2중 for문
	for (i = 0; i < 3; i++)
	{
		int iTotal = 0; // 합계 누적용 변수

		// i의 for문 1회 수행은 학생 1명에 대한 처리
		for (j = 0; j < 4; j++)
		{
			iTotal += iArrScore[i][j];
		}
		printf("%d번 학생의 정보\n", (i + 1));
		printf("총점: %d점\n", iTotal);
		printf("평균: %.f점\n", iTotal / 4.0);
	}
}