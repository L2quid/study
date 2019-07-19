#include<stdio.h>

int main() {

	int i;
	int *p;

	p = &i;
	i = 1;

	printf("p=%x\n",p);
	printf("&p=%x\n", &p);
	printf("i=%x\n", i);
	printf("&i=%x\n", &i);

	*p = 10;
	printf("p=%x\n", p);
	printf("&p=%x\n", &p);
	printf("i=%x\n", i);
	printf("&i=%x\n", &i);

	scanf_s("%d", &i);



}