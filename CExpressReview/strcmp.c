#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80];
	char s2[80];
	int result;

	printf("ù ��° �ܾ �Է��Ͻÿ�: ");
	scanf("%s", s1);
	printf("�� ��° �ܾ �Է��Ͻÿ�: ");
	scanf("%s", s2);

	result = strcmp(s1, s2);	// ���������� ���̸� -1, ������ 0, �ڸ� 1
	if (result < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	else if (result == 0)
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);

	return 0;
}