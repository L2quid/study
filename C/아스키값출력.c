#include<stdio.h>

int main()
{
	char ch;

	printf("문자 입력\n");
	scanf_s("%c", &ch);//ch에 문자형을 저장

	printf("입력하신 %c의 ASCII값은 %d입니다", ch, ch); //ch를 각각 문자형 정수형으로 표현
	return 0;
}