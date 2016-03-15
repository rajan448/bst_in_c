#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node* DeleteNode(struct Node* head,int data)
{
    struct Node* current=FindNode(head,data);

    if(current==NULL) return head;

    if((current->right == NULL) && (current->right == NULL))
    {
        free(current);
        head=NULL;
    }
    else if(current->left ==NULL)
    {

    }
    return head;
}
