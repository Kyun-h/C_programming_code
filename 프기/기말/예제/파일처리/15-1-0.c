#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* f;
    if((f=fopen("myinfo.txt","w"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    fprintf(f,"전화번호: 010=3018-3824, 주소: 서초구 대정로 557, 나이: 22\n");
    fclose(f);

    return 0;
}