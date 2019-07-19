#include <stdio.h>
#include<math.h>
int main(void)
{
	int Test;
	int x1, y1, x2, y2;
	int n;
	int cx, cy, r;
	int count = 0;
	for (scanf("%d", &Test);Test--;)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (scanf("%d", &n);n--;)
		{
			scanf("%d %d %d", &cx, &cy, &r);
			if (pow((cx - x1),2) + pow((cy - y1),2)>= r * r || pow((cx - x2),2) + pow((cy - y2),2) >= r * r)
			{
				if (pow((cx - x1), 2) + pow((cy - y1), 2) < r * r)
					count++;
				if (pow((cx - x2), 2) + pow((cy - y2), 2) < r * r)
					count++;
			}
		}
		printf("%d\n", count);
		count = 0;
	}
}