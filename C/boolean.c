#include<stdio.h>
#include<stdbool.h> //�Ҹ��� ���� �ʿ��� ���

int main() {
	int x;
	bool y;

	printf("\n������ �Է� �ϼ���.\n");
	scanf_s("%d", &x);
	y = x;

	printf("\ni=%i", y);
	printf("\no=%o", y);
	printf("\nd=%d", y);
	printf("\nu=%u", y);
	printf("\nx=%x", y);

	//�Ҹ��� �Ǻ��� 
	if (y!=0) //y�� 0�� �ƴҶ�
	{
		printf("\n y�� 0�� �ƴմϴ�");
	}
	else
	{
		printf("\n y�� 0�Դϴ�.");
	}
	scanf_s("%d", &x);
}