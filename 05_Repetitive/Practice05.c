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
	int iInput = 0; // �Է� �޴� ���� 

	do {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &iInput); // & �ʼ�


		if (iInput <= 0) { // 0 ����
			printf("�ٽ� �Է��ϼ���.\n");
			// �ؿ� else�� ���� ������ continue;
		}
		else { // 0 �ʰ�
			switch (iInput) { 
				
			case 1:	// 	1 : 1st
				printf("%dst\n", iInput);
				break;
			case 2:	//	2 : 2nd
				printf("%dnd\n", iInput);
				break;
			case 3: //	3 : 3rd
				printf("%drd\n", iInput);
				break;
			default: //	�� �� : ~th
				printf("%dth\n", iInput);
				break;
			}
		}
		
	} while (1); // ���� �ݺ�
}