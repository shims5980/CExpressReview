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

	printf("이름: %s\n", s.name);
	printf("생일: %d년 %02d월 %02d일\n", s.birth->year, s.birth->month, s.birth->day);

	return 0;
}