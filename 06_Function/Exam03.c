//Exam03.c

#include <stdio.h>

void func1(int iNum);
void func2(int iNum);
void func3(int iNum);

void main()
{
	printf("main ����\n");
	func1(3);
	printf("main ��\n");

	// �ڵ��� �帧
	// main -> f1 -> f2 -> f3 -> f2 -> f1 -> main
}

void func1(int iNum)
{
	printf("Func1, ���� iNum = %d\n",iNum);
	func2(iNum - 1);
	printf("Func1, �� iNum = %d\n", iNum);
}
void func2(int iNum)
{
	printf("Func2, ���� iNum = %d\n", iNum);
	func3(iNum - 1);
	printf("Func2, �� iNum = %d\n", iNum);
}
void func3(int iNum)
{
	printf("Func3, ���� iNum = %d\n", iNum);
	printf("Func3, �� iNum = %d\n", iNum);
}