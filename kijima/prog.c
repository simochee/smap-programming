#include<stdio.h>

int main(void){
	
	int point;
	
	scanf("%d",&point);
	
	//—D‚Ì”»’è
	if(point<=100 && point>=80){
		printf("‚ ‚È‚½‚Ì“_”‚Í—D‚Å‚·\n");
	}
	
	//•s³‚È“_”‚¾‚æ
	if(point>100|| point<0){
		printf("³‚µ‚­“ü—Í‚µ‚Ä‚ËI\n");
	}
	return(0);
}