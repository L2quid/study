#include<iostream>

namespace cinNcoutSpace{
	int scanf;
	const char *printf;
};

int main() {
	cinNcoutSpace::scanf = 123;
	cinNcoutSpace::printf = "hello";

	printf("%i\n", cinNcoutSpace::scanf);
	printf("%s\n", cinNcoutSpace::printf);

	getchar();
}