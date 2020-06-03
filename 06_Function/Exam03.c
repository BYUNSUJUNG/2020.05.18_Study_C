//Exam03.c

#include <stdio.h>

void func1(int iNum);
void func2(int iNum);
void func3(int iNum);

void main()
{
	printf("main 시작\n");
	func1(3);
	printf("main 끝\n");

	// 코드의 흐름
	// main -> f1 -> f2 -> f3 -> f2 -> f1 -> main
}

void func1(int iNum)
{
	printf("Func1, 시작 iNum = %d\n",iNum);
	func2(iNum - 1);
	printf("Func1, 끝 iNum = %d\n", iNum);
}
void func2(int iNum)
{
	printf("Func2, 시작 iNum = %d\n", iNum);
	func3(iNum - 1);
	printf("Func2, 끝 iNum = %d\n", iNum);
}
void func3(int iNum)
{
	printf("Func3, 시작 iNum = %d\n", iNum);
	printf("Func3, 끝 iNum = %d\n", iNum);
}