	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	int main() {
		int num1, count, i;
		char * string = (char *)malloc(1);

		while (1) {
			count = 1;
			printf("====================================================");
			printf("\n6�̻��� �Է��ϸ� �������ϴ�. \n���� �Է��ϼ��� : \n");
			scanf_s("%d", &num1);
			if (num1 > 5)break;

			while (1) {
				printf("\n%d �� ����� �����ϱ��?\n", num1);
				scanf_s("%s", string,16);
				switch (num1)
				{
				case 0: {
					while (1) {
						if (strcmp(string, "zero") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 1: {
					while (1) {
						if (strcmp(string, "one") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 2: {
					while (1) {
						if (strcmp(string, "two") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 3: {
					while (1) {
						if (strcmp(string, "three") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 4: {
					while (1) {
						if (strcmp(string, "four") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}break;
				}break;
				case 5: {
					while (1) {
						if (strcmp(string, "five") == 0) {
							printf("\n�����Դϴ�! %d�� ���� ���߼˱���!\n", count);
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
							printf("\n�����Դϴ�. �ٽ� ���纸���� \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				}break;
			}
		}
		printf("\n�����ϼ˽��ϴ�. �������� �ƹ�Ű�� �Է����ּ���. \n");
		scanf_s("%d", &i);
	}