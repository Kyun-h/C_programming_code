//원 넓이

#include <stdio.h>
#define pi 3.14

int main(void) {
	double radius = 2.83;
	printf("원 면적: %f\n", radius * radius * pi);
	printf("원 둘레: %f\n", 2 * radius * pi);
	
	return 0;
}