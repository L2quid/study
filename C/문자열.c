// 배열을사용해서 사용자한테 영어 20자정도를 입력받아서 그대로 출력하는 프로그램을 짜오기 
#include<stdio.h>
#include <string.h>

int main()
{
	char string[20];
	int i;
	while (1) {
		printf("출력할 글을 입력하세요.\n");
		gets(string);
		if ( strlen(string) > 20)
		{
			printf("20자 이내로 입력해주세요.\n");
			continue;
		}
			printf("입력하신 문자열은 %s 입니다.\n\n", string);
	}
	return 0;
}