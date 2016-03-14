struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;

struct Node* Insert(struct Node* head,int data);
void View(struct Node* head);
void Search(struct Node* head,int n);

void Inorder(struct Node* head);
void Preorder(struct Node* head);
void Inorder(struct Node* head);
