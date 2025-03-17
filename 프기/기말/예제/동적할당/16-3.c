//realloc 활용
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = NULL;
    int size = 0, capacity = 2;

    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL)
        return 1;

    printf("Enter numbers (exit with -1): \n");
    while (1)
    {
        int num;
        printf("Input: ");
        scanf("%d", &num);

        if (num == -1)
            break;
        if (size == capacity)
        {
            capacity *= 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (temp == NULL)
            {
                free(arr);
                return 1;
            }
            arr = temp;
        }
        arr[size++]=num;
    }
    printf("Entered numbers: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    puts("");
    free(arr);

    return 0;
}
