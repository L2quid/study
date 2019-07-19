#include<stdio.h>
int num1, num2, num3, n;

int one(int a, int b, int c)
{
	int res;
	res = a % b *c;
	printf("%d %% %d * %d = %d 입니다.\n",a,b,c,res);
	return 0;
}
int two(int a, int b, int c)
{
	int res;
	res = a * b - c;
	printf("%d * %d - %d = %d 입니다.\n", a, b, c, res);
	return 0;
}

int main()
{
	printf("1. n %% n * n \t 2. n * n - n 을 계산하는 프로그램 입니다.");
		while (1)
		{
			printf(" \n번호를 입력하세요.\n");
			scanf_s("%d", &n);
			switch (n)
			{
				case(1):
				{
					printf("세 정수를 입력해주세요.\n");
					scanf_s("%d %d %d", &num1, &num2, &num3);
					if (num2 == 0)
					{
						printf("분모는 0이 아니여야 합니다. 다시입력해주세요.");
						continue;
					}
					one(num1, num2, num3);
					break;
				}
				case(2):
				{
					printf("세 정수를 입력해주세요.\n");
					scanf_s("%d %d %d", &num1, &num2, &num3);
					two(num1, num2, num3);
					break;
				}
				default:
				{
					printf("다시 입력해주세요.\n");
					continue;
				}
		}
			printf("계속하려면 1번 그만하려면 2번을 입력하세요.\n");
			scanf_s("%d", &n);
			if (n == 1)
				continue;
			if (n == 2)
				break;
			else
				printf("잘못된 입력입니다.\n");
	}
		return 0;
}
