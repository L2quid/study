#include<stdio.h>
int main() {
	int i, sum=0;
	int x[5] = { 0 };
		for (i = 0; i<5; i++) 
		{
			scanf("%d", &x[i]);
			if (x[i] < 40)
				x[i] = 40;
			sum =sum+ x[i];
		}
		printf("%d", sum / 5);
}