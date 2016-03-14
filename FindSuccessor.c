#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node* FindSuccesor(struct Node* head,int data)
{
    struct Node* current=FindNode(head,data);
    if(current==NULL) return NULL;

    else
    {
        if(current->right !=NULL)
        {
            return FindMin(current->right);
        }

        else
        {
            struct Node* succ=NULL;
            struct Node* ances=head;

            while(ances != current)
            {
                if(ances->data > current->data)
                {
                    succ=ances;
                    ances=ances->left;
                }
                else
                {
                    ances=ances->right;
                }
            }
            return succ;
        }
    }
}
