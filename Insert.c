#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node* Insert(struct Node* root,int d){
    if(root==NULL){
        root=getNewNode(d);
        return root;
    }

    else{
        if(d <= root->data){
            root->left=Insert(root->left,d);
        }
        else{
            root->right=Insert(root->right,d);
        }
        return root;
    }

}

struct Node* getNewNode(int data)
{
    //Important Lesson Here

    struct Node* newnode =(struct Node*) malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}
