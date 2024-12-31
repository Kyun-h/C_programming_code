#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c) printf("%d", 10000+1000*a);
    else if(a==b && b!=c) printf("%d", 1000+100*a);
    else if(b==c && b!=a) printf("%d", 1000+100*b);
    else if(a==c && a!=b) printf("%d", 1000+100*c);
    
    if(a!=b && b!=c && a!=c) {
        int max=a;
        if(max<b) max=b;
        if(max<c) max=c;

        printf("%d", max*100);
    }
    return 0;
}