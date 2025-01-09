#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    const char *temp_strs[] = {
        "Hello",
        "World",
        "Welcome",
        "To",
        "C programming"};
    int num_strings = sizeof(temp_strs) / sizeof(temp_strs[0]);

    char** strs=(char**)malloc(num_strings * sizeof(char*));
    if(strs==NULL){
        fprintf(stderr,"메모리 할당 실패\n");
        return 1;
    }

    for(int i=0;i<num_strings;i++){
        strs[i]=(char*)malloc((strlen(temp_strs[i])+1)*sizeof(char));
        if(strs[i]==NULL){
            fprintf(stderr,"메모리 할당 실패\n");
            return 1;
        }
    strcpy(strs[i],temp_strs[i]);
    }

    for(int i=0;i<num_strings;i++){
        printf("%s\n",strs[i]);
        free(strs[i]);
    }
    free(strs);

    return 0;
}