#include<stdio.h>

void swap(int *a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {

	int i, j;
	printf("type two integer : ");
	scanf("%d %d", &i, &j);
	printf("\n\n before swap: \n i=%d j=%d", i, j);
	swap(&i, &j);
	printf("\n\n after swap: \n i=%d j=%d", i, j);

	scanf("%d", &i);
}