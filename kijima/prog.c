#include<stdio.h>

int main(void){
	
	int point;
	
	scanf("%d",&point);
	
	//�D�̔���
	if(point<=100 && point>=80){
		printf("���Ȃ��̓_���͗D�ł�\n");
	}
	
	//�s���ȓ_������
	if(point>100|| point<0){
		printf("���������͂��ĂˁI\n");
	}
	return(0);
}