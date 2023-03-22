#include "liste.h"

int main()
{
    Node *head=NULL;
    addAtBeginning(&head,7);
    addAtBeginning(&head,6);
    addAtBeginning(&head,5);
    addAtEnd(&head,4);
    display(head);
    return 0;
}
