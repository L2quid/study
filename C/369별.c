#include<stdio.h>

int main()
{
	int n, m, t, o, i;
	printf("0~999 ������ ������ 3,6,9�� ���� *�� ��µǴ� ���α׷��Դϴ�.\n");
	printf("0~999 ������ ���ڸ� �Է����ּ���\n");
	scanf_s("%d", &n);

	if (n < 1 || n>999)
		printf("������ ��� ���Դϴ�.�ٽ� �Է����ּ���\n");
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