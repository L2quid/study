#include<stdio.h>

int main() {

	int a;

	a = 10;

	a++; printf("%d\n",a);   //11
	++a; printf("%d\n",a );  //12

	a--; printf("%d\n", a);  //11
	--a; printf("%d\n", a);  //10

	printf("%d\n", a++);     //10
	printf("%d\n", ++a);	 //12

	a -= 1 + 2; // a=a-(1+2);
	printf("%d\n", a);
	a = a - 1 + 2;
	printf("%d\n", a);

	getchar();
}