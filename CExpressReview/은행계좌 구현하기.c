#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void save(int amount);
void print_bank(int money, int sum);

int main(void)
{
	srand(time(NULL));
	int i, r;

	printf("=====================================================\n");
	printf("\t입금\t\t출금\t\t잔고\n");
	printf("=====================================================\n");

	for(i = 0; i < 10; i++)
	{
		r = (rand() % 100001 + 50000) / 1000 * 1000;
		save(r);
		r = (rand() % 50001 - 50000) / 1000 * 1000;
		save(r);
	}

	return 0;
}

void save(int amount)
{
	static int sum = 0;

	sum += amount;
	print_bank(amount, sum);
}

void print_bank(int money, int sum)
{
	if (money > 0)
		printf("\t%d\t\t\t\t%d\n", money, sum);
	else
		printf("\t\t\t%d\t\t%d\n", money, sum);
}
