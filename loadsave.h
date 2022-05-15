#ifndef HEADER
#define HEADER
#include <string.h>
#include <stdio.h>
typedef struct{
	char author[100];
	char title[100];
	int id;
	int status;
	char category[100];
}Book;
#endif
void saveData(Book *s, int count);
int loadData(Book *s, FILE *fp);
