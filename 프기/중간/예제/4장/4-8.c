//단위 변환

#include <stdio.h>

int main(void) {
	float mile = 0;
	printf("100 킬로미터(km)은 몇 마일(mile)?");
	scanf("%f", &mile);
	printf("80 킬로미터: %.2f 마일 \n\n", mile = 80);

	double liter = 0;
	printf("1 갤론(gallon)은 몇 리터(liter)?");
	scanf("%lf", &liter);
	printf("18 갤론: %.2f 리터\n", liter * 18);

	return 0;
}