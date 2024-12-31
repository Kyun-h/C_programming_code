#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char abc, plus;

	printf("C 학점은?");
	abc = getchar();
	scanf("%c", &plus);

	printf("학점 %c\n", plus);

	return 0;
}