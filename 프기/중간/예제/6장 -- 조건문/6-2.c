//È¦Â¦ ±¸ºÐºÐ

#include <stdio.h>

int main(void) {
	int n;
	printf("Á¤¼ö ÀÔ·Â: ");
	scanf("%d", &n);

	if (n % 2) {
		printf("È¦¼ö\n");
	}
	else {
		printf("Â¦¼ö\n");
	}

	((n % 2) ? printf("È¦¼ö\n") : printf("Â¦¼ö\n"));

	return 0;
}