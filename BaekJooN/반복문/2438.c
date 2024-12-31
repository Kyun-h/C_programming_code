#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < i; j++) printf("*");
        if(i!=0) printf("\n");
    }
    return 0;
}