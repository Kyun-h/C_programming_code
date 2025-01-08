#include <stdio.h>
#include <stdlib.h>

void add_array(double source1[], double source2[], double target[], int num);

int main(void)
{
    int size;
    double *source1 = NULL, *source2 = NULL, *target;
    FILE *f;

    if((f=fopen("f1.txt","r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    fscanf(f,"%d", &size);

    source1 = (double *)malloc(sizeof(double) * size);
    source2 = (double *)malloc(sizeof(double) * size);
    target = (double *)malloc(sizeof(double) * size);

    for (int i = 0; i < size; i++)
    {
        fscanf(f,"%lf", &source1[i]);
    }
    for (int j = 0; j < size; j++)
    {
        fscanf(f,"%lf", &source2[j]);
    }

    
    add_array(source1, source2, target, size);
    free(source1);
    free(source2);
    free(target);

    for (int i = 0; i < size; i++)
        printf("%.2lf ", target[i]);

    fclose(f);
    return 0;
}

void add_array(double source1[], double source2[], double target[], int num)
{
    for (int i = 0; i < num; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}