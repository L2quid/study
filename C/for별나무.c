#include<stdio.h>

int main()
{
	int h, n, i, m, j = 0;
	scanf_s("%d", &n);//����n �Է�
	for (h = 1; h <= n; h++)//h�� 1����n���� 1�� ����
	{
		m = 2 * h - 1; //h���� ���� ����
		for (i = n - h; 0 < i; i--)//(����-h)��ŭ�� �� �� ���� 
		{	
			printf(" ");
		}
		for (j = 1; j <= m; j++) // 2h-1������ŭ *���
		{
			printf("*");
		} 
		printf("\n");//������

    }
	return 0;
}