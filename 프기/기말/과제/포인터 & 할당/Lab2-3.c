/* qsort example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

int compare(const void *a, const void *b)
{
    int arg1 = *(const double*)a;
    int arg2 = *(const double*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main()
{
    FILE *f;
    if((f=fopen("f3.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int n, size;
    fscanf(f,"%d", &size);
    

    double *ary = (double *)malloc(sizeof(double) * size);
    for(int i=0;i<size;i++){
        fscanf(f,"%lf",&ary[i]);
    }

    qsort(ary, size, sizeof(double), compare);
    for (int i = 0; i < size; i++)
        printf("%.1lf ", ary[i]);


    free(ary);
    return 0;
}