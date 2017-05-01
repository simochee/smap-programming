#include <stdio.h>

int main(void) {
	
	//1.名前を入力してもらう
	//2. 名前を表示する
	
	char name [32];
	char name1 [32];
	printf("嫌いな教科は?\n");
	
	scanf("%s" ,name);
	
	printf("あなたの嫌いな教科は%sです。\n", name);
	printf("本当に！？ 単位落としてない大丈夫！？");

	
	return 0;
}