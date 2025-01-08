#include <stdio.h>
int kineticEnergy(int weight, int velocity);

int main(void){
    int w,v;
    scanf("%d %d",&w,&v);
    printf("%d", kineticEnergy(w,v));

    return 0;
}

int kineticEnergy(int weight, int velocity){
    int KE=0;
    KE=(weight*velocity*velocity)/2;

    return KE;
}