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

	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);

	printf("이름을 입력하시오: ");
	scanf("%s", s.name);

	printf("학점을 입력하시오: ");
	scanf("%lf", &s.grade);

	printf("\n학번: %d\n", s.num);
	printf("이름: %s\n", s.name);
	printf("학점: %.2lf\n", s.grade);

	return 0;
}