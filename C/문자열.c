// �迭������ؼ� ��������� ���� 20�������� �Է¹޾Ƽ� �״�� ����ϴ� ���α׷��� ¥���� 
#include<stdio.h>
#include <string.h>

int main()
{
	char string[20];
	int i;
	while (1) {
		printf("����� ���� �Է��ϼ���.\n");
		gets(string);
		if ( strlen(string) > 20)
		{
			printf("20�� �̳��� �Է����ּ���.\n");
			continue;
		}
			printf("�Է��Ͻ� ���ڿ��� %s �Դϴ�.\n\n", string);
	}
	return 0;
}