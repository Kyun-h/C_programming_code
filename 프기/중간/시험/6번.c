#include <stdio.h>
#include <ctype.h>

int main(void){
    char alpha[50];
    scanf("%s",&alpha);

    for(int k=0;k<26;k++){
        for(int i=65; i<=90; i++){
            if(alpha[k]==i) printf("%c",i);
            tolower(alpha[k]);
            
        }
    }

    return 0;
}