#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vctor {
	double x;
	double y;
}Vector;
Vector get_vector_sum(Vector a, Vector b);

int main(void)
{
	Vector a = { 2.0, 3.0 };
	Vector b = { 5.0, 6.0 };
	Vector sum;

	sum = get_vector_sum(a, b);
	printf("벡터의 합은 (%.lf, %.lf)입니다.\n", sum.x, sum.y);

	return 0;
}

Vector get_vector_sum(Vector a, Vector b)
{
	Vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}