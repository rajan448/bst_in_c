#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

int main()
{
    head=NULL;
    struct Node* current;
/*
    int a,i,n;

    printf("Enter Number of elements to enter:");
    scanf("%d",&n);
    printf("Enter Elements:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a);
        head=Insert(head,a);
    }
*/
    head=Insert(head,5);
    head=Insert(head,3);
    head=Insert(head,1);
    head=Insert(head,6);
    head=Insert(head,12);
    head=Insert(head,4);
    head=Insert(head,7);

    printf("\nInorder Traversal:\n");
    Inorder(head);

    printf("\nPreorder Traversal:\n");
    Preorder(head);

    printf("\nPostorder Traversal:\n");
    Postorder(head);

    FindMax(head);
    FindMin(head);

    //printf("\nEnter number to Search:\n");
    //scanf("%d",&a);
    //Search(head,a);

    current=FindSuccesor(head,3);
    if(current==NULL) printf("NULL");
    else printf("%d",current->data);

    head=DeleteNode(head,5);

    printf("\nnew head:%d",head->data);

    printf("\nInorder Traversal:\n");
    Inorder(head);
    return 0;
}
