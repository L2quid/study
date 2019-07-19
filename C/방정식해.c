#include<stdio.h>
#include<math.h>


int main()
{
	int a, b, c;
	
	printf("이 프로그램은 이차방정식의 해를 구하는 프로그램입니다. \n ax^2+bx+c의 세 값을 입력해주세요");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%dx^2+%dx+%d의 해를 구합니다.", a, b, c);
	int d = sqrt(4 * a*c - b ^ 2);
	int e = b ^ 2 - 4 * a*c;
	int f= sqrt(e);
	if (e > 0)
		printf("실근을 가집니다. \n 그해는 %d,%d입니다.", (-b + f) / 2 * a, (-b - f) / 2 * a);

	else if (e == 0)
		printf("중근을 가집니다. \n 그해는 %d입니다.", -b / 2 * a);

	else
		printf("허근을 가집니다. \n 그해는 %d+-%di입니다.", -b / 2 * a, ( d/ 2 * a) ^ 2);
	return 0;
}
