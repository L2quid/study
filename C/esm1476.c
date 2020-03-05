#include<stdio.h>

int main() {
	int e=0, s=0, m=0;
	int mye, mys, mym;
	int count = 0;
	scanf_s("%d %d %d", &mye, &mys, &mym);
	for (int i = 0;; i++)
	{
		e = (e + 1) % 16;
		if (e == 0) e++;
		s = (s + 1) % 29;
		if (s == 0) s++;
		m = (m + 1) % 20;
		if (m == 0) m++;
		count++;
		if (e == mye && s == mys && m == mym) break;
	}
	printf("%d", count);
	return 0;
}