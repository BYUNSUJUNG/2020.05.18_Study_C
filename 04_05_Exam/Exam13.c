// Exam13.c
//	13. 사용자에게 점수를 입력받고, 
//	0 ~ 100 외의 입력이면 Error 출력,
//	90점 이상이라면 화면에 'A' 출력,
//	80점 이상이라면 'B' 출력,
//	70점 이상이라면 'C' 출력, 
//	70점 미만이라면 'D' 출력 (if문으로)

#include <stdio.h>

void main()
{
	int iInput = 0; // 사용자 입력 변수
	printf("점수를 입력해주세요: ");
	scanf("%d", &iInput); // & 필수

	if (iInput<=100 && iInput >=90) // 100점 이하 90점 이상
	{
		printf("A\n");
	}
	else if (iInput < 90 && iInput >= 80) // 90점 미만 80점 이상
	{
		printf("B\n");
	}
	else if (iInput < 80 && iInput >= 70) // 80점 미만 70점 이상
	{
		printf("C\n");
	}
	else if (iInput < 70) // 70점 미만 
	{
		printf("D\n");
	}
	else // 0 ~ 100 외
	{
		printf("Error\n");
	}
}
