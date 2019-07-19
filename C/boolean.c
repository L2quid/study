#include<stdio.h>
#include<stdbool.h> //불리언 사용시 필요한 헤더

int main() {
	int x;
	bool y;

	printf("\n정수를 입력 하세요.\n");
	scanf_s("%d", &x);
	y = x;

	printf("\ni=%i", y);
	printf("\no=%o", y);
	printf("\nd=%d", y);
	printf("\nu=%u", y);
	printf("\nx=%x", y);

	//불리언 판별식 
	if (y!=0) //y가 0이 아닐때
	{
		printf("\n y는 0이 아닙니다");
	}
	else
	{
		printf("\n y는 0입니다.");
	}
	scanf_s("%d", &x);
}