struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;

struct Node* Insert(struct Node* head,int data);
void Search(struct Node* head,int n);

void Inorder (struct Node* head);
void Preorder(struct Node* head);
void Postrder(struct Node* head);
