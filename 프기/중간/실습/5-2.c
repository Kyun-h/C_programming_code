#include <stdio.h>

int main(void) {
	int n;

	int a[100] = { 0,0,};
	int max = a[0];
	int sum=0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		if (max < a[i]) max = a[i];
	}
	printf("%d\n", sum);
	printf("%d", max);


	return 0;
}