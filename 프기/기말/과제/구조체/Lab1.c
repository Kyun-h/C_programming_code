#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* arr[])
{
    if(argc!=4) printf("사용방법: 프로그램이름 <operation> <num1> <num2>\n");
    char operator=arr[1][0];
    double a = atof(arr[2]);
    double b = atof(arr[3]);

    if (strcmp(operator,"+")==0)
        printf("Result = %.1lf", a+b);
    else if (strcmp(operator,"-")==0)
        printf("Result = %.1lf", a-b);
    else if (strcmp(operator,"*")==0)
        printf("Result = %.1lf", a*b);
    else if (strcmp(operator,"/")==0)
        printf("Result = %.1lf", a/b);

    
    return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20
typedef struct
{
    char num1;
    char num2;
    char command;
    char name[5];
} Com;

int main(void)
{
    Com c;
    char ary[4];
    char *delimiter = " ";

    printf("> ");
    fgets(ary, MAX_LEN, stdin);
    char *ptoken = strtok(ary, delimiter);

    for (int i = 0; i < 4; i++)
    {
        ary[i] = ptoken;
        ptoken = strtok(NULL, delimiter);
    }

    ary[0] = c.name;
    ary[1] = c.command;
    ary[2] = c.num1;
    ary[3] = c.num2;

    if (c.num2 == '\n')
        return 0;
    if (c.command == '+')
        printf("Result = %.1lf", (double)c.num1 + (double)c.num2);
    else if (c.command == '-')
        printf("Result = %.1lf", (double)c.num1 - (double)c.num2);
    else if (c.command == '*')
        printf("Result = %.1lf", (double)c.num1 * (double)c.num2);
    else if (c.command == '/')
        printf("Result = %.1lf", (double)c.num1 / (double)c.num2);
    else
        printf("사용방법: 프로그램이름 <operation> <num1> <num2>");

    return 0;
}
*/