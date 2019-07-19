#include<stdio.h>
int main(){
	int n;
	float a,b,i,x,y;
	y=0;


	scanf("%f%f%d",&a,&b,&n);
	
	x=(b-a)/n;//가로
	for(i=1;i<=n;i++)//n번 반복
	{
		y=y+x*a*a;// 높이*가로 =넓이를 y에저장
		a=a+x;//a에 가로더함

	}
	printf("%f",y); //넓이 출력
}
