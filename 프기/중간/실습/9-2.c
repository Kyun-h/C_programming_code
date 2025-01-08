#include <stdio.h>
char scoreToGrade(int score);

int main(void)
{
    int c;
    while (1)
    {
        scanf("%d", &c);
        if (c == -1)
            break;
        printf("%c\n", scoreToGrade(c));
    }

    return 0;
}

char scoreToGrade(int score)
{

    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}