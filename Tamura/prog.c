/*
�@�D:80-�E��:70-�E��:60-�E�s��: -59
*/

#include <stdio.h>

int main(void) {
	
	int point;
	
	scanf("%d", &point);
	
	// �D�̔���
	if( point <= 100 && point >= 80 ) {
		printf("���Ȃ��̓_���͗D�ł�\n");
	}
	
	// �s���ȓ_������I
	if( point > 100 || point < 0 ) {
		printf("���������͂��ĂˁI\n");
	}
	
	return (0);
}