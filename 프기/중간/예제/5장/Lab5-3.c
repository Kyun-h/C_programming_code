//¼·¾¾ È­¾¾ º¯È¯

#include <stdio.h>

int main(void) {
	double celsius, fahrenheit;
	printf("º¯È¯ÇÒ ¼·¾¾ ¿Âµµ¸¦ ÀÔ·Â >> ");
	scanf("%lf", &celsius);

	fahrenheit = (9.0 / 5.0) * celsius + 32.0;
	printf("¼·¾¾ %.2f: È­¾¾ %.2f\n", celsius, fahrenheit);

	return 0;
}