/*
	내 사과는 몇 개의 바구니에??
		- 1개의 바구니에는 10개의 사과를 담을 수 있다.
		- 만약, 내가 가진 사과가 142개일 때는 15개의 바구니가 필요하다.
		- 바구니 개수를 구하는 코드를 작성하세요.  		

		삼항연산자 사용하기
		hint. 나머지를 구했을 때 결과에 따라..!

		int iApple = 142;
		int iBucektSize = 10;
		
		[출력결과]
		142개의 사과를 담기 위해 15개의 바구니가 필요합니다.
*/

#include <stdio.h>

void main()
{

	// 1. 5개의 공간이 필요 (변수)
	int iApple = 142;
	int iBucektSize = 10;
	int iBucektNum = 0;

	// int iNum1 = 0, iNum2 = 0;

	iBucektNum = ((iApple%iBucektSize) == 0) ? (iApple / iBucektSize) : ((iApple / iBucektSize) + 1);
	// 또 다른 방법
	// iApple%iBucektSize의 결과 값이 0이 아니면 모두 1로 true값을 가진다.
	// iBucektNum = iApple / iBucektSize + (iApple%iBucektSize ? 1 : 0);

	// 2. 출력 문구 만들기
	printf("%d개의 사과를 담기 위해 %d개의 바구니가 필요합니다. ", iApple, iBucektNum); 
	

}