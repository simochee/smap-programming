#include <stdio.h>

int main(void) {
	
	char name[32];
	
	printf("なにが楽しいですか?\n");
	
	scanf("%s", name);
	
	printf("わたしは%sが楽しいです！\n", name);
	
	return 0;
}