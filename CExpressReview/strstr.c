#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "A bird in hand is worth two in the bush";
	char sub[] = "bird";
	char* p;
	int loc;

	p = strstr(s, sub);

	if (p == NULL)
		printf("%s�� �߰ߵ��� �ʾ���\n", sub);
	else
	{
		loc = (int)(p - s);
		printf("'%s'���� ù ���� %s�� %d���� �߰ߵǾ���\n", s, sub, loc);
	}

	return 0;
}