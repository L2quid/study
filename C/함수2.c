#include<stdio.h>
int num1, num2, num3, n;

int one(int a, int b, int c)
{
	int res;
	res = a % b *c;
	printf("%d %% %d * %d = %d �Դϴ�.\n",a,b,c,res);
	return 0;
}
int two(int a, int b, int c)
{
	int res;
	res = a * b - c;
	printf("%d * %d - %d = %d �Դϴ�.\n", a, b, c, res);
	return 0;
}

int main()
{
	printf("1. n %% n * n \t 2. n * n - n �� ����ϴ� ���α׷� �Դϴ�.");
		while (1)
		{
			printf(" \n��ȣ�� �Է��ϼ���.\n");
			scanf_s("%d", &n);
			switch (n)
			{
				case(1):
				{
					printf("�� ������ �Է����ּ���.\n");
					scanf_s("%d %d %d", &num1, &num2, &num3);
					if (num2 == 0)
					{
						printf("�и�� 0�� �ƴϿ��� �մϴ�. �ٽ��Է����ּ���.");
						continue;
					}
					one(num1, num2, num3);
					break;
				}
				case(2):
				{
					printf("�� ������ �Է����ּ���.\n");
					scanf_s("%d %d %d", &num1, &num2, &num3);
					two(num1, num2, num3);
					break;
				}
				default:
				{
					printf("�ٽ� �Է����ּ���.\n");
					continue;
				}
		}
			printf("����Ϸ��� 1�� �׸��Ϸ��� 2���� �Է��ϼ���.\n");
			scanf_s("%d", &n);
			if (n == 1)
				continue;
			if (n == 2)
				break;
			else
				printf("�߸��� �Է��Դϴ�.\n");
	}
		return 0;
}
