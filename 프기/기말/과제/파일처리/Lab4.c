#include <stdio.h>
#include <stdlib.h>

void minMax(int data[], int n, int *min, int *max);
int main(void)
{

    FILE *f;
    if ((f = fopen("f4.txt", "r")) == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }
    int n,data[50]={0};
    int min=0,max=0;

    fscanf(f, "%d", &n);


    for(int j=0; j<n; j++){
        fscanf(f,"%d",&data[j]);
    }
    minMax(data,n,&min,&max);

    printf("%d %d",max,min);
    fclose(f);

    return 0;}

void minMax(int data[], int n, int *min, int *max)
{
    *min = data[0];
    *max = data[0];

    for (int i = 0; i < n; i++){
        if(*min>data[i]) *min=data[i];
        if(*max<data[i]) *max=data[i];
    }
}