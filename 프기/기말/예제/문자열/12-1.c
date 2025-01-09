#include <stdio.h>

int main(void){
    int i=0;
    char *java="java";
    printf("%s\n",java);

    while(java[i]!='\0')
        printf("%c",java[i++]);
    puts("");
    return 0;
}