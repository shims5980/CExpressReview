#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];

	strncpy(str, "Hello, world from ", sizeof(str));
	strncat(str, "strncpy ", sizeof("strncpy "));
	strncat(str, "and ", sizeof("and "));
	strncat(str, "strncat!", sizeof("strncat!"));
	printf("string = %s\n", str);

	return 0;
}