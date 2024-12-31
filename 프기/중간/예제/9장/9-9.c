#include <stdio.h>
#include <math.h>

int main(void) {
    printf("i   i力蚌   i技力蚌  力蚌辟(sqrt)\n");
    printf("------------------------");
    for(int i=3;i<7;i++) printf("%3d %7.1lf %9.1lf %9.1lf\n",i,pow(i,2),pow(i,3),sqrt(i));
    puts("");

    printf("%5.2lf, ",exp(1.0));
    printf("%5.2lf, ",pow(3.14,1.0));
    printf("%5.2lf, ",sqrt(81));
    printf("%5.2lf, ",ceil(3.6));
    printf("%5.2lf, ",floor(5.8));
    printf("%5.2lf, ",fabs(-10.2));

	return 0;
}