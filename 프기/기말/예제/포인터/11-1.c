#include <stdio.h>

int main(void){
    char input;
    printf("%p\n",&input);

    printf("%zu\n",sizeof(&input));

    return 0;
}