#include<stdio.h>

typedef struct{
	char author[100],
	char title[100],
	int id,
	int status,
	char category[100],
}Book;

int addBook(Book *s);
void listBook(Book *s, int count);
