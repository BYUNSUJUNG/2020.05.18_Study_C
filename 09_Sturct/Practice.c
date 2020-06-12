/*
	3명의 학생 정보를 입력 받고 출력하기
		- 학생 정보
			이름			(char배열)
			나이			(int)
			전화번호 (문자열 - 숫자아님)  (char배열)
			과목1 점수	(int 배열)
			과목2 점수
			과목3 점수
		- 등급
			> 평균 점수 90점 이상 1, 80점 이상 2, 70점 이상 3, 나머지 4
		- 학생 정보 입력 받는 함수 : InputStudent()
		- 학생 정보 출력하는 함수 : PrintStudent()
		- 열거형 (enum) 사용 -> GRADE = { GRADE1, GRADE2, ...

[출력결과]
	[1번 학생 정보 입력]
	이름 : 홍길동
	나이 : 20
	번호 : 010-2233-4455
	점수1 : 100
	점수2 : 90
	점수3 : 91
	...

	[홍길동 학생의 정보]
	나이 : 20세
	번호 : 010-2233-4455
	총점 : 281
	평균 : 93.7
	등급 : 1등급
*/

#include <stdio.h>

// 열거형
enum GRADE { GRADE1=1, GRADE2, GRADE3, GRADE4 };

// 구조체 생성 
typedef struct _STUDENT
{
	char szName[20]; // 이름
	int iAge; // 나이
	char szPhone[20]; // 폰번호
	int iScore[3]; // 점수

}STUDENT;


// [선언]
void InputStudent(STUDENT * pStudent, int iNum);
void PrintStudent(STUDENT * pStudent, int iNum);

void main()
{
	STUDENT sKim[3] = { 0, };
	int i = 0;

	// 입력 받는 for문
	for (i = 0; i < 3; i++)
	{
		printf("[%d번 학생 정보 입력]\n", (i + 1));
		InputStudent(&sKim[i], i);
	}

	// 출력 하는 for문
	for (i = 0; i < 3; i++)
	{
		PrintStudent(sKim, i);
	}
}
// [정의]

void InputStudent(STUDENT * pStudent, int iNum)
{
	// 1. 이름 입력
	printf("이름 : ");
	scanf("%s", &pStudent->szName);
	// 2. 나이 입력 
	printf("나이 : ");
	scanf("%d", &pStudent->iAge);
	// 3. 전화번호 
	printf("전화번호 : ");
	scanf("%s", &pStudent->szPhone);
	// 4. 점수1
	printf("점수1 : ");
	scanf("%d", &pStudent->iScore[0]);
	// 5. 점수2
	printf("점수2 : ");
	scanf("%d", &pStudent->iScore[1]);
	// 6. 점수3
	printf("점수3 : ");
	scanf("%d", &pStudent->iScore[2]);
}

void PrintStudent(STUDENT * pStudent, int iNum)
{
	int iTotal = 0; // 총점 누적할 변수 
	int iAvg = 0; // 평균 점수를 정수형태로 저장하는 변수 

	iTotal += pStudent[iNum].iScore[0] + pStudent[iNum].iScore[1] + pStudent[iNum].iScore[2];
	printf("이름 : %s\n", pStudent[iNum].szName);
	printf("나이 : %d세\n", pStudent[iNum].iAge);
	printf("총점 : %d점\n", iTotal);
	printf("평균 : %.1f점\n", iTotal / 3.0);

	iAvg = iTotal / 3;

	switch (iAvg / 10)
	{
	case 10:
	case 9:
		printf("%d등급\n", GRADE1);
		break;
	case 8:
		printf("%d등급\n", GRADE2);
		break;
	case 7:
		printf("%d등급\n", GRADE3);
		break;
	default:
		printf("%d등급\n", GRADE4);
	}

}


