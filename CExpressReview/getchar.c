#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;	//getchar의 반환형은 char형이 아닌 int 형이라 int 형 변수 선언

	while ((ch = getchar()) != EOF)	// getchar에서 EOF == ctrl+z
		putchar(ch);

	return 0;
}