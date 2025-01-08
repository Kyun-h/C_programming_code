#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0 || i%2!=1) continue;
		printf("%d ", i);
	}

	return 0;
}