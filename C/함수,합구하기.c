#include<stdio.h>

int sum(int a,int b,int c) {
	int total = 0;
	for (a; a <= b; a+= c) {
		total += a;
	}
	return total;
}

int main() {
	int num1, num2, in;

	scanf("%d %d %d", &num1, &num2, &in);
	printf("%d", sum(num1, num2, in));
	scanf("%d", &num1);
}