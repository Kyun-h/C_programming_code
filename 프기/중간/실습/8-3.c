#include <stdio.h>
int isPrime(int x)
{
    int i;
    for(i=2;i<=x;i++){
        if(x%i==0) break;
    }
    if(i==x) return 1;
    else return 0;
}

void main()
{
    int x;
    scanf("%d", &x);
    printf("%s", isPrime(x) ? "prime" : "not prime");
}
