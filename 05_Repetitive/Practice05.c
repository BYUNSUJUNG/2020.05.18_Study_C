/*
	양의 정수를 입력받아서 
	1 : 1st
	2 : 2nd
	3 : 3rd
		그 외 : ~th
		0이하 : "다시 입력하세요."
 
	do~while과 switch~case의 콜라보

	[출력결과]
	숫자를 입력하세요 : -1
	다시 입력하세요.
	숫자를 입력하세요 : 1
	1st

	숫자를 입력하세요 : 10
	10th
*/

#include <stdio.h>

void main()
{
	int iInput = 0; // 입력 받는 변수 

	do {
		printf("숫자를 입력하세요 : ");
		scanf("%d", &iInput); // & 필수


		if (iInput <= 0) { // 0 이하
			printf("다시 입력하세요.\n");
			// 밑에 else를 하지 않으면 continue;
		}
		else { // 0 초과
			switch (iInput) { 
				
			case 1:	// 	1 : 1st
				printf("%dst\n", iInput);
				break;
			case 2:	//	2 : 2nd
				printf("%dnd\n", iInput);
				break;
			case 3: //	3 : 3rd
				printf("%drd\n", iInput);
				break;
			default: //	그 외 : ~th
				printf("%dth\n", iInput);
				break;
			}
		}
		
	} while (1); // 무한 반복
}