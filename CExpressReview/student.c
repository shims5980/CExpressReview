#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	int num;
	char name[20];
	double grade;
}Student;

int main(void)
{
	Student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.num);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", s.name);

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &s.grade);

	printf("\n�й�: %d\n", s.num);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2lf\n", s.grade);

	return 0;
}