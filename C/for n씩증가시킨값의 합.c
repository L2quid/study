#include<stdio.h>
#pragma warning(push,2)

void main() {
	int num1, max, step, total, inital;
	printf("�ʱⰪ �ִ� ����ġ�� ������� �Է��ϼ���.");
	scanf_s("%d %d %d", &num1, &max, &step);
	inital = num1;
	if (max < num1) printf("�ִ밪�� �ʱⰪ���� �۾ƾ� �մϴ�.");
	else if (step == 0)printf("����ġ�� 0�� �ƴϿ��� �մϴ�.");
	else {
		for (total = 0; num1 <= max; num1 += step) {
			total += num1;
		}
		printf("\n%d���� %d���� %d�� �����ϴ� ������ ���� %d�Դϴ�.\n", inital, max, step, total);
	}
	scanf_s("%d", &num1);
}