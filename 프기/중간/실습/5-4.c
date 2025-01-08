#include <stdio.h>

int main(void) {
	int x,sum;
	scanf("%d", &x);
	if (x >= 0 && x <= 1000) {
		printf("%d * 0.09 = %d\n", x, (int)(x * 0.09));
		sum = (int)(x * 0.09);
	}
	else if (x > 1000) {
		if (x <= 4000) {
			printf("1000 * 0.09 = 90\n");
			printf("%d * 0.18 = %d\n", x-1000, (int)((x-1000) * 0.18));
			sum = 90 + (int)((x - 1000) * 0.18);
		}
		else if(x>4000){
			if (x <= 8000) {
				printf("1000 * 0.09 = 90\n");
				printf("3000 * 0.18 = 540\n");
				printf("%d * 0.27 = %d\n", x - 4000, (int)((x - 4000) * 0.27));
				sum = 630 + (int)((x - 4000) * 0.27);
			}
			else if (x > 8000) {
				printf("1000 * 0.09 = 90\n");
				printf("3000 * 0.18 = 540\n");
				printf("4000 * 0.27 = 1080\n");
				printf("%d * 0.36 = %d\n", x - 8000, (int)((x - 8000) * 0.36));
				sum = 1710 + (int)((x - 8000) * 0.36);
			}

		}
	}
	printf("= %d", sum);

	return 0;
}