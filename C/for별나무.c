#include<stdio.h>

int main()
{
	int h, n, i, m, j = 0;
	scanf_s("%d", &n);//높이n 입력
	for (h = 1; h <= n; h++)//h가 1부터n까지 1씩 증가
	{
		m = 2 * h - 1; //h마다 별의 개수
		for (i = n - h; 0 < i; i--)//(높이-h)만큼의 별 앞 공백 
		{	
			printf(" ");
		}
		for (j = 1; j <= m; j++) // 2h-1개수만큼 *출력
		{
			printf("*");
		} 
		printf("\n");//한층끝

    }
	return 0;
}