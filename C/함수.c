#include<stdio.h>

void hello() {
	printf("hello\n");
	return;
}
int total(int n) {
	int i;
	int t = 0;
	for (i = 0; i <= n; i++) {
		t += i;
	}
	return(t);
}

void main() {
	int x;
	hello();
	scanf("%d",&x);
	printf("\n%d\n", total(x));
	scanf("%d", &x);
}