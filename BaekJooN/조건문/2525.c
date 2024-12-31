#include <stdio.h>

int main(void){
    int A,B,C;
    scanf("%d %d", &A,&B);
    scanf("%d",&C);
    B+=C;
    if(B<60 && A>23) {
        A=A%24; 
        printf("%d %d", A,B);
    }
    else if(B>59){
        A=A+(B/60);
        B=B%60;
        if(A>23) A=A%24;
        printf("%d %d", A,B);
    }
    else printf("%d %d",A,B);

    return 0;
}