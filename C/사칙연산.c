#include<stdio.h>

int main() {
	
	int a, b;

	printf("�� ���� �Է� �� �ּ���.\n");
	scanf_s("%i %i", &a, &b);

	printf("  %i + %i = %i �Դϴ�.\n", a, b, a + b);
	printf("  %i - %i = %i �Դϴ�.\n", a, b, a - b);
	printf("  %i / %i = %i �Դϴ�.\n", a, b, a / b);
	printf("  %i * %i = %i �Դϴ�.\n", a, b, a * b);
	printf("  %i %% %i = %i �Դϴ�.\n", a, b, a % b);
	scanf_s("%d",&a);
}