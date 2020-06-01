// Exam18.c
// 18. scanf를 사용하여 정수를 두개 입력받고
//	두수 사이(두 수 포함)의 5의 배수를 제외한 모든 수를 출력하고
//	5의 배수를 제외한 모든 수의 합을 출력하라.

#include <stdio.h>

void main()
{
	int iInput1 = 0; // 사용자 입력 변수
	int iInput2 = 0; // 사용자 입력 변수
	int iStart = 0; // 시작, 작은 수
	int iEnd = 0; // 끝, 큰 수
	int iSum = 0;

	printf("두 수를 입력해주세요: ");
	scanf("%d %d", &iInput1, &iInput2); // & 필수

	// 두 수 중에서 작은 값을 iStart, 큰 값을 iEnd 

	if (iInput1 < iInput2) // iInput1 < iInput2
	{
		iStart = iInput1;
		iEnd = iInput2;
	}
	else // iInput1 >= iInput2
	{
		iStart = iInput2;
		iEnd = iInput1;
	}

	for (int i = iStart; i <= iEnd; i++)
	{
		if (i % 5 != 0)
		{
			iSum += i;  // 5의 배수 제외
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("두 수 사이의 5의 배수를 제외한 모든 수의 합: %d\n", iSum);

}
	