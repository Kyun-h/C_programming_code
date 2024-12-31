#include <stdio.h>

int main(void)
{
    int amount = 0;
    int coupons = 10;

    printf("ÃÑ ±İ¾× >> ");
    scanf("%d", &amount);

    int sale = (amount >= 10000) && (coupons++ >= 10);
    printf("ÇÒÀÎ: %d, ÄíÆù ¼ö: %d\n", sale, coupons);

    return 0;
}