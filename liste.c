#include "liste.h"

void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}
void modificare_element(Node **head, int val,int poz){
    int nr=0;
    Node *aux=*head;
    while(aux!=NULL){
        nr++;
        if(nr==poz)
            aux->val=val;
        aux=aux->next;
    }
}
void modificare_lista(Node **head,int sum){
    int nr;
    Node* aux=*head;
    while(aux!=NULL){
        nr=aux->val;
        aux->val=sum;
        sum=sum-nr;
        aux=aux->next;
    }
}
