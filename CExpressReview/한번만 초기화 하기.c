#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hw_init();

int main(void)
{
	hw_init();
	hw_init();
	hw_init();

	return 0;

}

void hw_init()
{
	static int reset = 0;

	if (reset == 0)
	{
		printf("hw_init(): 네트워크 장치를 초기화 합니다.\n");
		reset++;
	}
	else if (reset > 0)
		printf("hw_init(): 이미 초기화 되었으므로 초기화하지 않습니다.\n");
	else
		return 0;
}