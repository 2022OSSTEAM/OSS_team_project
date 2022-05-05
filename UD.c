#include "UD.h"

int updateBook(Book *s){
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

int deleteBook(Book *s){
    s->id = 0;
    s->status = 0;
    s->author[0] = '\0';
    s->title[0] = '\0';
    s->category[0] = '\0';

    return 0;
}
int selectDataNo(Book *s, int count){
    int no;
    listBook(s, count);
    printf("Number? (cancel: 0)? ");
    scanf("%d", &no);
    return no;
}