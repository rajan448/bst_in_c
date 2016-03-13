#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

void View(struct Node* h){
    if(head==NULL){
        printf("Empty Tree");
        return;
    }
    else{
        printf("%d",head->right->data);
        return;
    }

}
