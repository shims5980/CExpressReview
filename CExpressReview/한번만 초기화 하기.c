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
		printf("hw_init(): ��Ʈ��ũ ��ġ�� �ʱ�ȭ �մϴ�.\n");
		reset++;
	}
	else if (reset > 0)
		printf("hw_init(): �̹� �ʱ�ȭ �Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");
	else
		return 0;
}