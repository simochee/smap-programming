#include<stdio.h>

int main(void){

	//1.名前を入力もらう
	//2.名前を表示する
	
	char name[32];
	printf("あなたの好きなものは?\n");
	
	scanf("%s",name);
	
	printf("わたしは%sが好きです！\n",name);
	
	return（0);
}