#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* p = "Hello, world!";
	printf("%s\n", p);

	p = "Welcome to C world!";
	printf("%s\n", p);

	p = "GoodBye!";
	printf("%s\n", p);

	// p[0] = 'a'; 실행 오류

	return 0;
}