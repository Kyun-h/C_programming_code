#include <stdio.h>

int main(void){
    int a[3]={5,10,15};

    int *p=a;

    printf("%d\n", *p++);
    printf("%d\n\n",*p);

    return 0;
}