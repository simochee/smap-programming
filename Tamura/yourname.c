#include <stdio.h>

int main(void) {
	
	char name[32];
	
	printf("あなたの好きなものは？\n");
	
	scanf("%s", name);
	
	printf("%sが大好きです！\n", name);
	
	return (0);
}