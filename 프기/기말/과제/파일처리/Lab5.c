#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double avg1(double sum);
double pf1(double sum,double avg);

int main(void){
    srand(time(NULL));

    double avg,pf,sum=0;

    FILE *f;
    if((f=fopen("f5.txt","w"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    for(int i=0; i<10000;i++){
        int t=rand()%100+1;
        fprintf(f,"%d\n",t);
        sum+=t;
    }

    printf("평균: %.2lf\n",avg1(sum));
    printf("표준편차: %.2lf",pf1(sum,avg1(sum)));


    fclose(f);
    return 0;
}

double avg1(double sum){
    double avg;
    avg=sum/10000;
    return avg;
}

double pf1(double sum,double avg){
    double var=0;
    double num;

    FILE *f1;
    if((f1=fopen("f5.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }
    for(int i=0;i<10000;i++){
        fscanf(f1,"%lf",&num);
        var+=(num-avg) * (num-avg);
    }
    var=var/10000;

    double std;
    std=sqrt(var);
    return std;
}