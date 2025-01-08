#include <stdio.h>
int cnt=0;

int checkTwins(int a);
int main(void){
    int a;
    while(1){
    scanf("%d",&a);

    if(a==0) break;

    if(checkTwins(a)){
        printf("yes\n");
    }
    else printf("no\n");
    }

    return 0;
}

int checkTwins(int a){

    if(a%10 == (a/10)%10 || a<10){
        return 1;
    }
    else return 0;

    a/=10;
    checkTwins(a);
}