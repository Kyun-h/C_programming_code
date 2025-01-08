#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

    FILE *f1,*f2;

    if((f1=fopen("f3.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    if((f2=fopen("f3out.txt","w"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    char ch;
    int a,cnt=0;
    while(fscanf(f1,"%c",&ch)==1){
        if(isdigit(ch)){
            a = ch-'0';
            fprintf(f2,"%d",a);
            cnt+=a;
        }

    }
    fclose(f1);
    fclose(f2);

    printf("%d",cnt);
    return 0;
}