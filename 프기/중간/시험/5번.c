/*

*           *

*  *     *  *

*  *  *  *  *

*  *     *  *

*           *

*/

#include <stdio.h>
#include <stdlib.h>

void convertToBase(int number,int base);
int main(void){
    int ten,n;
    scanf("%d %d",&ten,&n);

    convertToBase(ten,n);

    return 0;
}

void convertToBase(int number,int base){
    char buffer[33];
    int index=0;

    while(number>0){
        int remainder = number%base;
        if(remainder<10){
            buffer[index++] = '0'+remainder;
        }else{
            buffer[index++] = 'A' + (remainder-10);
        }
        number/=base;
    }
    for(int i=index-1;i>=0;i--){
        printf("%c",buffer[i]);
    }
    printf("\n");
}