#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char fname[100];
    int calories;
} Food;

int totalCalories(Food ary[], int size);
int main(void)
{
    FILE *file;
    if((file=fopen("f4.txt","r"))==NULL){
        printf("File is not opened.\n");
        exit(1);
    }

    Food *fd;
    fd=(Food *)malloc(10*sizeof(Food));

    int size=0;
    for(int i=0;i<5;i++){
        fscanf(file,"%s", &fd[i].fname);
        fscanf(file,"%d", &fd[i].calories);
        size++;
    }
    printf("%d",totalCalories(fd,size));

    free(fd);
    fclose(file);
    return 0;
}
int totalCalories(Food ary[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=ary[i].calories;
    }
    return sum;
}