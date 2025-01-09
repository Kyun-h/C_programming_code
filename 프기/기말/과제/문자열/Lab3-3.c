#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 80

void reverse(char ch[]);
int main(void){
    char ch[MAX_LEN];

    while(1){
        printf("문자열 입력(종료 q): ");
        fgets(ch,MAX_LEN,stdin);

        if((ch[0]=='q') && (ch[1]=='\n')&&(ch[2]=='\0')) break;

        reverse(ch);

        printf("%s\n",ch);

    }

    return 0;
}

void reverse(char ch[]){
    for(int i=0,j=(int)strlen(ch)-1;i<j;i++,j--){
        char c=ch[i];
        ch[i]=ch[j];
        ch[j]=c;
    }
}