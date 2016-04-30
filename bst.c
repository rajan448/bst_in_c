
#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

//InOrder Traversal Routine

void Inorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }

    else{
        Inorder(head->left);
        printf("%d ",head->data);
        Inorder(head->right);
    }
}

//PreOrder Traversal Routine

void Preorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        printf("%d ",head->data);
        Preorder(head->left);
        Preorder(head->right);

    }

}

//Postorder Traversal Routine

void Postorder(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        Postorder(head->left);
        Postorder(head->right);

        printf("%d ",head->data);
    }

}


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


struct Node* FindMax(struct Node* head)
{
    while(head->right != NULL)
    {
        head=head->right;
    }
    return head;
}


struct Node* FindMin(struct Node* head)
{
    while(head->left != NULL)
    {
        head=head->left;
    }
    return head;
}


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

struct Node* DeleteNode(struct Node* head,int data)
{
    if(head==NULL) return head;

    if(data < head->data)
    {
        head->left = DeleteNode(head->left,data);
    }
    else if(data > head->data){
        head->right = DeleteNode(head->right,data);
    }
    else
    {
        /*Correct since it is negativity test it is evident that
        if there is no left child and also data exists in node than it
        must have either no child or only right child..rajan*/

        if(head->left == NULL)
        {
            struct Node* temp=head->right;
            free(head);
            return temp;
        }

        else if(head->right==NULL)
        {
            struct Node* temp=head->left;
            free(head);
            return temp;
        }

        struct Node* temp=FindSuccesor(head,data);
        head ->data = temp->data;
        head->right=DeleteNode(head->right,temp->data);
    }
    return head;
}



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
