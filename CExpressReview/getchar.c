#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;	//getchar�� ��ȯ���� char���� �ƴ� int ���̶� int �� ���� ����

	while ((ch = getchar()) != EOF)	// getchar���� EOF == ctrl+z
		putchar(ch);

	return 0;
}