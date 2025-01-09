#include <stdio.h>
void remove_spaces(char *str);

int main(void){
    char str[] = "Hi Im SangKyun!";

    remove_spaces(str);
    printf("%s\n",str);

    return 0;
}
void remove_spaces(char *str){
    char *read = str;
    char *write = str;

    while(*read){
        if(*read!=' '){
            *write = *read;
            write++;
        }
        read++;
    }
    *write='\0';
}