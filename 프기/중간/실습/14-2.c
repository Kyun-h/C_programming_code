#include <stdio.h>

void reversePrint(int a);

int main(void) {
    int a;
    scanf("%d", &a);
    reversePrint(a);
    return 0;
}

void reversePrint(int a) {
    if (a < 10) {
        printf("%d", a);
        return;
    }
    printf("%d", a % 10);
    reversePrint(a / 10);
}
