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
	int iInput = 0;

	do {
		printf("숫자를 입력하세요 : ");
		scanf("%d", &iInput);


		if (iInput <= 0) {
			printf("다시 입력하세요.\n");
		}
		else {
			switch (iInput) {
			case 1:
				printf("%dst\n", iInput);
				break;
			case 2:
				printf("%dnd\n", iInput);
				break;
			case 3:
				printf("%drd\n", iInput);
				break;
			default:
				printf("%dth\n", iInput);
				break;
			}
		}
		
	} while (1);
}