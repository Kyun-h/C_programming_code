#include <stdio.h>
#include <stdlib.h>

int *buildArray(int *size); /* 동적배열 생성 및 배열 반환*/
int findMin(int *ary, int size);

int main(void)
{
    FILE *f;

    if((f=fopen("f2.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int n,*p_ary;
    fscanf(f,"%d", &n);
    p_ary=buildArray(&n);
    printf("%d",findMin(p_ary,n));

    free(p_ary);
    fclose(f);
    return 0;
}

int *buildArray(int *size)
{
    FILE *f;

    if((f=fopen("f2.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int *ary;
    ary = (int *)malloc(*size * sizeof(int));
    for(int i=0; i< *size; i++){
        fscanf(f,"%d",&ary[i]);
    }

    return ary;
}

int findMin(int *ary, int size)
{
    int min=ary[0];
    for(int i=1;i<size;i++){
        if(min>ary[i]) min=ary[i];
    }
    return min;

}
