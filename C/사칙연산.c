#include<stdio.h>

int main() {
	
	int a, b;

	printf("두 수를 입력 해 주세요.\n");
	scanf_s("%i %i", &a, &b);

	printf("  %i + %i = %i 입니다.\n", a, b, a + b);
	printf("  %i - %i = %i 입니다.\n", a, b, a - b);
	printf("  %i / %i = %i 입니다.\n", a, b, a / b);
	printf("  %i * %i = %i 입니다.\n", a, b, a * b);
	printf("  %i %% %i = %i 입니다.\n", a, b, a % b);
	scanf_s("%d",&a);
}