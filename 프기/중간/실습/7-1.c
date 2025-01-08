#include <stdio.h>

int main(void){
    int a=9999,cnt=0;
    int ary[100]={ 0,0 };

    int i=0;
    while(a!=0){
        scanf("%d",&a);
        cnt++;
        ary[i]=a;
        i++;
    }
    printf("%d\n",cnt-1);
    for(cnt-=2;cnt>=0;cnt--) printf("%d ",ary[cnt]);

    return 0;
}