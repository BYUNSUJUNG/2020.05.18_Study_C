//Exam04.c

/*
	열거형(enumeration)
		정수를 미리 열거해놓은 자료형
		가독성 향상 용도로 쓰임
		기본 값 0 (값을 지정하지 않았을 떄)
		값이 지정되지 않으면 앞의 숫자보다 1증가
		원하는 점수를 어느 위치던 대입가능
		항목이름 중복불가
*/

#include <stdio.h>

		//  0   1   2   3   4
enum ENUM1 {A1, B1, C1, D1, E1};
		//   0	-200		-199	1	2	
enum ENUM2 { A2, B2 = -200, C2, D2 = 1, E2 };

// 값이 중요하기 보다는 어떤 문제인지 명확히 알아야 할 때

enum _LANGUAGE {
	LANGUAGE_C = 1,
	LANGUAGE_JAVA,
	LANGUAGE_PYTHON
}; // 초기값을 지정하고 쭉 항목을 나열

enum _ERR_CODE
{
	ERR_SUCCESS = 1,
	ERR_FAIL,
	ERR_FILE_SIZE,
	ERR_MEMORY,
	ERR_DISK
};

void main() 
{

	/*
		int iNum = A1;
		printf("iNum = %d\n", iNum);	// 0
		printf("%d %d %d %d %d\n", A1, B1, C1, D1, E1); //  0   1   2   3   4
	*/
	int iNum = A1;
	printf("====================\n");
	printf("[재미있는 프로그래밍]\n");
	printf("1. C언어\n");
	printf("2. JAVA\n");
	printf("3. PYTHON\n");
	printf("====================\n");

	printf("공부할 언어를 입력하세요: ");
	scanf("%d", &iNum);

	// case 1,2,3 써있으면 무엇을 의미하는지 코드를 다시 봐야한다.

	switch (iNum) 
	{
	case LANGUAGE_C: // 변수가 아닌 상수이기에 써줄 수 있다
		printf("C언어 선택");
		break;
	case LANGUAGE_JAVA:
		printf("JAVA 선택");
		break;
	case LANGUAGE_PYTHON:
		printf("PYTHON 선택");
		break;
	default:
		printf("");
	}
}