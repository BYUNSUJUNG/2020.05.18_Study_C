/*
	�� ����� �� ���� �ٱ��Ͽ�??
		- 1���� �ٱ��Ͽ��� 10���� ����� ���� �� �ִ�.
		- ����, ���� ���� ����� 142���� ���� 15���� �ٱ��ϰ� �ʿ��ϴ�.
		- �ٱ��� ������ ���ϴ� �ڵ带 �ۼ��ϼ���.  		

		���׿����� ����ϱ�
		hint. �������� ������ �� ����� ����..!

		int iApple = 142;
		int iBucektSize = 10;
		
		[��°��]
		142���� ����� ��� ���� 15���� �ٱ��ϰ� �ʿ��մϴ�.
*/

#include <stdio.h>

void main()
{

	// 1. 5���� ������ �ʿ� (����)
	int iApple = 142;
	int iBucektSize = 10;
	int iBucektNum = 0;

	// int iNum1 = 0, iNum2 = 0;

	iBucektNum = ((iApple%iBucektSize) == 0) ? (iApple / iBucektSize) : ((iApple / iBucektSize) + 1);
	// �� �ٸ� ���
	// iApple%iBucektSize�� ��� ���� 0�� �ƴϸ� ��� 1�� true���� ������.
	// iBucektNum = iApple / iBucektSize + (iApple%iBucektSize ? 1 : 0);

	// 2. ��� ���� �����
	printf("%d���� ����� ��� ���� %d���� �ٱ��ϰ� �ʿ��մϴ�. ", iApple, iBucektNum); 
	

}