#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[32];
	char address[100];

	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, sizeof(name));	//������ �迭�� ũ�⸦ �Ѱ��� ������ �ս��� �����Ѵ�.
	printf("���� �����ϴ� �ּҸ� �Է��ϼ���: ");
	gets_s(address, sizeof(address));

	printf("�ȳ��ϼ���, %s�� ��� %s��\n", address, name);

	return 0;
}