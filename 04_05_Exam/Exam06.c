// Exam06.c
// 6. scanf를 사용하여 정수를 두개 입력받고 그 두 수를 포함한
//	두 수 사이의 모든 수의 합을 구하여 출력
#include <stdio.h>

void main()
{
	int iInput1 = 0;
	int iInput2 = 0;
	int iSum = 0;
	int iStart = 0;
	int iEnd = 0;

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
		iSum += i;
	}
	printf("두 수 사이의 모든 수의 합: %d\n", iSum);



	

}