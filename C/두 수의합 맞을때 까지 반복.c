#include<stdio.h>
#pragma warning (push,2)

int main() {
	int num1, num2, count, i;
	
	while (1) {
		count = 1;
		printf("=============================================");
		printf("\n0 0 을입력하면 나가집니다. \n두수를 입력하세요 : \n");
		scanf_s("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0)break;
		
		while(1){
			printf("\n%d + %d : =", num1, num2);
			scanf_s("%d", &i);

			if (i == num1 + num2) {
				printf("정답입니다! %d번 만에 맞추셧군요!\n", count);
				switch (count)
				{
				case 1: printf("exellent!\n"); break;
				case 2: printf("great!\n"); break;
				case 3: printf("good!\n"); break;
				case 4: printf("correct!\n"); break;
				default:printf("hmm..더 노력하세요\n");
				}
				break;
			}
			else {
				printf("오답입니다. 다시 맞춰보세요 \n ");
				count++;
			}
		
		}
		
		
	}
	printf("수고하셧습니다. 나가려면 아무키나 입력해주세요. \n");
	scanf_s("%d", &i);
}