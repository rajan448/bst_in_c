#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

//InOrder Traversal Routine

void Inorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }

    else{
        Inorder(head->left);
        printf("%d ",head->data);
        Inorder(head->right);
    }
}

//PreOrder Traversal Routine

void Preorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        printf("%d ",head->data);
        Preorder(head->left);
        Preorder(head->right);

    }

}

//Postorder Traversal Routine

void Postorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        Postorder(head->left);
        Postorder(head->right);

        printf("%d ",head->data);
    }

}


