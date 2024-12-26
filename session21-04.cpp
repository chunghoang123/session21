#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*ptr=fopen("bt01.txt","r");
	char dongDau[100];
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	if(fgets(dongDau,sizeof(dongDau),ptr)==NULL){
		printf("loi/rong");
		fclose(ptr);
		return 1;
	}
	printf("ky tu dau tien cua file bt01.txt: %s",dongDau);
	fclose(ptr);
	return 0;
}
