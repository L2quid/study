#include<stdio.h>
#include<math.h>

void main() {
	int num1, n, i,total=0;
	scanf_s("%d", &n);
	scanf_s("%d", &num1);
	for (i = n; i > 0; i--) {
		total += num1 / pow(10.0,i);
		num1 = num1 % (int)pow(10.0, i);
	
	}
	printf("%d", total);
}