// Â¦¼ö È¦¼ö ÆÇº°
#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    printf("µÎ Á¤¼ö ÀÔ·Â>> ");
    scanf("%d %d", &a, &b);

    printf("ÃÖ´ë°ª: %d ", (a > b) ? a : b);
    printf("ÃÖ¼Ò°ª: %d\n ", (a < b) ? a : b);
    printf("Àý´ë°ª: %d ", (a > 0) ? a : -a);
    printf("Àý´ë°ª: %d\n ", (b > 0) ? b : -b);

    ((a % 2 == 0) ? printf("Â¦¼ö ") : printf("È¦¼ö "));
    printf("%s\n", ((b % 2) == 0) ? "Â¦¼ö" : "È¦¼ö");

    return 0;
}