#include<stdio.h>

int main()
{
	int a, b, y;
	

	printf( " �� ���ڸ� �Է��ϼ��� \n" );
	scanf_s( "%d",&a );
	scanf_s( "%d",&b );

	printf("������ �����ϼ���");
	printf("1= + \n 2= - \n 3= * \n 4= / \n");
	scanf_s("%d" ,&y);
	if (y == 1)
	{
		printf("%d + %d = %d", a, b, a + b);
	}
	if (y == 2)
	{
		printf("%d - %d = %d", a, b, a - b);
	}
	if (y == 3)
	{
		printf("%d * %d = %d", a, b, a * b);
	}
	if (y == 4)
	{
		printf("%d / %d = %d", a, b, a / b);
	}
	return 0;
}

