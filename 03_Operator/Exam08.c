// Exam08.c

#include <stdio.h>

void main() 
{
	/*
		����ȯ -> �ڷ����� ��ȯ
			1. �ڵ�����ȯ
				(1) ���� -> �Ǽ�
				(2) �Ǽ� -> ����
				(3) ���� Ÿ�� ���� -> ū Ÿ�� ����
			2. ����� ����ȯ(casting)
			(type)�� �� �տ� ����Ͽ� ��ȯ
	*/


	// 1. �ڵ�����ȯ
	//	(1) ���� -> �Ǽ�
	double dNum = 123; // int -> double �ڵ�����ȯ
	//	(2) �Ǽ� -> ����
	int iNum = 126.123; // double -> int �ڵ�����ȯ
	//	(+) ���� -> ����
	char cNum = iNum; // int -> char �ڵ�����ȯ

	printf("%f\n", dNum);
	printf("%d\n", iNum);
	printf("%d\n", cNum);

	//	(3) ���� Ÿ�� ���� -> ū Ÿ�� ����
	printf("5 + 3.14 = %f\n", (5 + 3.14)); // int + double => double 


	// 2. ����� ����ȯ(casting)
	printf("5 + 3.14 = %d\n", (5 + (int)3.14)); // 5 + 3 --> 8 
	printf("5 + 3.14 = %d\n", (int)(5 + 3.14)); // (int)8.14 --> 8 

	// %f
	printf("5 + 3.14 = %f\n", (int)5 + 3.14); // 8.14


}