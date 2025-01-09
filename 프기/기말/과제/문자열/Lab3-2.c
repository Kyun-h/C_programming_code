#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 80

void output(char *p[],int n);
int main(void)
{
    FILE *f;
    char **p;
    char temp[MAX_LEN];

    if ((f = fopen("f2.txt", "r")) == NULL)
    {
        printf("File cannot be opened.\n");
        exit(1);
    }

    int n;

    fscanf(f, "%d", &n);

    p = (char**)malloc(n*sizeof(char*));

    for(int i=0;i<n;i++){
        fscanf(f,"%s", temp);
        p[i]=(char *)malloc((strlen(temp)+1)*sizeof(char));
        if(p[i]==NULL){
            fprintf(stderr,"메모리 할당 실패\n");
            return 1;
        }
        strcpy(p[i],temp);
    }

    output(p,n);

    for(int i=0;i<n;i++){
        free(p[i]);
    }
    free(p);
    fclose(f);
    return 0;
}

void output(char *p[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",p[i]);
        if(i==7 || i==14) puts("");
    }

}