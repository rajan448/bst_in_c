#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node* Insert(struct Node* root,int d){

    //Important Lesson Here

    struct Node* newnode =(struct Node*) malloc(sizeof(struct Node));
    newnode->data=d;
    newnode->left=NULL;
    newnode->right=NULL;

    if(root==NULL){
        root=newnode;
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
