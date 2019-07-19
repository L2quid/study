
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i = 1; // i선언및 초기화
	long double base;//base선언
	printf("x\t (1+1/x)^x\n"); //출력

	for (i = 583500; i < 584000; i = i + 20)//i가 584000이 될 때까지 i+20을 해주고 FOR문안의 내용반복
	{
		base = 1 + (double)1 / (double)i;// base=(1+1/i)
		printf("%d\t %f\n", i, pow(base, (double)i));//i, base^i 출력
	}
	return 0;
}