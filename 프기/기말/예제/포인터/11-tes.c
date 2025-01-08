#include <stdio.h>

int main(void){
    int td[2][3] = {{1,2,3},{4,5,6}};

    printf("%u\n",(unsigned)sizeof(td));
    printf("%u\n",(unsigned)sizeof(td[0]));

    *(*td+4)=20; //td[1][1]=20
    *(*(td+1)+2)=30; //td[1][2]=30

    printf("%u\n",td[0][0]);
    printf("%u\n",td[1][1]);
    printf("%u\n",td[1][2]);

    return 0;
}