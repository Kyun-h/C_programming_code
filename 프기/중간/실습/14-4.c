#include <stdio.h>

void printBin(int a);
void printFloatBin(double a);

int main(void) {
    double n;
    while (1) {
        scanf("%lf", &n);
        if (n == 0) break;

        int integerPart = (int)n; //정수부분
        double fractionalPart = n - integerPart; //소수부분

        // 정수 부분 출력
        if (integerPart == 0) {
            printf("0");
        } else {
            printBin(integerPart);
        }

        // 소수점 출력
        printf(".");

        // 소수점 이하 부분 출력
        printFloatBin(fractionalPart);

        printf("\n");
    }

    return 0;
}

void printBin(int a) {
    if (a > 1) {
        printBin(a / 2);
    }
    printf("%d", a % 2);
}

void printFloatBin(double a) {
    int count = 0;
    int hasFraction = 0; // 소수점 이하 부분이 있는지 확인하는 플래그

    while (count < 10 && a > 0) {
        a *= 2;
        int bit = (int)a;
        printf("%d", bit);
        a -= bit;
        count++;
        hasFraction = 1; // 소수점 이하 부분이 있는 경우 플래그 설정
    }

    // 소수점 이하 부분이 없을 경우 0 출력
    if (!hasFraction) {
        printf("0");
    }
}