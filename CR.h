#include <stdio.h>
#include <string.h>
#ifndef HEADER
#define HEADER
typedef struct{
	char author[100];
	char title[100];
	int id;
	int status;
	char category[100];
}Book;
#endif

int addBook(Book *s);
void listBook(Book *s, int count);
int selectMenu();
