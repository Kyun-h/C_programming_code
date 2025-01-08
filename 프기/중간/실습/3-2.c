#include <stdio.h>
#define MAX_SIZE 10

int main(void)
{
	int input, sum;
	scanf("%d", &input);

	int temp[MAX_SIZE] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};

	int result = 0, i = 0;
	while (temp[i] != '\0')
	{
		result = input / temp[i];
		input %= temp[i];
		printf("%d:%d\n", temp[i],result);
		i++;
	}

	return 0;
}