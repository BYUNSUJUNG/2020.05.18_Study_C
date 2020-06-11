/*
	3명의 학생 정보를 입력 받고 출력하기
		- 학생 정보
			이름
			나이
			전화번호 (문자열 - 숫자아님)
			과목1 점수
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

// [선언]
//int InputStudent();
//void PrintStudent();

// 구조체 선언
typedef struct _STUDENT
{
	/*
		이름
		나이
		전화번호(문자열 - 숫자아님)
		과목1 점수
		과목2 점수
		과목3 점수
	*/

	char	szName[20];			//  학생 이름 
	int		iAge;				//  학생 나이 
	char	szPhoneNumber[20];	//	전화번호
	// int iGrade[3]
	int		iGrade1;			//  과목1 점수
	int		iGrade2;			//  과목2 점수
	int		iGrade3;			//  과목3 점수
} STUDENT;

// 열거형 선언
enum GRADE {
	GRADE1 = 1, 
	GRADE2,
	GRADE3,
	GRADE4
}; 

void main()
{
	int iGrade = 0;
	double dAvg = 0;


	STUDENT st1 = { 0, };
	for (int i = 0; i < 3; i++)
	{
		printf("---------------------------------------\n");
		printf("이름: ");
		scanf("%s", &st1.szName);
		printf("나이: ");
		scanf("%d", &st1.iAge);
		printf("번호: ");
		scanf("%s", &st1.szPhoneNumber);
		printf("점수1: ");
		scanf("%d", &st1.iGrade1);
		printf("점수2: ");
		scanf("%d", &st1.iGrade2);
		printf("점수3: ");
		scanf("%d", &st1.iGrade3);

		
		iGrade = st1.iGrade1 + st1.iGrade2 + st1.iGrade3;
		dAvg = (iGrade / 3.0);

		printf("[%s 학생의 정보]\n", st1.szName);
		printf("나이: %d\n", st1.iAge);
		printf("번호: %s\n", st1.szPhoneNumber);

		
		printf("점수1: %d\n", st1.iGrade1);
		printf("점수2: %d\n", st1.iGrade2);
		printf("점수3: %d\n", st1.iGrade3);

		printf("총점: %d\n", iGrade);
		printf("평균: %.1f\n", dAvg);
		printf("등급:"); 

		// 평균 점수 90점 이상 1, 80점 이상 2, 70점 이상 3, 나머지 4
		if (dAvg >= 90)
		{
			printf(GRADE1+"등급");	// 1
		}
		else if (dAvg >= 80)
		{
			printf(GRADE2+"등급"); // 2
		}
		else if (dAvg >= 70)
		{
			printf(GRADE3+"등급"); // 3
		}
		else
		{
			printf(GRADE4); // 4
		}

	}
}

/*
// [정의]

//학생 정보 입력 받는 함수
int InputStudent()
{
	printf("이름: ");
	scanf("%s", &st1.szName);
	printf("나이: ");
	scanf("%d", &st1.iAge);
	printf("번호: ");
	scanf("%s", &st1.szPhoneNumber);
	printf("점수1: ");
	scanf("%f", &st1.dGrade1);
	printf("점수2: ");
	scanf("%f", &st1.dGrade2);
	printf("점수3: ");
	scanf("%f", &st1.dGrade3);

	return st1.szName, st1.iAge, st1.szPhoneNumber, st1.dGrade1, st1.dGrade2, st1.dGrade3;
}
//학생 정보 출력하는 함수 
void PrintStudent(char szName, int	iAge, char szPhoneNumber, 
	double	dGrade1, double	dGrade2, double	dGrade3)
{

	double dGrade = 0;
	double dAvg = 0;

	dGrade = dGrade1 + dGrade2 + dGrade3;
	dAvg = dGrade / 3.0;

	printf("[%s 학생의 정보]\n", szName);
	printf("나이: %d\n",iAge);
	printf("번호: %s\n", szPhoneNumber);

	printf("총점: %d\n", dGrade);
	printf("평균: %d\n", dAvg);
	printf("등급:");
	
	// 평균 점수 90점 이상 1, 80점 이상 2, 70점 이상 3, 나머지 4
	if (dAvg >= 90) 
	{
		printf(GRADE1);	// 1
	}
	else if (dAvg >= 80)
	{
		printf(GRADE2); // 2
	}
	else if (dAvg >= 70)
	{
		printf(GRADE3); // 3
	}
	else 
	{
		printf(GRADE4); // 4
	}

}

*/