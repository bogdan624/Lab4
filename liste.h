#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node{
	Data val;
	struct Node *next;
}Node;
void addAtBeginning(Node **, Data );
void addAtEnd(Node** , Data );
void display(Node *);
void modificare_element(Node **, int ,int);
void modificare_lista(Node **,int);
