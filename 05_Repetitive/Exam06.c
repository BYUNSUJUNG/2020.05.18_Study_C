// Exam06.c

#include <stdio.h>
#include <stdlib.h> // rand()를 사용하기 위한 헤더 파일 (standard library)
#include <time.h> // time()를 사용하기 위한 헤더 파일
/*
	do-while문, 숫자맞추기 게임
	1~100 숫자중 랜덤으로 정답 숫자 생성
	입력 숫자가 더 크면 "더 작은 수를 입력하세요"
	입력 숫자가 더 작으면 "더 큰 수를 입력하세요"

	정답 숫자 맞출 떄까지 반복 수행
	몇 회 만에 맞췄는지도 추가로 출력
	> "정답입니다! 4회 만에 정답!"

*/
void main() 
{
	int iInput = 0; // 입력 받을 변수
	int iAnswer = 0; // 정답 숫자 변수
	int i = 0; // 입력 횟수

	/*
		rand() : 0 ~ 32767 중에 하나를 반환
			> stdlib.h 헤더 파일 필요
			> seed 값이 1로 설정된다. => 랜덤 수이긴 하지만, 값이 고정되어 있다 
				첫번째 수는 무조건 41

		srand() : seed값을 변경하는 함수
			> seed값이 1로 설정되기 때문에 매번 동일한 난수 발생
			> stdlib.h 헤더 파일 필요
			
			> 이 또한도 한계를 느낌

		time() : 1970.01.01 자정 이후 경과된 시간을 반환 
				> 인자 값으로 null을 주게되면 현재 시간을 반환
				> time.h 헤더 파일 필요
	*/

	
	//srand((int)time(NULL)); // time에서 가져오는 수의 자료형을 알 수 없기에 int로 값 변환해줌 (3)
	//srand(10); // seed 값을 변경하는 것도 한계를 느낌 (2)
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", rand()); // seed값이 고정되어 있어서 한계를 느낌 (1)

		/*
		//				(0 ~ 99)+1 => (1 ~ 100)
		printf("%d\n", (rand() % 100)+1);
			// 12345 % 100 ---> 45
			// 12300 % 100 ---> 0
			// 12301 % 100 ---> 1
			// 12399 % 100 ---> 99
		*/

	}
		// 문제 

	i = 0;	
	iAnswer = rand() % 100 + 1;
	printf("관리자용 정답 공개: %d \n", iAnswer);


	do {
		printf("===============\n");

		i++; // 정답 도전 횟수 +1
		printf("숫자를 입력해주세요: ");
		scanf("%d", &iInput);

		if (iInput > iAnswer) 
		{
			printf("더 작은 수를 입력하세요\n");
		}
		else if(iInput < iAnswer) {
			printf("더 큰 수를 입력하세요\n");
		}

	} while (iInput != iAnswer); // iInput == iAnswer시 do-while 반복문 탈출

	printf("===============\n");
	printf("정답입니다! %d회 만에 정답!\n",i);

}