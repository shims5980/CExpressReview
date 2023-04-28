#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[32];
	char address[100];

	printf("이름을 입력하세요: ");
	gets_s(name, sizeof(name));	//지정한 배열의 크기를 넘겨줘 데이터 손실을 방지한다.
	printf("현재 거주하는 주소를 입력하세요: ");
	gets_s(address, sizeof(address));

	printf("안녕하세요, %s에 사는 %s씨\n", address, name);

	return 0;
}