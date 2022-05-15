#include "loadsave.h"
void saveData(Book *s, int count){
	FILE *fp;
	fp = fopen("book.txt","w");
	for(int i=0; i<count; i++){
		if(s[i].id > 0){
			if(i != count-1){
				fprintf(fp, "%d %d\n",s[i].id, s[i].status);
				fprintf(fp, "%s\n",s[i].author);
				fprintf(fp, "%s\n",s[i].title);
				fprintf(fp, "%s\n",s[i].category);
			}
			else{
				fprintf(fp, "%d %d\n",s[i].id, s[i].status);
				fprintf(fp, "%s\n",s[i].author);
				fprintf(fp, "%s\n",s[i].title);
				fprintf(fp, "%s",s[i].category);
			}
		}
	}
	fclose(fp);
	printf("=>save book data!\n");
	return;
}

int loadData(Book *s, FILE *fp){
	int i=0;
	while(!feof(fp)){
		fscanf(fp,"%d %d\n",&s[i].id, &s[i].status);
		fgets(s[i].author,100,fp);
		s[i].author[strlen(s[i].author)-1]='\0';
		fgets(s[i].title,100,fp);
		s[i].title[strlen(s[i].title)-1]='\0';
		fgets(s[i].category,100,fp);
		s[i].category[strlen(s[i].category)-1]='\0';
		i++;
	}
	fclose(fp);
	printf("=>load book data!\n");
	return i;
}
