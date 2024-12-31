#include <stdio.h>
#include <string.h>

int A = 6, B = 5;
int main(void)
{
    if (A > B)
        printf(">");
    if (A == B)
        printf("==");
    if (A < B)
        printf("<");
}