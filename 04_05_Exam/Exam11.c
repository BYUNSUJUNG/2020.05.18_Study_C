// Exam11.c
//	11. 1 부터 100까지의 수 중에서 3의 배수인 수를
//	사용자가 입력한 숫자만큼 출력(ex 입력 : 5 -> 3, 6, 9, 12, 15 출력)

#include <stdio.h>

void main()
{
	int iCnt = 0;
	int iInput = 0; // 사용자 입력 변수

	printf("출력하고 싶은 개수를 입력해주세요: ");
	scanf("%d", &iInput);
	for (int i = 1; i < 101; i++) { // 1 부터 100까지 반복
		if (i % 3 == 0) // 3의 배수인 수
		{
			printf("%d ", i);
			iCnt++;
			if(iCnt == iInput) break;
		}
	}

}