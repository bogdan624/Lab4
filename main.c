#include "liste.h"

int main()
{
    /*Node *head=NULL;
    addAtBeginning(&head,7);
    addAtBeginning(&head,6);
    addAtBeginning(&head,5);
    addAtEnd(&head,4);
    display(head);
    modificare_element(&head,10,2);
    display(head);*/
    Node* lista=NULL;
    int val;
    for(int i=0;i<5;i++){
        scanf("%d",&val);
        addAtEnd(&lista,val);
    }
    modificare_lista(&lista);
    display(lista);
    adaugare_element(&lista,2,7);
    display(lista);
    return 0;
}
