#include <stdio.h>

int main(void) {
	int a = 7.8;
	double b = 5;
	printf("%d %f", a, b);
	printf("%d %f ", (int)3.56, (double)3);
	printf("%f %d\n", 3.56 + 7.87, (int)(3.56 + 7.87));

	printf("%d %f %f\n", 5 / 2, (double)5 / 2, (double)(5 / 2));

	return 0;
}