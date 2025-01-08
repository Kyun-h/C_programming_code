#include <stdio.h>

int main(void){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof (arr[0]);
    int *p=arr;

    for(int i=0;i<length;i++){
        printf("%d\n",*(p+i));
    }

    return 0;
}