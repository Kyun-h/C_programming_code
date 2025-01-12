#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

#define MAX_LEN 80
typedef struct
{
    int number;
    char name[MAX_LEN];
    char adress[MAX_LEN];
    int dollar;
    double incent;

} Employee;

void print(Employee e[], int count);

int main(void)
{
    FILE* file;
    Employee ep;
    Employee* p;
    int count = 0;
    if ((file = fopen("f3.txt", "r")) == NULL)
    {
        printf("File cannot be opened.\n");
        exit(1);
    }

    p = (Employee*)malloc(MAX_LEN * sizeof(Employee));

    for (int i = 0; i < 3; i++)
    {
        fscanf(file, "%d", &p[i].number);
        fscanf(file, "%s", p[i].name);
        fgetc(file);
        fgets(p[i].adress, MAX_LEN, file);
        p[i].adress[strcspn(p[i].adress, "\n")] = '\0';
        fscanf(file, "%d", &p[i].dollar);
        fscanf(file, "%lf", &p[i].incent);
        count++;
    }

    print(p, count);

    fclose(file);
    free(p);
    return 0;
}

void print(Employee p[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d %s %s %d %.0lf%% %.1f", p[i].number, p[i].name, p[i].adress, p[i].dollar, 100 * (p[i].incent), p[i].dollar * (12 + p[i].incent));
        puts("");
    }
}