#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node* DeleteNode(struct Node* head,int data)
{
    if(head==NULL) return head;

    if(data < head->data)
    {
        head->left = DeleteNode(head->left,data);
    }
    else if(data > head->data){
        head->right = DeleteNode(head->right,data);
    }
    else
    {
        /*Correct since it is negativity test it is evident that
        if there is no left child and also data exists in node than it
        must have either no child or only right child..rajan*/

        if(head->left == NULL)
        {
            struct Node* temp=head->right;
            free(head);
            return temp;
        }

        else if(head->right==NULL)
        {
            struct Node* temp=head->left;
            free(head);
            return temp;
        }

        struct Node* temp=FindSuccesor(head,data);
        head ->data = temp->data;
        head->right=DeleteNode(head->right,temp->data);
    }
    return head;
}
