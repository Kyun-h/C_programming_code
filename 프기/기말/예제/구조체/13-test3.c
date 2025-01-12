#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    char id[15];
} Student;

int main(void)
{
    Student s1 = {"Alice", 20, "20231002"};
    Student s2 = {"Alice", 20, "20231001"};

    if (memcmp(&s1, &s2, sizeof(Student)) == 0)
        printf("The students are equal.\n");
    else
        printf("The students are not equal.\n");

    return 0;
}