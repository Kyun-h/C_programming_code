#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
#pragma warning(disable:6031)


typedef struct
{
    int num;
    char name[20];
    double jum1;
    double jum2;
    double quiz;
} Student;

void print(Student* s, int count);
void search(Student* s, int count, char* name);

int main(void)
{
    FILE* file;
    Student* std;
    if ((file = fopen("f5.txt", "r")) == NULL)
    {
        printf("FIle is not opened.\n");
        exit(1);
    }
    int n;
    char ary[10];
    fscanf(file, "%d", &n);

    std = (Student*)malloc(n * sizeof(Student));

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%s", std[i].name);
        fscanf(file, "%lf", &std[i].jum1);
        fscanf(file, "%lf", &std[i].jum2);
        fscanf(file, "%lf", &std[i].quiz);
        cnt++;
    }

    fclose(file);

    print(std, cnt);
    scanf("%s", ary);

    search(std, cnt, ary);

    free(std);
    return 0;
}

void print(Student* s, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d %s %.1f %.1f %.1f %.1f\n", i + 1, s[i].name, s[i].jum1, s[i].jum2, s[i].quiz, s[i].jum1 + s[i].jum2 + s[i].quiz);
    }
    puts("");
}
void search(Student* s, int count, char* name)
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(name, s[i].name) == 0)
        {
            printf("%d %s %.1lf %.1lf %.1lf %.1lf", i + 1, s[i].name, s[i].jum1, s[i].jum2, s[i].quiz, s[i].jum1 + s[i].jum2 + s[i].quiz);
        }
    }
}