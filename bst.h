struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;

struct Node* getNewNode(int data);
struct Node* Insert(struct Node* head,int data);
void Search(struct Node* head,int n);

void Inorder (struct Node* head);
void Preorder(struct Node* head);
void Postorder(struct Node* head);

struct Node* FindMax(struct Node* head);
struct Node* FindMin(struct Node* head);


struct Node* DeleteNode(struct Node* head,int data);

struct Node* FindSuccesor(struct Node* head,int data);
struct Node* FindNode(struct Node* head,int data);
