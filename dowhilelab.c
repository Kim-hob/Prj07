#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input = 0, result = 0, digit = 0;
	int deveider = 100;

	printf("���� ����[100~999] �Է�: ");
	scanf("%d", &input);
	result = input;
	do
	{
		digit = result / deveider ;
		result %= deveider;
		printf("%3d���� ���: %d\n", deveider, digit);
		deveider /= 10;
	} while (deveider >= 1);

		return 0;
}