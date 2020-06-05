#include <stdio.h>

int main() 
{
	// szSource 배열을 이용하여, szTarget이라는 배열에 ABCCBA 저장하기
	//		1. for문 이용

	char szSource[]		= "ABC";
	
	// 코드 작성
	
	char szTarget[7]	= {0, };
	int	 i = 0; // for문을 이용

	for (i = 0; i < 3; i++)
	{
		szTarget[i] = szSource[i];
		szTarget[5-i] = szSource[i];
	}


	printf("szTarget = %s\n", szTarget);
}