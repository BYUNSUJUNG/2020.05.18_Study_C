#include <stdio.h>

void main()
{
	// �迭�� ��� ��� ������ �� ���ϱ�
	// for�� �̿�
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	
	/////////////////////////////////////////////////////////////
	int iArrLen = sizeof(iArr) / sizeof(iArr[0]); 
					// 40byte / 4byte => 10 (�迭�� ����)
	int iArrSum = 0; // �迭�� ��

	for (int i = 0; i < iArrLen; i++)
	{
		iArrSum += iArr[i];
	}
	printf("iArr�� ��: %d\n", iArrSum);

	
}