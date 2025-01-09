#include <stdio.h>
#include <string.h>
#define MAX_LEN 80

void input(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);

int main(void){
    char ary[3][MAX_LEN];
    input(ary,3);
    puts("");
    output(ary,3);

    return 0;
}
void input(char strings[][MAX_LEN], int count){
    for(int i=0;i<count;i++){
        fgets(strings[i],MAX_LEN,stdin);
    }
}

void output(char strings[][MAX_LEN], int count){
    for(int i=0;i<count;i++){
        printf(strings[i],MAX_LEN,stdin);
    }

}