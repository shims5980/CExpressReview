#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char buffer[50];
	int x = 10, y = 20, result;

	result = x + y;
	sprintf(buffer, "���� %d�� ���� %d�� ���ϸ� %d�Դϴ�.", x, y, result);
	printf("%s \n", buffer);

	return 0;
}