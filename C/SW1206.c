#include<stdio.h>
int array[1000];
int count[10];
int big(int a, int b, int c, int d) {
	int biga = (a > b) ? a : b;
	int bigb = (c > d) ? c : d;
	int res = (biga > bigb) ? biga : bigb;
	return res;
}

int main() {
	int wide = 0;
	for (int t=0; t < 10;t++) {
		scanf_s("%d", &wide);
		for (int i = 0; i < wide; i++) {
			scanf_s("%d", &array[i]);
		}
		for (int i = 2; i < wide - 2; i++) {
			int bignum = big(array[i - 2], array[i - 1], array[i + 1], array[i + 2]);
			if (array[i] > bignum) count[t] = count[t] + array[i] - bignum;
		}
	}
	for (int t = 0; t < 10; t++) {
		printf("#%d %d\n", t+1, count[t]);
	}
	return 0;
}