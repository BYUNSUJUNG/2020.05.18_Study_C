//Exam04.c

#include <stdio.h>

void main() 
{
	// 2차원 문자 배열로 동물 이름 입력받기
	char szArrAnimal[3][20] = { 0, };

	// 1차원이던 2차원이던 배열에서 인덱스를 사용하여 요소에 접근한다

	int i = 0;
	int iArrLen = 0;

	//			20byte * 3		/ 20byte		= 3 (행의 개수)
	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]);

	printf("동물 이름: \n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%번 동물: ", (i + 1));
		gets(szArrAnimal[i]); // 한 행 전체를 의미 = 1차원 문자 배열과 같다
	}

	for  (i = 0; i < iArrLen; i++)
	{
		printf("%d번 동물은 %s\n",(i+1),szArrAnimal[i]);
	}
}