
/*	어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm 크고
	몸무게는 아버지와 어머니의 몸무게의 평균보다 4.5kg 가볍다고 한다.
	키와 몸무게를 멤버변수로 갖는 구조체를 정의하고 
	아버지와 어머니의 키와 몸무게를 입력받아 
	학생의 키와 몸무게를 출력하는 프로그램을 작성하시오.
	(키는 정수미만 버림하고 몸무게는 반올림하여 소수 첫째자리까지 나타낸다)

	입력 예)
	아버지의 키와 몸무게? 175 68.8
	어머니의 키와 몸무게? 166 56.4

	출력 예)
	학생의 키 : 175cm
	학생의 몸무게 : 58.1kg
*/

#include <stdio.h>


typedef struct _FATHER
{
	double dHeight;
	double dWeight;

} FATHER;

typedef struct _MOTHER
{
	double dHeight;
	double dWeight;

} MOTHER;

typedef struct _STUDENT
{
	double dHeight;
	double dWeight;

} STUDENT;


void main()
{
	FATHER F = { 0, };
	MOTHER M = { 0, };
	STUDENT S = { 0, };

	double f_dH = 0;
	double f_dW = 0;
	double m_dH;
	double m_dW;

	double dHAvg = 0; // 아버지와 어머니의 키 평균
	double dWAvg = 0; // 아버지와 어머니의 몸무게 평균

	printf("아버지의 키와 몸무게?");
	scanf("%f %f", &f_dH, &f_dH);

	printf("%d\n ", f_dH);
	printf("%d\n ", f_dW);
	printf("==============");
	F.dHeight = f_dH;
	F.dWeight = f_dW;
	printf("%f\n", F.dHeight);
	printf("%f\n",F.dWeight);

	printf("어머니의 키와 몸무게?");
	scanf("%f %f", &m_dH, &m_dW);
	M.dHeight = m_dH;
	M.dWeight = m_dW;

	dHAvg = (F.dHeight + M.dHeight) / 2.0;
	dWAvg = (F.dWeight + M.dWeight) / 2.0;

	printf("학생의 키 : %.0f\n", dHAvg+5);
	printf("학생의 몸무게 : %.1f\n", dWAvg-4.5);


}