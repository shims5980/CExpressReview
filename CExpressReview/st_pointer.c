#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
	int month;
	int day;
	int year;
}Date;
typedef struct student {
	char name[100];
	Date *birth;
}Student;

int main(void)
{
	Date d = { 1, 1, 2000 };
	Student s = { "Unknown" };

	s.birth = &d;

	printf("�̸�: %s\n", s.name);
	printf("����: %d�� %02d�� %02d��\n", s.birth->year, s.birth->month, s.birth->day);

	return 0;
}