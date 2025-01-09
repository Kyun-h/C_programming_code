#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *strings[3];

    strings[0] = malloc(20);
    strings[1] = malloc(20);
    strings[2] = malloc(20);

    strcpy(strings[0], "Hello, World!");
    strcpy(strings[1], "C Programming");
    strcpy(strings[2], "Dynamic Strings");

    for(int i=0;i<3;i++){
        printf("%s\n",strings[i]);
        free(strings[i]);
    }

    return 0;
}