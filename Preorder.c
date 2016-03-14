#include<stdio.h>

#include "bst.h"

void Preorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        printf("%d \n",head->data);
        Preorder(head->left);
        Preorder(head->right);
    }

}
