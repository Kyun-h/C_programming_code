#include <stdio.h>

int main(void){
    for(int i=1;i<10;i++){
        for(int j=1;j<6;j++){
            if(j!=5) printf("%d*%d=%d\t\t",j,i,i*j);
            else printf("%d*%d=%d",j,i,i*j);
        }
        if(i!=9) puts("");
    }

    return 0;
}