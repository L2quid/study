#include <stdio.h>
#include <conio.h>

int main()
{
	int h, w, i, j;
	int leftc, rightc;
	scanf_s("%d", &h);  //피라미드 높이, 만약에 높이(층수)를 입력 받아서 하고 싶으면 scanf("%d", &h);해주시면 됩니다.
	leftc = rightc = h - 1;  //피라미드의 Center(루프가 0 부터 시작하니까 h - 1) 처음은 좌우가 같습니다.
	w = 2 * h - 1; //피라미드의 폭

	for (i = 0; i < h * w; i++) //높이와 폭을 곱하면 피라미드의 전체(공백까지 합한)갯수가 나옵니다.
	{
		j = i % w; //j는 폭을 나타냅니다. 한줄이 끝나면 줄은 0부터 다시 시작하니까
		if (j >= leftc && j <= rightc) printf("*");//별이 처음에는 가운데 하나, 다음칸은 Center에서 좌우로 하나씩 증가 하니까
		else printf(" "); //Center가 아닌 나머지에는 공백출력
		if ((i + 1) % w == 0) //폭의 끝까지 가면
		{
			printf("\n"); //줄을 바꾸어주고
			leftc--; //왼쪽 Center는 1감소
			rightc++; //오른쪽 Center는 1증가
		}
	}
	_getch();
	return 0;
}