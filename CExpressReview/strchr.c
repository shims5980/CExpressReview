#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c);
	if (p == NULL)
		printf("%c�� �߰ߵ��� �ʾ���\n", c);
	else
	{
		loc = (int)(p - s);
		printf("%s���� ù ���� %c�� %d���� �߰ߵǾ���.\n", s, c, loc);
	}

	return 0;
}