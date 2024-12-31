#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i == 0) continue;
        for (int j = 0; j < n-i; j++) printf(" ");
        for (int k = 0; k < i; k++) printf("*");
        printf("\n");
    }
    return 0;
}
