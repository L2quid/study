#include <stdio.h>

int T, H, W, N;

int main()
{
	for (scanf("%d", &T); T--;) {
		scanf("%d%d%d", &H, &W, &N);
		printf("%d%02d\n", (N - 1) % H + 1, (N - 1) / H + 1);
	}
}