#include<stdio.h>
#pragma warning (push,2)

int main() {
	int num1, num2, count, i;
	
	while (1) {
		count = 1;
		printf("=============================================");
		printf("\n0 0 ���Է��ϸ� �������ϴ�. \n�μ��� �Է��ϼ��� : \n");
		scanf_s("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0)break;
		
		while(1){
			printf("\n%d + %d : =", num1, num2);
			scanf_s("%d", &i);

			if (i == num1 + num2) {
				printf("�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
				switch (count)
				{
				case 1: printf("exellent!\n"); break;
				case 2: printf("great!\n"); break;
				case 3: printf("good!\n"); break;
				case 4: printf("correct!\n"); break;
				default:printf("hmm..�� ����ϼ���\n");
				}
				break;
			}
			else {
				printf("�����Դϴ�. �ٽ� ���纸���� \n ");
				count++;
			}
		
		}
		
		
	}
	printf("�����ϼ˽��ϴ�. �������� �ƹ�Ű�� �Է����ּ���. \n");
	scanf_s("%d", &i);
}