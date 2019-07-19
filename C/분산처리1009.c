#include<stdio.h>
int main() {
	int t, a, b, i;
	int c=1;
	for (scanf("%d", &t); t--;) {
		scanf("%d%d", &a, &b);
		for (i = 0; i < b; i++) {
			c *= a;
			c %= 10;
		}
		if (c == 0)
			printf("10\n");
		else
			printf("%d\n", c);
		c = 1;
	}
}