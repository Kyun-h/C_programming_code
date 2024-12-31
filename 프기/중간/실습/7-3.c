#include <stdio.h>

int main(void)
{
    int ary1[5] = {0, 0};
    int ary2[5] = {0, 0};
    int cnt=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ary1[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &ary2[j]);
    }

    for(int k=0;k<5;k++){
        if(ary1[k]==ary2[k]) {
            cnt++;
        }
    }
    if(cnt==5) printf("same");
    else printf("not same");

    return 0;
}