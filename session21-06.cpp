#include<stdio.h>
#include<stdlib.h>
int main(){
	char buffer[100];
	FILE*ptr,*fptr;
	ptr=fopen("bt01.txt","r");
	if(ptr==NULL){
		printf("ko moi dc file");
		return 1;
	}
	fptr=fopen("bt06.txt","w");
	if(fptr==NULL){
		printf("ko moi dc file");
		fclose(ptr);
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),ptr)!=NULL){
		fputs(buffer,fptr);
	}
	fclose(ptr);
	fclose(fptr);
	printf("da sao chep tu bt01 sang bt06");
	return 0;
}
