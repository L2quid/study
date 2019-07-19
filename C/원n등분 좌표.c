#include<stdio.h>
#include<math.h>

int main()
{
	int choice;
	double a, b, r, n, theta, c, s, i, pi, res;
	pi = 3.141592;

	while(1)
	{
		printf("\n---------------------------------------------------------------------------\n");
		printf("중심이 (a,b) 반지름이 r인원을 n등분한점. \n a,b,r,n을 입력해주세요\n");
		scanf_s("%lf%lf%lf%lf", &a, &b, &r, &n);
		printf("1 n등분한 점 출력\n2 접선의 방정식 출력\n3 x절편 출력\n4 종료\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case(1):

			printf("n등분한점을 출력합니다.\n");
			for (i = 0; i < n; i++)
			{
				theta = i*(2 * pi / n);
				c = cos(theta);
				s = sin(theta);
				printf("(%0.4lf,%0.4lf)\n", r*c + a, r*s + b);
			}
			break;
	
		case(2):
			printf("접선의 방정식을 출력합니다.\n");
			for (i = 0; i < n; i++)
			{
				theta = i*(2 * pi / n);
				c = cos(theta);
				s = sin(theta);
				if ((r*s + b) < 0)
					printf("%0.2lfx%0.2lfy=%0.4lf\n", r*c + a, r*s + b, r*r);
				else
					printf("%0.2lfx+%0.2lfy=%0.4lf\n", r*c + a, r*s + b, r*r);
			}
			break;

		case(3):
			printf("x절편을 구합니다.\n");
			for (i = 0; i < n; i++)
			{
				theta = i*(2 * pi / n);
				c = cos(theta);
				s = sin(theta);
				res = r*r / (r*c + a);
				printf("%0.3lf\n", res);
			}
		break;
	
		case(4):
			printf("프로그램을 종료합니다.\n");
			break;

		default:
			printf("다시 입력해주세요\n");
		}
	}
	return 0;
}
