#include<stdio.h>
#include<stdlib.h>
int main(){
	int soDong;
	char dong[100];
	FILE*ptr=fopen("bt05.txt","w");
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	printf("moi nhap so dong can ghi trong file: ");
	scanf("%d",&soDong);
	getchar();
	for(int i=0;i<soDong;i++){
		printf("nhap nd cho dong %d",i+1);
		fgets(dong,sizeof(dong),stdin);
		fputs(dong,ptr);
	}
	fclose(ptr);
	ptr=fopen("bt05.txt","r");
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	printf("nd trong file: ");
	while(fgets(dong,sizeof(dong),ptr)!=NULL){
		printf("%s",dong);
	}
	fclose(ptr);
	return 0;
}
