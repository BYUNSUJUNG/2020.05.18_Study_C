// Exam02.c

/*
	학생 3명의 이름, 수학, 영어, 국어 점수를 구조체로 만들어서
	3과목의 평균과 총점을 출력하라

*/
#include <stdio.h>

typedef struct _SCORE
{
	int iMScore;	// 수학
	int iEScore;	// 영어
	int iKScore;	// 국어

} SCORE;

typedef struct _STUDENT
{
	char sName[20];
	SCORE sScore; // 수학, 영어, 국어 성적

} STUDENT;

void main() 
{
	int iScore = 0; // 총점수
	int iAvg = 0; // 평균


	STUDENT s1 = { "강아지", 99,99,99 };	// 첫번째 학생
	STUDENT s2 = { "가나다", 99,99,99}; // 두번째 학생
	STUDENT s3 = { "마바사", 99,99,99 }; // 세번째 학생

	// 첫번째 학생
	iScore = s1.sScore.iMScore + s1.sScore.iEScore + s1.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("이름: %s\n", s1.sName);
	printf("총점: %d\n", iScore);
	printf("평균: %.2f\n", iAvg);

	// 두번째 학생
	iScore = s2.sScore.iMScore + s2.sScore.iEScore + s2.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("이름: %s\n", s2.sName); 
	printf("총점: %d\n", iScore);
	printf("평균: %.2f\n", iAvg);

	// 세번째 학생
	iScore = s3.sScore.iMScore + s3.sScore.iEScore + s3.sScore.iKScore;
	iAvg = iScore / 3.0;

	printf("이름: %s\n", s3.sName); 
	printf("총점: %d\n", iScore);
	printf("평균: %.2f\n", iAvg);
}