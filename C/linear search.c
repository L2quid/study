#include<stdio.h>

void main() {
	int array[5];
	int num1, i;
	int count;

	for (i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	printf("\nlist : ");
		for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	while (1) {
		printf("\n\nType a search value : (0 to quit)");
		scanf("%d", &num1);
		count = 0;
		if (num1 == 0) break;
		for (i = 0; i < 5; i++) {
			if (num1 == array[i]) {
				printf("\nposition : %d", i);
				count++;
			}
		}
		if (count == 0)printf("\nhave no %d\n", num1);
	}
	printf("Type any character : ");
	scanf("%d", &i);
}