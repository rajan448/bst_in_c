#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

int main()
{
    head=NULL;

    int a,i,n;

    printf("Enter Number of elements to enter:");
    scanf("%d",&n);
    printf("Enter Elements:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a);
        head=Insert(head,a);
    }

    printf("\nInorder Traversal:\n");
    Inorder(head);

    printf("\nPreorder Traversal:\n");
    Preorder(head);

    printf("\nPostorder Traversal:\n");
    Postorder(head);

    printf("\n Enter number to Search:\n");
    scanf("%d",&a);
    Search(head,a);

    return 0;
}
