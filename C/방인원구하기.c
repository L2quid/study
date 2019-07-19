#include<stdio.h>
//n층 n호 사람수는 n-1층1~n호까지의 합
int main() {

	int array[100][100];
	int col, row, r, c, h;

	for (scanf("%d", &r); r--;) {
		scanf("%d", &c);
		scanf("%d", &h);
		for (col = 0; col < 15; col++) {
			for (row = 0; row < 15; row++) {
				if (col == 0) {
					array[0][row] = row + 1;
				}
				else if(row==0){
					array[col][0] = 1;
				}
				else {
					array[col][row] = array[col - 1][row] + array[col][row - 1];
				}
			}
		}
		printf("%d\n", array[c][h-1]);
	}
	return(0);
}