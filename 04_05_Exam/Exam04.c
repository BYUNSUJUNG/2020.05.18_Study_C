// Exam04.c
// 4. 1 부터 100까지 모든 수의 합을 구하여 그 합을 출력 (while 구문 사용)

#include <stdio.h>

void main()
{
	int iNum = 0;
	int iSum = 0;	

	while (1) { // 무한 반복
		iNum++;
		iSum+=iNum;
		printf("%d ",iSum);
		if (iNum == 100) break; // iNum이 100일 때, break;
		
	}

}