// Exam01.c

// ����ü�ȿ� �Ǵٸ� ����ü
// �Ű������� ���

#include <stdio.h>


typedef struct _POINT
{
	int x;
	int y;
} POINT;
// ����ü �ȿ� �� �ٸ� ����ü�� ����� ��������,
// �� ����ü�� �� ���� ����Ǿ� �־���Ѵ�.

typedef struct _CIRCLE
{
	POINT sPoint; // ��ǥ(����)
	int iLen;	// ������

} CIRCLE;

// [����]
void setCircleVal(CIRCLE sCircle);
void setCircleRef(CIRCLE *pCircle); // CIRCLE Ÿ�� ������ �ּ� ���� ���� �ްڴ� (������ ����)

void main() {
	POINT sPoint = { 0, }; // POINT�� CIRCLE�ȿ� �ִٰ��ؼ� ���� ��� ���ϴ°��� �ƴ�
	CIRCLE c1 = { 0, };
	CIRCLE c2 = { 0, };
	CIRCLE c3 = { 0, };

	printf("c1�� ũ��: %d\n", sizeof(c1)); // 4x3 = 12
	
	// ����ü�� ����� ����ü�� ��, �� ��(.)�� ��� �����Ѵ�.
	printf("c1 ��ǥ: (%d,%d), ������: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	// [ȣ��]
	setCircleVal(c1); // Call By Value
	// c1�� ���� �ٲ��� ����
	printf("c1 ��ǥ: (%d,%d), ������: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	setCircleRef(&c1);
	// c1�� ���� �ٲ�
	printf("c1 ��ǥ: (%d,%d), ������: %d \n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	/*
		setCircleVal ���� ȣ���� ������ 12byte ������ ����
		(�Ű����� Ÿ���� CIRCLE - 12byte)
		> ����ü�� ũ�Ⱑ ũ�� �� ũ�⸸ŭ ����
		> ���� ȣ���� ���� ���α׷��� ����� �Ѵ�.

		setCircleRef ���� ȣ���� ������ 4byte ������ ����
		(�Ű������� ������ 4byte)

		����, ������ ������ �ַ� ����ϴ� ���̴�.
	*/

	// ��� �ϳ��� �����ϴ� ���
	c2.sPoint.x = c1.sPoint.x;
	c2.sPoint.y = c1.sPoint.y;
	c2.iLen = c1.iLen;
	printf("c2 ��ǥ: (%d,%d), ������: %d \n", c2.sPoint.x, c2.sPoint.y, c2.iLen);

	c3 = c2 // �ڷ����� ���� ������ ���� ����
	// if(c1 == c3) {} �Ұ��� --> �츮�� ������ �ڷ����̱� ������ ��� ������ �𸥴�.


}
// [����]
void setCircleVal(CIRCLE sCircle) // �Լ� ȣ��� 12byte¥�� CIRCLE ������ ���� ����
{
	sCircle.sPoint.x = 3;
	sCircle.sPoint.y = 4;
	sCircle.iLen = 5;
	printf("setCircleVal �Լ� �� ��ǥ: (%d,%d), ������: %d \n", 
		sCircle.sPoint.x, sCircle.sPoint.y, sCircle.iLen);

}

void setCircleRef(CIRCLE *pCircle)  // ������ ����
{
	pCircle->sPoint.x = 5;
	pCircle->sPoint.y = 6;
	pCircle->iLen = 10;
	printf("setCircleRef �Լ� �� ��ǥ: (%d,%d), ������: %d \n",
		pCircle->sPoint.x, pCircle->sPoint.y, pCircle->iLen);
	// pCircle�� ����ü�� ������ ���� : �ش� �ּ��� ��� ���� �� -> ���
	// ����� �����ߴ��� sPoint�� �ִ�. ����Ʈ ������ �ƴ� (�Ϲݱ���ü ����)
	// �׷��� ��(.)�� ����ؼ� ����
}