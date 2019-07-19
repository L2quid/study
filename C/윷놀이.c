#include<stdio.h>
int main() {
	int x[4] = { 0 };
	int count = 64;
	for (int j = 3; j > 0; j--) {
		for (int i = 0; i < 4; i++) {
			scanf("%d", &x[i]);
			if (x[i] == 0)
				count++;
		}
		if (count == 64)
			count = 69;
		printf("%c\n", count);
		count = 64;
	}
}