#include<stdio.h>
int factorial(int a)
{
	int i;
	int f = 1;
	for (i = 1; i <= a; i++)
	{
		f = f*i;
		if (i == 1)
			printf("%d", i);
		else
			printf("*%d", i);
	}
		printf("=%d", f);
	return f;
}


int main()
{
	int n;
	int a;
	printf("N!�� ���ϴ� ���α׷��̴�. N=?.");
	scanf_s("%d", &n);
	if (n < 1||n>10)
		printf("1~10 ������ ���� �Է��϶�.\n");
	else
	{
		a = factorial(n);
		printf("\n%d!�� %d�̴�.\n", n, a);
	}
	return 0;

}