#include<stdio.h>

int main()
{
	char ch;

	printf("���� �Է�\n");
	scanf_s("%c", &ch);//ch�� �������� ����

	printf("�Է��Ͻ� %c�� ASCII���� %d�Դϴ�", ch, ch); //ch�� ���� ������ ���������� ǥ��
	return 0;
}