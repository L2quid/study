
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i = 1; // i����� �ʱ�ȭ
	long double base;//base����
	printf("x\t (1+1/x)^x\n"); //���

	for (i = 583500; i < 584000; i = i + 20)//i�� 584000�� �� ������ i+20�� ���ְ� FOR������ ����ݺ�
	{
		base = 1 + (double)1 / (double)i;// base=(1+1/i)
		printf("%d\t %f\n", i, pow(base, (double)i));//i, base^i ���
	}
	return 0;
}