#include<stdio.h>

int main() {
	int array[8];
	int count = 0, i,j;

	for (j = 0; j < 8; j++) {
		scanf("%d", &array[j]);
	}
	for (i = 0; i < 7; i++) {
		if (array[i] < array[i + 1]) {
			count++;
		}
		else if (array[i] > array[i + 1]) {
			count--;
		}
	}
	switch (count)
	{
	case(7):printf("ascending"); break;
	case(-7):printf("descending"); break;
	default:printf("mixed"); break;
	}
	return(0);
}