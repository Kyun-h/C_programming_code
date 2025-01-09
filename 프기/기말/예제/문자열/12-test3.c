#include <stdio.h>
#include <conio.h>

#define MAX_LEN 100

int main(void)
{
    char pwd[MAX_LEN];
    int i = 0;
    char c;

    printf("Enter your password: ");
    while (1)
    {
        c = _getch();
        if (c == '\r' || c == '\n')
            break;
    }

    if (i < MAX_LEN - 1)
    {
        pwd[i++] = c;
        printf("*");
    }
    pwd[i] = '\0';
    printf("\nYour password is: %s\n", pwd);

    return 0;
}