#include <stdio.h>
#include <string.h>

int main(void)
{
    int src[5] = {1, 2, 3, 4, 5};
    int dst[5];

    memcpy(dst, src, 5 * sizeof(int));

    for (int i = 0; i < 5; i++)
        printf("%d", dst[i]);
    puts("");
}
