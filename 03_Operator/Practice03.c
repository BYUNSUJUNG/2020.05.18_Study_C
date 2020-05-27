/*
	세금계산기
		월급과 소득세 비율을 차례로 입력 받고,
		세금을 제한 실수령액을 출력하기.

		[출력결과]
		월급과 소득세 비율을 입력하세요 : 1500000 3
		실수령액은 1455000원 입니다.
*/


#include <stdio.h>

void main()
{
	// 1. 3개의 공간이 필요 (변수)
	int salary; // 월급
	int incomeTax;  // 소득세
	int netPay; // 실수령

	// 2. 출력 문구 만들기
	printf("월급과 소득세 비율을 입력하세요 : ");

	// 3. 입력 형식 만들기
	scanf("%d %d", &salary, &incomeTax);

	// 4. 식을 생성
	netPay = salary - (salary * ((float)incomeTax / 100)); // OR 100.0
	// 정수와 정수의 계산에서는 정수 값이 나온다.
	// 실수 값을 원하면 두 정수중 하나이상을 실수형으로 바꾸어야 한다.

	// 5. 입력한 값을 사용 (printf)
	// printf("월급은 %d원 입니다.\n", salary);
	// printf("소득세는%d원 입니다.\n", incomeTax);
	printf("실수령액은 %d원 입니다.\n", netPay);


	/*
		또 다른 식
		salary * (1-(incomeTax/100.0)) // 0.97의 금액를 구하는 방식
	*/

}