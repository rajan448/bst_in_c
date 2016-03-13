#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

int main()
{
    head=NULL;
    head=Insert(head,1);
    head=Insert(head,4);
    Search(head,3);
    View(head);
    return 0;
}
