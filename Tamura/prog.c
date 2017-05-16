/*
　優:80-・良:70-・可:60-・不可: -59
*/

#include <stdio.h>

int main(void) {
	
	int point;
	
	scanf("%d", &point);
	
	// 優の判定
	if( point <= 100 && point >= 80 ) {
		printf("あなたの点数は優です\n");
	}
	
	// 不正な点数だよ！
	if( point > 100 || point < 0 ) {
		printf("正しく入力してね！\n");
	}
	
	return (0);
}