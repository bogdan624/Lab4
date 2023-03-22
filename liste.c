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
void modificare_lista(Node **head){
    int nr;
    int s=0;
    Node* aux=*head;
    while(aux!=NULL){
        s=s+aux->val;
        aux=aux->next;
    }
    Node* aux1=*head;
    while(aux1!=NULL){
        nr=aux1->val;
        aux1->val=s;
        s=s-nr;
        aux1=aux1->next;
    }
}
void adaugare_element(Node **head,int poz, int val){
    Node *aux=*head;
    int nr=1;
    while(nr<poz){
        aux->val=aux->val+val;
        aux=aux->next;
        nr++;
    }
    aux->val=aux->val+val;
    Node* temp;
    temp=aux->next;
    Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = val;
	aux->next=newNode;
    aux->next->next=temp;
    aux=*head;
    while(aux->val!=val){
        aux=aux->next;
    }
    aux->val=aux->val+aux->next->val;
    aux=aux->next;
}
