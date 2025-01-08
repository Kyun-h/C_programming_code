#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *f;
    if((f=fopen("grade.txt","w"))==NULL){
        printf("파일이 열리지 않아 종료합니다.\n");
        exit(1);
    }

    char name[10];
    int grade_j,grade_g,cnt=0;
    printf("이름과 성적(중간, 기말)을 입력하세요.\n");
    scanf("%s %d %d",name,&grade_j,&grade_g);

    fprintf(f,"1 %s %d %d",name,grade_j,grade_g);
    fclose(f);

    FILE* f2;
    f2=fopen("grade.txt","r");
    if(f2==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("번호        이름    중간    기말");

    fscanf(f2,"%s\t\t%d\t%d\n",name,10,&grade_j,&grade_g);
    fclose(f2);

    printf("\n1\t\t%s\t%d\t%d", name, grade_j,grade_g);


    return 0;
}