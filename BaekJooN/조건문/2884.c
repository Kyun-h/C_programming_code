#include <stdio.h>

int main(void){
    int H,M;
    scanf("%d %d", &H,&M);
    if(M<45) {
        M=60-(45-M);
        if(H==0) H=24;
        H-=1;
        printf("%d %d",H,M);
    }
    else if(M>=45){
        printf("%d %d", H,M-45);
    }
}