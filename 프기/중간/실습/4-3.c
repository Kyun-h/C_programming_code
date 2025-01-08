#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c, x = 0;;
	double ans,ans_1, ans_2;
	scanf("%d %d %d", &a, &b,&c);
	x = (b * b) - (4 * a * c);
	if (a == 0) {
		ans = -(double)c / b;
		printf("%lf", ans);
	}
	else {
		if (x < 0) printf("허근입니다");
		else if (x == 0) {
			ans = (double)(-b) / (2 * a);
			printf("%lf",ans);
		}
		else if (x > 0) {
			//x = (b * b) - (4 * a * c);
			ans_1 = (double)(-b + sqrt(x)) / (2 * a);
			ans_2 = (double)(-b - sqrt(x)) / (2 * a);
			printf("%lf, %lf", ans_1, ans_2);
		}
	}

	return 0;
}