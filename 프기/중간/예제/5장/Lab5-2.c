//로그인 프로그램램

#include <stdio.h>

int main(void) {
	int key = 12345678;

	int origin;
	printf("ID로 사용할 8자리의 정수를 입력하세요. >> ");
	scanf("%d", &origin);

	int encode = origin ^ key;
	printf("입력한 ID: %d\n", origin);
	printf("암호화하여 저장된 ID: %d\n", encode);

	int input;
	printf("로그인할 ID를 입력하세요 >> ");
	scanf("%d", &input);

	int result = encode ^ key;
	printf("로그인 성공 여부: %d\n", input == result);
	return 0;
}