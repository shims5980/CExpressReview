#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void)
{
	int n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�.\n", n, factorial(n));

	return 0;
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}