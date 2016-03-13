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
    //Important Lesson Here
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
                Search(temp->left,n);
                return;
            }
            else{
                Search(temp->right,n);
                return;
            }
        }

    }
    }

}
