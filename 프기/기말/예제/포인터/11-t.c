#include <stdio.h>

int main(void){
    int value = 0x44434241;
    char *pc= (char*)&value;

    for(int i=0;i<=3;i++){
        char ch=*(pc+i);
        printf("%3c\n",ch);
    }

    return 0;
}