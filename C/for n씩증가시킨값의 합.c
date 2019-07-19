#include<stdio.h>
#pragma warning(push,2)

void main() {
	int num1, max, step, total, inital;
	printf("초기값 최댓값 증가치를 순서대로 입력하세요.");
	scanf_s("%d %d %d", &num1, &max, &step);
	inital = num1;
	if (max < num1) printf("최대값은 초기값보다 작아야 합니다.");
	else if (step == 0)printf("증가치는 0이 아니여야 합니다.");
	else {
		for (total = 0; num1 <= max; num1 += step) {
			total += num1;
		}
		printf("\n%d부터 %d까지 %d씩 증가하는 값들의 합은 %d입니다.\n", inital, max, step, total);
	}
	scanf_s("%d", &num1);
}