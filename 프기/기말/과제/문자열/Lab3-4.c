#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20

void sort(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);
int main(void)
{
    FILE *f;
    if ((f = fopen("f2.txt", "r")) == NULL)
    {
        printf("File cannot be opened.\n");
        exit(1);
    }
    char ary[MAX_LEN][MAX_LEN];
    char temp[MAX_LEN];
    int count;
    fscanf(f, "%d", &count);

    for (int i = 0; i < count; i++)
    {
        fscanf(f, "%s", temp);
        strcpy(ary[i], temp);
    }

    sort(ary, count);

    output(ary, count);

    fclose(f);
    return 0;
}

void sort(char strings[][MAX_LEN], int count)
{
    for (int k = 0; k < count; k++)
    {
        for (int i = 0; i < count-1; i++)
        {
            if (strcmp(strings[i],strings[i + 1])>0)
            {
                char temp[MAX_LEN];
                strcpy(temp,strings[i]);
                strcpy(strings[i],strings[i+1]);
                strcpy(strings[i+1],temp);
            }
        }
    }
}

void output(char strings[][MAX_LEN], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s ", strings[i]);
        if(i==8) puts("");
    }
}
