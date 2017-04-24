#include <stdio.h>

int main(void) {
	char name[32];
	
	printf("名前：");
	scanf("%s", name);
	
	printf("ようこそ、%sさん！\n", name);
	
	return 0;
}