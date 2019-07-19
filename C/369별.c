#include<stdio.h>

int main()
{
	int n, m, t, o, i;
	printf("0~999 사이의 숫자중 3,6,9가 들어가면 *이 출력되는 프로그램입니다.\n");
	printf("0~999 사이의 숫자를 입력해주세요\n");
	scanf_s("%d", &n);

	if (n < 1 || n>999)
		printf("범위를 벗어난 수입니다.다시 입력해주세요\n");
	else
	{
		for (i = 1; i <= n; i++)
		{
			m = i / 100;
			t = i / 10;
			o = i % 10;
			printf("%d",i);
			if (m!=0&&m%3==0)
				printf("*");

			if (t != 0 && t % 3 == 0)
				printf("*");

			if (o != 0 && o % 3 == 0)
				printf("*");
			printf("\n");

		}
	}
	return 0;
}