#include<stdio.h>

int main() {
	int num1, num2, ans;
	printf("type two numer! : ");
	scanf_s("%d %d", &num1, &num2);
	while (1)
	{
		printf("\n%d + %d�� �����ϱ��?\n", num1, num2);
		scanf_s("%d", &ans);
		if (ans == (num1 + num2)) {
			printf("�����Դϴ�.!\n");
			break;
		}
		else {
			printf("�����Դϴ�. �ٽ� �غ�����!\n");
		}
	}
	scanf_s("%d", &num1);

}