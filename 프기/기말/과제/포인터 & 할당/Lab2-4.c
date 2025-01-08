#include <stdio.h>
#include <stdlib.h>

void print1DArray(int *d[], int n);
int main(void){
    FILE *f;
    if((f=fopen("f4.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int ary[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            fscanf(f,"%d",&ary[i][j]);
        }
    }

    int *p[4]={&ary[1][0],&ary[3][0],&ary[0][0],&ary[2][0]};
    
    print1DArray(p,4);

    fclose(f);
    return 0;
}

void print1DArray(int *d[], int n){
    for(int i=0;i<n;i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", d[i][j]);
        }
        puts("");
    }
}