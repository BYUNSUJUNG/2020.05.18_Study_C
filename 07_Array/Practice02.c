#include <stdio.h>

int main() 
{
	// szSource �迭�� �̿��Ͽ�, szTarget�̶�� �迭�� ABCCBA �����ϱ�
	//		1. for�� �̿�

	char szSource[]		= "ABC";
	
	// �ڵ� �ۼ�
	
	char szTarget[7]	= {0, };
	int	 i = 0; // for���� �̿�

	for (i = 0; i < 3; i++)
	{
		szTarget[i] = szSource[i];
		szTarget[5-i] = szSource[i];
	}


	printf("szTarget = %s\n", szTarget);
}