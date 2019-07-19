#include<stdio.h>

int main() {
	int num1, num2, ans;
	printf("type two numer! : ");
	scanf_s("%d %d", &num1, &num2);
	while (1)
	{
		printf("\n%d + %d는 무엇일까요?\n", num1, num2);
		scanf_s("%d", &ans);
		if (ans == (num1 + num2)) {
			printf("정답입니다.!\n");
			break;
		}
		else {
			printf("오답입니다. 다시 해보세요!\n");
		}
	}
	scanf_s("%d", &num1);

}