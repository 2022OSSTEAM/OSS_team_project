#include "CR.h"

int addBook(Book *s){
	printf("author name? ");
	fgets(s->author,100,stdin);
	s->author[strlen(s->author)-1] = '\0';
	
	printf("title? ");
	fgets(s->title,100,stdin);
	s->title[strlen(s->title)-1] = '\0';
	
	printf("category? ");
	fgets(s->category,100,stdin);
	s->category[strlen(s->category)-1] = '\0';

	printf("book id? ");
	scanf("%d",&s->id);
	
	printf("rental status? ");
	scanf("%d",&s->status);

	return 1;

}
void listBook(Book *s, int count){
	printf("=========================================\n");
	printf("Author Title Category ID status\n");

	for(int i=0; i < count; i++){
			if(s[i].id > 0){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
			}
	}
	printf("\n");
}
int selectMenu(){
    int menu;
    printf("\n**********\n");
    printf("1. List books\n");
    printf("2. Add book\n");
    printf("3. Update book\n");
    printf("4. Delete book\n");
    printf("5. Save\n");
    printf("6. Search\n");
    printf("0. Terminate\n\n");
    printf("=> Select Menu : ");
    scanf("%d", &menu);
    getchar();
    return menu;
}
