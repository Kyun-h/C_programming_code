#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union{
    int i;
    float f;
    char str[20];
} Data;

int main(void){
    Data *dataPtr = (Data*)malloc(sizeof(Data));

    if(dataPtr==NULL){
        return 1;
    }

    dataPtr->i=42;
    printf("Integer: %d\n",dataPtr->i);

    dataPtr->f=3.14f;
    printf("Float: %.2f\n",dataPtr->f);

    strcpy(dataPtr->str,"Hello, Union");
    printf("String: %s\n",dataPtr->str);

    free(dataPtr);

    return 0;
}