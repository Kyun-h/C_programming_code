#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[] = "secure";
    char input[50];

    printf("Enter password: ");
    scanf("%s", input);

    if (strlen(input) > 10)
        printf("Password is too long!\n");
    else if (strcmp(password, input) == 0)
        printf("Access granted.\n");
    else
        printf("Access denied.\n");

    return 0;
}