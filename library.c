#include "UD.h"
#include "loadsave.h"

int main(){
	Book s[100];
	int count =0, index=0, menu, no;
	FILE *fp;
	

	fp = fopen("book.txt","r");
	if(fp != NULL){
		count = loadData(s,fp);
		index = count;
	}
	else{
		fprintf(stderr,"=> no such file!\n");
	}
	while(1){
		
		menu = selectMenu();

		if(menu == 0) break;
		if(menu == 1){
			listBook(s,index);
		}
		else if(menu == 2){
			count += addBook(&s[index++]);
			printf("=>added!\n");
		}
		else if(menu == 3){
			no = selectDataNo(s, index);
                if(no==0){
                    printf("canceled!!\n");
                    continue;
                }

                updateBook(&s[no-1]);

		}
		else if(menu == 4){
			no = selectDataNo(s, index);
                if(no==0){
                    printf("canceled!!\n");
                    continue;
                }
            int deleteok;
            printf("(really want to delete it? :1) ");
            scanf("%d", &deleteok);
            if(deleteok==1){
                if(deleteBook(&s[no-1])) count--;
            }

		}
		else if(menu == 5){
			saveData(s,index);
		}
	}
	
}
