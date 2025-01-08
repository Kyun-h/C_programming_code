//0~99 랜덤한 상수 10개 저장 & 합 출력

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int t,cnt=0;
    srand(time(NULL));
    
    FILE *f;
    if((f=fopen("numbers.txt","w"))==NULL){
        printf("파일이 열리지 않아 종료합니다.\n");
        exit(1);
    }

    for(int i=0; i<10;i++){
        t=rand()%100;
        fprintf(f,"%d\n",t);
        cnt+=t;

    }
    fclose(f);

    printf("%d",cnt);

    return 0;
}