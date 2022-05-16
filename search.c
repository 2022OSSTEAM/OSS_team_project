#include "search.h"

int searchTitle(Book *s, int count){
    int scnt = 0;
    char search[20];
    printf("Title? ");
    scanf("%[^\n]s", search);


    printf("=========================================\n");
	printf("Author Title Category ID status\n"); 
    for(int i=0; i<count; i++){
        if(s[i].id <= 0) continue;
        if(strstr(s[i].title, search)){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> No data retrieved");
    printf("\n");  
    return 1;
}

int searchAuthor(Book *s, int count){
    int scnt = 0;
    char search[20];
    printf("Author? ");
    scanf("%[^\n]s", search);


    printf("=========================================\n");
	printf("Author Title Category ID status\n");   
    for(int i=0; i<count; i++){
        if(s[i].id <= 0) continue;
        if(strstr(s[i].author, search)){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> No data retrieved");
    printf("\n");  
    return 1;
}



int searchId(Book *s, int count){
    int scnt = 0;
    int search;
    printf("Id? ");
    scanf("%d", &search);


    printf("=========================================\n");
	printf("Author Title Category ID status\n");   
    for(int i=0; i<count; i++){
        if(s[i].id <= 0) continue;
        if(s[i].id == search){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> No data retrieved");
    printf("\n");  
    return 1;

}

int searchAble(Book *s, int count){
    int scnt = 0;
    int bookAble = 0;
    printf("A list of available books\n");



    printf("=========================================\n");
	printf("Author Title Category ID status\n");   
    for(int i=0; i<count; i++){
        if(s[i].id <= 0) continue;
        if(s[i].status== bookAble){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> No data retrieved");
    printf("\n");  
    return 1;


}

