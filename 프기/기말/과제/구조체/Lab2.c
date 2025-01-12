#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 80

typedef struct{
    char name[MAX_LEN];
    char director[MAX_LEN];
    int op_year;
    int during;
} MovieData;

void print(MovieData *m);

int main(void){
    MovieData md;
    MovieData *m=&md;

    fgets(md.name,25,stdin);
    fgets(md.director,25,stdin);
    scanf("%d",&md.op_year);
    scanf("%d",&md.during);

    //끝에 개행문자 삭제

    md.name[strcspn(md.name, "\n")] = '\0';
    md.director[strcspn(md.director, "\n")] = '\0';

    print(m);

    return 0;
}

void print(MovieData *m){
    printf("\nTitle : %s\n",m->name);
    printf("Director : %s\n",m->director);
    printf("Year : %d\n",m->op_year);
    printf("RunningTime : %d\n",m->during);
}