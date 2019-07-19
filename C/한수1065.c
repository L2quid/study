#include<stdio.h>

int main()
{
	int N, i, j;
	int total_hansu = 0;
	int temp;
	int hund, thou,ten, one;
	int dif1, dif2;

	scanf_s("%d", &N);
	for (i = 0; i <= N; i++)
	{
		if (i < 100 && i>0)
		{
			total_hansu++;
		}
		else if (i >= 100 && i < 1000)
		{


			hund = i / 100;
			ten = i % 100 / 10;
			one = i % 10;
			dif1 = hund - ten;
			dif2 = ten - one;
			if (dif1 == dif2)
			{
				total_hansu++;
			}
		}
		else if (i == 1000)
			;
	}
	printf("%d", total_hansu);
}