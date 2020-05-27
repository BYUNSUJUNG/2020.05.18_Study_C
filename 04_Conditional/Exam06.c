// Exam06.c

#include <stdio.h>

void main()
{
	/*
		switch ~ case문
			하나의 조건으로 많은 경우의 수를 처리
			1. 조건식의 결과는 '정수'만 허용 (연산가능)
			2. case문의 값은 '정수 상수'만 가능하며, 중복 불가

			-break
				> switch문을 빠져나간다. (탈출)
				> case를 만족하고 수행했는데 break가 없으면
					그 아래있는 모든 case는 만족한 것으로 간주하고 다수행
						
	*/

	int iNum = 0;

	printf("=====================\n");
	printf("재미있는 프로그래밍~ \n");
	printf("1. C언어 \n");
	printf("2. JAVA \n");
	printf("3. PYTHON \n");
	printf("4. C++ \n");
	printf("=====================\n");

	printf("공부할 언어를 입력하세요: ");
	scan("%d", &iNum);

	// 조건식 (연산가능)
	switch (iNum)
	{
	case 1: // iNum이 1이면, if(iNum == 1)
		printf("선택한 언어는 C언어입니다.\n");
		break;
	case 2:
		printf("선택한 언어는 JAVA입니다.\n");
		break;
	case 3:
		printf("선택한 언어는 PYTHON입니다.\n");
		break;
	case 4:
		printf("선택한 언어는 C++입니다.\n");
		break;
	case 5 :
	default:
		printf("잘못 입력하였습니다\n");
		break;
	}
}