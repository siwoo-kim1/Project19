
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	int a;
	int b;
	int c;
	int d;

	printf("�� ������ �Է����ּ���.: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d�� %d�� ���� ��� �������� ���� %d, %d�̴�.\n", a, b, a / b, a % b);
	}
	else 
	{
		printf("%d�� %d�� ���� ��� �������� ���� %d, %d�̴�.\n", b, a, b / a, b % a);
	}



}



