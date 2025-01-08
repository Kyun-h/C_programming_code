#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,sum=0;
    void *malloc(size_t size_t);
    void free(void*);
    int *score=NULL;
    double avg=0;


    printf("입력할 점수의 개수를 입력 >> ");
    scanf("%d",&n);

    if((score=(int *)malloc(sizeof(int)*n))==NULL){
        printf("메모리 할당에 문제가 있습니다.\n");
        exit(1);
    }

    printf("%d개의 점수 입력 >> ",n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    }

    printf("입력 점수: ");

    for(int j=0;j<n;j++){
        printf("%d ",score[j]);
    }
    puts("");

    free(score);
    avg=(double)sum/n;
    
    printf("합: %d 평균: %.1lf",sum,avg);

    return 0;
}