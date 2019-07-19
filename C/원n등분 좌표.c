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
		printf("�߽��� (a,b) �������� r�ο��� n�������. \n a,b,r,n�� �Է����ּ���\n");
		scanf_s("%lf%lf%lf%lf", &a, &b, &r, &n);
		printf("1 n����� �� ���\n2 ������ ������ ���\n3 x���� ���\n4 ����\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case(1):

			printf("n��������� ����մϴ�.\n");
			for (i = 0; i < n; i++)
			{
				theta = i*(2 * pi / n);
				c = cos(theta);
				s = sin(theta);
				printf("(%0.4lf,%0.4lf)\n", r*c + a, r*s + b);
			}
			break;
	
		case(2):
			printf("������ �������� ����մϴ�.\n");
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
			printf("x������ ���մϴ�.\n");
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
			printf("���α׷��� �����մϴ�.\n");
			break;

		default:
			printf("�ٽ� �Է����ּ���\n");
		}
	}
	return 0;
}
