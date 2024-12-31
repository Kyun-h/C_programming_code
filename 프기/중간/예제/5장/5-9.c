//비트연산자

#include <stdio.h>

int main(void) {
	int x = 15; 

	printf("%9x\n", -1);
	printf("%3d\n", 10 & -1);
	printf("%3d\n\n", 10 | 0);

	printf("%3d %08x\n", x, x);
	printf("%3d %08x\n", 1, x&1);
	printf("%3d %08x\n", 15, x | 1);
	printf("%3d %08x\n", 14, x^1);
	printf("%3d %08x\n", ~x, ~x);

	return 0;
}