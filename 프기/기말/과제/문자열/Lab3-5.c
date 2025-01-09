#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 80

int validate(char *str1, char *str2);
int main(void)
{
    char password[MAX_LEN];
    char restore[MAX_LEN];

    while (1)
    {
        scanf("%s", &password);
        if (strlen(password) < 5 || strlen(password) > 10)
        {
            printf("Retry\n\n");
            continue;
        }
        scanf("%s", &restore);

        switch(validate(password,restore)){
            case 1:
                printf("Done\n");
                exit(1);
            case 0:
                printf("Retry\n\n");
                continue;
        }
    }

    return 0;
}

int validate(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
