#include <stdio.h>
#include <conio.h>

int main(){
    char c;

    printf("Enter a character: ");
    c=_getch(); //_getche => 입력받으면 바로 나옴 , _getch => 입력 뭐했는지 안 보임
    
    printf("\nYou entered: %c\n",c);
    
    return 0;
}