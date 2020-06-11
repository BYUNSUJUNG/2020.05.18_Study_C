//Exam03.c

#include <stdio.h>


typedef struct _EMPLOYEE // _EMPLOYEE 사용하지 않을 이름이라, _를 앞에 붙임(관례아님)
{
	// 멤버 선언
	char	szName[20];	// 사원 이름
	int		iAge;		// 사원 나이
	int		iSalary;	// 사원 월급

} EMPLOYEE;


void main() 
{
	//					20		4		4	= 28
	EMPLOYEE sHan = { "한석봉", 20, 2000000 };
	EMPLOYEE sArrEmp[5] = { 0, }; // 28byte * 5 
	EMPLOYEE sArrEmp2[5] = { { "한석봉", 20, 2000000 }, { "한석봉", 20, 2000000 } }; // 28byte * 5 

	// 배열 두번째 요소의 iAge 값을 변경
	sArrEmp[1].iAge = 30;
	printf("배열 두번째 요소의 iAge: %d\n", sArrEmp[1].iAge);

	// 입력받는 for문
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 나이: ", (i + 1));
		scanf("%d", &sArrEmp[i].iAge);
	}

	printf("========================\n");

	// 출력하는 for문
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 나이: %d\n", (i + 1), sArrEmp[i].iAge);
	}
}