//Struct.c

/*
	����ü - ����� ���� �ڷ��� (type)
		�پ��� Ÿ���� �������� ���� �ڷ���
			> �迭: ���� Ÿ�� �������� ����
			> ����ü: ���� Ÿ�� �������� ����

		- ����ü�� �̸� �����ϰ� ����Ѵ�.
			> �Լ� ����� �� (�Լ� �������� ����� �� �ֱ� ����)
			> ����ü�� ���� = ���ο� �ڷ����� �������

		- ����ü ����� �迭, ������, �ٸ� ����ü � ����� �� �ִ�
			> ����ȭ ������ ��� ��
		
		- ����ü ������ ������� ���� '����'�̴�
			> �Ϲ� ����ó�� ����� �� �ִ�

*/

#include <stdio.h>
#include <string.h> // strcpy() ���

// (1) ����ü�� �⺻ ����
struct STUDENT
{
	// ��� ����
	char	szName[20]; //  �л� �̸� --> 20byte
	int		iAge;		//  �л� ���� --> 4byte
	double	dGrade;		//  �л� ���� --> 8byte
	// ����ü ��� ����ÿ��� �ʱ�ȭ�� �� �� ����
	// �� ���� ������ ����� ���� �ƴ϶� 
	// �̷� �ڷ����� �ִٶ�� ������ �ϴ� �� ��
};
// (2) typedef�� �̿��Ͽ� struct ���� ����
typedef struct _EMPLOYEE // _EMPLOYEE ������� ���� �̸��̶�, _�� �տ� ����(���ʾƴ�)
{
	// ��� ����
	char	szName[20];	// ��� �̸�
	int		iAge;		// ��� ����
	int		iSalary;	// ��� ����

} EMPLOYEE;


void main() 
{
	// 1-1. ����ü�� ����ϸ� �л� 10���� ��, ����ü ���� 10���� �ȴ�.
	struct STUDENT sKim1; // STUDENT �ڷ������� ���� ����(�ʱ�ȭ���� �ʾ���)
	struct STUDENT sKim2 = { 0, }; // �ʱ�ȭ (�迭�� ����)
	struct STUDENT sLee = { "�̸���",20,99.9 }; // ��� Ÿ�� ������ �°� �ʱⰪ

	// 1-2. ����ü�� ������� �ʾҴٸ�, ������ ������ 10���� ������ �Ѵ�.
	char szName1[20];	// �л�1�� �̸�
	int iAge1;			// �л�1�� ����
	double dGrade1;		// �л�1�� ����

	// 2. typedef�� �̿��Ͽ� struct ���� ����
	EMPLOYEE sHong = { 0, }; // ����ü�� �ٷ� �� ���� ����Ʈ~! (typedef, 0�ʱ�ȭ)
	struct _EMPLOYEE sHong2 = { 0, }; // ����, �̷��Ե� ��밡��
	EMPLOYEE * pHong = NULL; // ����ü�� ���� �ڷ����̱⿡ ������ ������ ���� ����
	pHong = &sHong; // �ռ� ��� ������ ����� ����, �ڷ����� �ٲ� ��

	// ����ü �������� ��(.)�� ���̸� ����ü ����� ����(���)�� �� �ִ�.
	sHong.iAge = 20;
	sHong.iSalary = 2000000;
	// sHong.szName = "ȫ�浿"; // �迭���� ���ڿ��� �ʱ�ȭ������ ���� �� �ִ�
	
	// strcpy(); �Լ��� ���� ���ڿ� ���� --> string.h �ʿ�
	strcpy(sHong.szName, "ȫ�浿");
	printf("�̸�: %s\n", sHong.szName);
	printf("����: %d\n", sHong.iAge);
	printf("����: %d\n", sHong.iSalary);

	//����ü�� ������ ������ ����� ������ ���� ��(.)��� -> ���
	pHong->iAge = 21; // sHong ����ü�� ���󰡼� ����� ���
	pHong->iSalary = 2500000; // sHong ����ü�� ���󰡼� ����� ���
	
	strcpy(pHong->szName, "ȫ���");
	printf("�̸�: %s\n", pHong->szName);
	printf("����: %d\n", pHong->iAge);
	printf("����: %d\n", pHong->iSalary);

	printf("����: %d\n", (*pHong).iSalary);

	strcpy((*pHong).szName, "ȫ���");
	printf("�̸�: %s\n", pHong->szName);

	
}