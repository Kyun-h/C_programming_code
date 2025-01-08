#include <stdio.h>
#include <stdlib.h>

int main(void){
    char* fname = "basic.txt";
    FILE* f;

    if((f=fopen(fname,"w"))==NULL){
        printf("파일이 열리지 않아 종료합니다.\n");
        exit(1);
    };

    fprintf(f,"이름 손혜진 학생의 성적은 99입니다.\n");
    fclose(f);

    return 0;
}