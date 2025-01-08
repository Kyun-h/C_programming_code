#include <stdio.h>
#include <stdlib.h>

int sumAry1D(int ary[], int size);
int main(void){
    FILE *f;
    if((f=fopen("f5.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }
    int r,c;
    int c_sum=0;
    fscanf(f,"%d %d",&r,&c);
    int **ary=(int **)malloc(sizeof(int*)*r);
    if(ary==NULL){
        printf("메모리 할당 실패.\n");
        exit(1);
    }

    for(int i=0; i<r;i++){
        ary[i]=(int *)malloc(c*sizeof(int));
    }   
    
    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            fscanf(f,"%d",&ary[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        printf("%d\n",sumAry1D(ary[i],3));
        c_sum += sumAry1D(ary[i],3);
    }
    printf("%d",c_sum);


    free(ary);
    fclose(f);
    return 0;
}

int sumAry1D(int ary[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += ary[i];
    }

    return sum;
}