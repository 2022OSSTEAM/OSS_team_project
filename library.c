#include "CR.h"

int main(){
	Book s[100];
	int count =0, index=0, menu;
	FILE *fp;

	/*fp = fopen("book.txt","r");
	if(fp != NULL){
		count = loadData(s,fp);
		index = count;
	}
	else{
		fprintf(stderr,"=> no such file!\n");
	}*/
	while(1){
		
		menu = selectMenu();

		if(menu == 0) break;
		if(menu == 1){
			listBook(s,index);
		}
		else if(menu == 2){
			count += addBook(&s[index++]);
			printf("=>추가됨!\n");
		}
		else if(menu == 3){
		}
		else if(menu == 4){
		}
		else if(menu == 5){

		}
	}
	
}