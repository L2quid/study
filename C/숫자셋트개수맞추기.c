#include <stdio.h>


int main()
{
	int num[100] = { 0, };
	int N, mn;
	int i = 1, j;
	int max = 0;

	scanf("%d", &N);
	while (i <= N)
	{
		mn = (N / i) % 10;

		if (mn == 9)
		{
			num[6] += 1;
		}
		else
		{
			num[mn] += 1;
		}

		i *= 10;
	}
	if (num[6] % 2 == 0)
	{
		num[6] = num[6] / 2;
	}
	else
	{
		num[6] = (num[6] / 2) + 1;
	}

	for (j = 0; j <= 8; j++)
	{
		if (num[j] > max)
			max = num[j];
	}
	if (N == 0) {
		max = 1;
	}
	printf("%d", max);

	return (0);
}