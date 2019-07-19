	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	int main() {
		int num1, count, i;
		char * string = (char *)malloc(1);

		while (1) {
			count = 1;
			printf("====================================================");
			printf("\n6이상을 입력하면 나가집니다. \n수를 입력하세요 : \n");
			scanf_s("%d", &num1);
			if (num1 > 5)break;

			while (1) {
				printf("\n%d 는 영어로 무엇일까요?\n", num1);
				scanf_s("%s", string,16);
				switch (num1)
				{
				case 0: {
					while (1) {
						if (strcmp(string, "zero") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 1: {
					while (1) {
						if (strcmp(string, "one") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 2: {
					while (1) {
						if (strcmp(string, "two") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 3: {
					while (1) {
						if (strcmp(string, "three") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				case 4: {
					while (1) {
						if (strcmp(string, "four") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}break;
				}break;
				case 5: {
					while (1) {
						if (strcmp(string, "five") == 0) {
							printf("\n정답입니다! %d번 만에 맞추셧군요!\n", count);
							switch (count)
							{
							case 1: printf("exellent!\n"); break;
							case 2: printf("great!\n"); break;
							case 3: printf("good!\n"); break;
							case 4: printf("correct!\n"); break;
							default:printf("hmm..더 노력하세요\n");
							}
							break;
						}
						else {
							printf("\n오답입니다. 다시 맞춰보세요 \n");
							count++;
							scanf_s("%s", string,16);
						}
					}
				}break;
				}break;
			}
		}
		printf("\n수고하셧습니다. 나가려면 아무키나 입력해주세요. \n");
		scanf_s("%d", &i);
	}