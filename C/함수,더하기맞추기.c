#include<stdio.h>
int calc(int a, int b, int c) {
	int count = 0;
	while (count<3) {
		if (c == a + b) {
			return count;
		}
		else {
			count++; 
			printf("%d + %d : ",a, b);
			scanf("%d", &c);
		}
	}
	return count;
}


int main() {
	int num1, num2, sum, i;
	int array[4] = { 0 };
	while (1)
	{

		printf("Type two integers<Quit : 0 0> : ");
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0)break;
		printf("\n%d + %d : ", num1, num2);
		scanf("%d", &sum);
		switch (calc(num1, num2, sum)) {
		case(0):printf("excellent\n"); array[0]++;  break;
		case(1):printf("very good\n"); array[1]++; break;
		case(2):printf("good\n"); array[2]++; break;
		default:printf("bad : %d\n", num1 + num2); array[3]++;
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%d번째 맞힌 개수 : %d\n",i+1, array[i]);
	}
	printf("못맞힌 개수 : %d\n", array[3]);
}