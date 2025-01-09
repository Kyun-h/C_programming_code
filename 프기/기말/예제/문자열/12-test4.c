#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(void){
    char line[MAX_LEN];
    printf("\nEnter text (Ctrl + Z to end):\n");
    while(fgets(line,MAX_LEN,stdin) != NULL){
        line[strlen(line)-1]='\0';
        printf("%s\n",line);
    }
    printf("End of input.\n");

    return 0;
}