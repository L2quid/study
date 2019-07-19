#include <stdio.h>
#include <string.h>

int d[31][31];
int C(int n, int r) {
	if (n == r || r == 0) return 1;
	if (d[n][r] >= 0) return d[n][r];
	return d[n][r] = C(n - 1, r) + C(n - 1, r - 1);
}

int main() {
	memset(d, -1, sizeof(d));
	int t;
	scanf("%d", &t);
	while (t--) {  //for(scanf("%d",t);t--;)�� ����ϸ� �� 2���� ���ٷΰ���
		int n, m;
		scanf("%d %d", &n, &m);
		printf("%d\n", C(m, n));
	}
	/*  �Ʒ��� �����÷ο�߻� ��.��
	#include<stdio.h>
int main() {
	int i, t, n, m, j;
	int b = 1;
	unsigned long long k = 1;
	unsigned long long l = 1;
	for (scanf("%d", &t); t--;) {
		scanf("%d %d", &n, &m);
		if (m - n < n)
			n = m - n;
		for (i = 1; i < n+1; i++) {
			k *= m;
			l *=b;
			b++;
			m--;
		}
		j = k / l;
		printf("%d", j);
		b = 1;
		k = 1;
		l = 1;
	}
}
	*/