#include <stdio.h>

void sub(int param);

int main(void) {
    auto int n = 10;
    printf("%d\n", n);

    for (int m = 0, sum = 0; m < 3; m++) {
        sum += m;
        printf("%d\n", sum);
    }

    printf("%d\n", n);

    sub(20);

    return 0;
}

void sub(int param) {
    auto int local = 100;
    printf("%d %d\n", param, local);
}