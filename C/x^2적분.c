#include<stdio.h>
int main(){
	int n;
	float a,b,i,x,y;
	y=0;


	scanf("%f%f%d",&a,&b,&n);
	
	x=(b-a)/n;//����
	for(i=1;i<=n;i++)//n�� �ݺ�
	{
		y=y+x*a*a;// ����*���� =���̸� y������
		a=a+x;//a�� ���δ���

	}
	printf("%f",y); //���� ���
}
