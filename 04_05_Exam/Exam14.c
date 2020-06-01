// Exam14.c
//	14. 사용자에게 점수를 입력받고,
//	0 ~ 100 외의 입력이면 Error 출력,
//	90점 이상이라면 화면에 'A' 출력,
//	80점 이상이라면 'B' 출력,
//	70점 이상이라면 'C' 출력, 
//	70점 미만이라면 'D' 출력 (switch문으로)

#include <stdio.h>

void main()
{
	int iInput = 0; // 사용자 입력 변수
	printf("점수를 입력해주세요: ");
	scanf("%d", &iInput); // & 필수


	switch(iInput / 10)
	{
		case 10:
		case 9: printf("A\n"); break;	// 100점 이하 90점 이상
		case 8: printf("B\n"); break;	// 80점 이상
		case 7: printf("C\n"); break;	// 70점 이상
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:	printf("D\n"); break; // 70점 미만 0점 이상
		default: printf("Error\n"); break; // 0 ~ 100 외

	}
}