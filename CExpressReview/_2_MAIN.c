#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);

extern int MOD;


int main(void)
{
	int i;

	MOD = 32767;
	for (i = 0; i < 10; i++)
		printf("%d ", random_i());
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%lf ", random_f());
	printf("\n");

	return 0;
}