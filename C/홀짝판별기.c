#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

void main() {
	int array[2][5];
	int i,j,total=0;
	
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 5; i++) {
			scanf("%d", &array[j][i]);
		}
	}

	printf("even : ");
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 5; i++) {
			if (array[j][i] % 2 == 0)
				printf("%d, ", array[j][i]);
		}
	}
	printf("\nodd : ");
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 5; i++) {
			if (array[j][i] % 2 == 1)
				printf("%d, ", array[j][i]);
		}
	}
	scanf("%d", &i);
}