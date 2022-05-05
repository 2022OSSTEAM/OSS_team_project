#include "CR.H"

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

	for(int i=0; i<count; i++){
			if(s->id != 0){
				printf("%2d ",i+1);
				printf("%s %s %s %d %d\n",s[i].author,s[i].title,s[i].category,s[i].id,s[i].status);
			}
	}
	printf("\n");
}
int selectMenu(){
    int menu;
    printf("\n**********\n");
    printf("1. 책 조회\n");
    printf("2. 책 추가\n");
    printf("3. 책 수정\n");
    printf("4. 책 삭제\n");
    printf("5. 저장\n");
    printf("6. 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴를 입력하세요-> ");
    scanf("%d", &menu);
    getchar();
    return menu;
}
