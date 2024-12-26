#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*ptr=fopen("bt01.txt","r");
	char kyTu;
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	kyTu=fgetc(ptr);
	if(kyTu == EOF){
		printf("loi/rong");
		fclose(ptr);
		return 1;
	}
	printf("ky tu dau tien cua file bt01.txt: %c",kyTu);
	fclose(ptr);
	return 0;
}
