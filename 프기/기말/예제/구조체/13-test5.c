#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float grade;
} Student;

void input(Student *s){
    fgets(s->name,sizeof(s->name),stdin);
    s->name[strcspn(s->name, "\n")] == '\0';
    scanf("%d",&s->age);
    scanf("%f",&s->grade);
}

void print(const Student *s){
    printf("%s\n",s->name);
    printf("%d\n",s->age);
    printf("%.2f\n",s->grade);
}

int main(void){
    Student student;
    Student *s = &student;

    input(s);
    print(s);

    return 0;
}