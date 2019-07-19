#include<stdio.h>

int main() {

	int a;

	scanf_s("%o", &a);
	printf("i= %i\n", a);
	printf("d= %d\n", a);
	printf("x= %x\n", a);
	printf("u= %u\n", a);
	printf("o= %o\n", a);

	scanf_s("%d", &a);
}
