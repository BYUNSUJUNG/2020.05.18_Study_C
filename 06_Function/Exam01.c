// Exam01.c

#include <stdio.h>


// [선언]
int GetSum(int iNum);

void main()
{
	int iInput = 0; 
	printf("숫자입력: ");
	scanf("%d", &iInput);
	printf("1~%d까지의 합: %d\n", iInput, GetSum(iInput)); 
	printf("1~10까지의 합: %d\n", GetSum(10));
	printf("1~20까지의 합: %d\n", GetSum(20));
}
// [정의] : 1부터 전달된 값까지 합을 구해서 반환
int GetSum(int iNum)
{
	int i = 0;
	int iSum = 0;
	for (i = 1; i <= iNum; i++)
	{
		iSum += i; // 누적
	}
	return iSum;
}