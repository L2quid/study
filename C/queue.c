#include<stdio.h>
#define SIZE 15
int queue[SIZE] = { 0 };
int index = -1;
int point = 0;
int empty() {
	if (point > index) return 0;
	return 1;
}

int full() {
	if (index == SIZE - 1) return 0;
	return 1;
}

void in(num) {
	if (!full()) {
		printf("overflow\n");
	}
	queue[(++index)%SIZE] = num;
}

void out() {
	if (!empty()) {
		printf("underflow\n");
	}
	if (point > index) exit(1);
	else {
		printf("%d\n", queue[(point++) % SIZE]);
	}
}

int main() {
	in(1);
	in(2);
	in(3);
	in(4);
	in(5);
	out();
	out();
	out();
	out();
	out();
	//out(); //언더플로우
	in(6);
	in(7);
	in(8);
	in(9);
	in(10);
	in(11);
	in(12);
	in(13);
	in(14);
	in(15);
	//in(16);오버플로우
	out();
	out();
	out();
	out();
	out();

}