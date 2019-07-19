#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *eng[] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten" };
int calc(int a,char *b) {
	int count = 0;
	while (count<3) {
		if (strcmp(eng[a],b)==0) {
			return count;
		}
		else {
			count++;
			printf("\n%d는 영어로 무엇입니까? : ", a);
			scanf("%s", b);
		}
	}
	return count;
}


int main() {
	int num1, num2, i;
	char *string = (char *)malloc(1);
	int array[4] = { 0 };
	while (1)
	{
		printf("=========================================\n");
		printf("Type two integers<Quit : 10이상> : ");
		scanf("%d", &num1);
		if (num1 > 10)break;
		printf("\n%d는 영어로 무엇입니까? : ", num1);
		scanf("%s", string);
		switch (calc(num1,string)) {
		case(0):printf("\nexcellent\n"); array[0]++;  break;
		case(1):printf("\nvery good\n"); array[1]++; break;
		case(2):printf("\ngood\n"); array[2]++; break;
		default:printf("\nbad : %s\n",eng[num1]); array[3]++;
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%d번째 맞힌 개수 : %d\n", i + 1, array[i]);
	}
	printf("못맞힌 개수 : %d\n", array[3]);
}