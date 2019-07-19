#include<stdio.h>

void main() {
	int array[5];
	int temp, i, count=0;

	printf("\ntype 5 integer : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &array[i]);}
	printf("\nbefore sort : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	while (count != 4) {
		count = 0;
		for (i = 0; i < 4; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			else count++;
		}
	}
	printf("\n\nafter sort : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	scanf("%d", &i);
}