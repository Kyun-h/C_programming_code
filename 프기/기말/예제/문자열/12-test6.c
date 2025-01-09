#include <stdio.h>
#include <string.h>

int main(void){
    char src[]="Hello, World!";
    char dest[50];

    strcpy(dest,src);
    printf("%s\n",src);
    printf("%s\n",dest);

    return 0;
}