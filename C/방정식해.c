#include<stdio.h>
#include<math.h>


int main()
{
	int a, b, c;
	
	printf("�� ���α׷��� ������������ �ظ� ���ϴ� ���α׷��Դϴ�. \n ax^2+bx+c�� �� ���� �Է����ּ���");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%dx^2+%dx+%d�� �ظ� ���մϴ�.", a, b, c);
	int d = sqrt(4 * a*c - b ^ 2);
	int e = b ^ 2 - 4 * a*c;
	int f= sqrt(e);
	if (e > 0)
		printf("�Ǳ��� �����ϴ�. \n ���ش� %d,%d�Դϴ�.", (-b + f) / 2 * a, (-b - f) / 2 * a);

	else if (e == 0)
		printf("�߱��� �����ϴ�. \n ���ش� %d�Դϴ�.", -b / 2 * a);

	else
		printf("����� �����ϴ�. \n ���ش� %d+-%di�Դϴ�.", -b / 2 * a, ( d/ 2 * a) ^ 2);
	return 0;
}
