#include <stdio.h>

int main(void){
    const char *days[7]={
        "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
    };

    result(days);

    return 0;
}

void result(char* days[]){
    for(int i=0;i<7;i++){
        printf("%s\n",days[i]);
    }
}