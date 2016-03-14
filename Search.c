#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

void Search(struct Node* head,int n)
{
    if(head == NULL){
        printf("Not Found\n");
        return;
    }
    else{

    struct Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data == n)
        {
            printf("Found\n");
            return;
        }
        else{
            if(n < temp->data){
                Search(temp->left,n); //recursive call to Search
                return;
            }
            else{
                Search(temp->right,n); //recursive call to Search
                return;
            }
        }
      }
    }
}


//SIMPLE RECURSIVE FUNCTION RETURNING POINTER TO NODE CONTAINING N

struct Node* FindNode(struct Node* head,int n)
{
    if ((head==NULL) ||(head->data==n))
    {
        return head;
    }
    else{
        if(n < head->data)
        {
            return FindNode(head->left,n);
        }
        else
        {
            return FindNode(head->right,n);
        }
    }
}
