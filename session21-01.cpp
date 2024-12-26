#include<stdio.h>
#include<stdlib.h>
int main(){
	char chuoi[100];
	FILE*ptr=fopen("bt01.txt","w");
	printf("moi nhap chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	if(fputs(chuoi,ptr)==EOF){
		printf("loi");
		return 1;
	}
	fclose(ptr);
	printf("chuoi dc nhap thanh cong");
	return 0;
}
