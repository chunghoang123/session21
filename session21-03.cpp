#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*ptr=fopen("bt01.txt","a");
	char chuoi[100];
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
	printf("nhap chuoi thanh cong");
	return 0;
}
