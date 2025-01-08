#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    FILE *f;
    if((f=fopen("f2.txt","r"))==NULL){
        printf("파일이 n열리지 않습니다.\n");
        exit(1);
    }

    printf("90점 이상:\n");
    int jum,cnt=0;
    while(fscanf(f,"%d",&jum) == 1) {
        if(jum>=90){
            cnt++;
            printf("%d\n",jum);
        }
    }
    printf("개수:\n");
    printf("%d",cnt);


    return 0;
}