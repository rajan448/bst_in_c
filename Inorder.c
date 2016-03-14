
#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

void Inorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }

    else{
        Inorder(head->left);
        printf("%d \n",head->data);
        Inorder(head->right);
    }

}
