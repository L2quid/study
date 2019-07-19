#include<stdio.h>
int a, b, n;
int fibonacci(int n) {
	if (n == 0) {
		a++;
		return 0;
	}
	else if (n == 1) {
		b++;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main()
{
	int y, r;
	for (scanf("%d", &y); y--;) {
		scanf("%d", &r);
		fibonacci(r);
		printf("%d %d\n", a, b);
		a = 0;
		b = 0;
	}
}