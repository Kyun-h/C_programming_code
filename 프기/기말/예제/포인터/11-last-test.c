#include <stdio.h>
#define COLS 3

void doubleElements(int (*prt)[COLS],int rows);

int main(void){

    int arr[2][COLS]={{1,2,3},{4,5,6}};

    doubleElements(arr,2);

    printf("Array after doubleing elements:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<COLS;j++){
            printf("%d ",arr[i][j]);
        }
        puts("");
    }

    return 0;
}

void doubleElements(int (*ptr)[COLS],int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<COLS;j++){
            ptr[i][j] *=2;
        }
    }
}