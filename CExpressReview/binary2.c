#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int buffer[SIZE];
	FILE* fp = NULL;

	fp = fopen("D:\ binary.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.\n");
		exit(1);
	}
	fread(buffer, sizeof(int), SIZE, fp);

	for (i = 0; i < SIZE; i++)
		printf("%d ", buffer[i]);
	printf("\n");

	fclose(fp);

	return 0;
}