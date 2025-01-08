/*

*           *

*  *     *  *

*  *  *  *  *

*  *     *  *

*           *

*/


#include <stdio.h>

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 || i == n - 1) && (j == 0 || j == n - 1)) {
                printf("*");
            } else if ((i == 1 || i == n - 2) && (j == 1 || j == n - 2)) {
                printf("*");
            } else if (i == n / 2 && (j == n / 2 - i || j == n / 2 + i || j == n / 2 - (n - 1 - i) || j == n / 2 + (n - 1 - i))) {
                printf("*");
            } else {
                printf(" ");
            }
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    printPattern(n);

    return 0;
}