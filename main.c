#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

int main()
{
    head=NULL;

    int a;

    head=Insert(head,10);
    head=Insert(head,8);
    head=Insert(head,6);
    head=Insert(head,9);
    head=Insert(head,12);
    head=Insert(head,11);
    head=Insert(head,13);

    printf("Enter Number to Search in Tree:");
    Inorder(head);
    scanf("%d",&a);
    Search(head,a);

    View(head);

    return 0;
}
