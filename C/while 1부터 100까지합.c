#include<stdio.h>
#pragma warning (push,2)

int main() {
	int inital, total, i;
	total = 0;
	i = 100;
	inital = 1;
	while (inital <=i)
	{
		total +=inital ;
		inital++;
	}
	printf("%d\n", total);
	scanf_s("%d", &i);
}