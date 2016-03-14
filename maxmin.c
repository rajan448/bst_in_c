#include<stdio.h>

#include "bst.h"

struct Node* FindMax(struct Node* head)
{
    while(head->right != NULL)
    {
        head=head->right;
    }
    return head;
}


struct Node* FindMin(struct Node* head)
{
    while(head->left != NULL)
    {
        head=head->left;
    }
    return head;
}
