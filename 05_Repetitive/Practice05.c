/*
	���� ������ �Է¹޾Ƽ� 
	1 : 1st
	2 : 2nd
	3 : 3rd
		�� �� : ~th
		0���� : "�ٽ� �Է��ϼ���."
 
	do~while�� switch~case�� �ݶ�

	[��°��]
	���ڸ� �Է��ϼ��� : -1
	�ٽ� �Է��ϼ���.
	���ڸ� �Է��ϼ��� : 1
	1st

	���ڸ� �Է��ϼ��� : 10
	10th
*/

#include <stdio.h>

void main()
{
	int iInput = 0;

	do {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &iInput);


		if (iInput <= 0) {
			printf("�ٽ� �Է��ϼ���.\n");
		}
		else {
			switch (iInput) {
			case 1:
				printf("%dst\n", iInput);
				break;
			case 2:
				printf("%dnd\n", iInput);
				break;
			case 3:
				printf("%drd\n", iInput);
				break;
			default:
				printf("%dth\n", iInput);
				break;
			}
		}
		
	} while (1);
}