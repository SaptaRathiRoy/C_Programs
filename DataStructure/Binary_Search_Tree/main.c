#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createRoot(int data){
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return NULL;
    }
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

struct Node * insert(struct Node * root, int data){
    if (root == NULL)
    {
        return createRoot(data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

void search(struct Node * root, int key){
    if (root == NULL)
    {
        printf("Not found...");
    }
    
    if (root->data == key)
    {
        printf("Found %d", root->data);   
    }
    else if (root->data > key)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}

void preOrder(struct Node * root){
    if(root == NULL){
        return;
    }
    printf("%d-", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node * root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d-", root->data);
    inOrder(root->right);
}

void postOrder(struct Node * root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d-", root->data);
}

int main(){
    struct Node * b = NULL;
    while (1)
    {
        printf("1.Create a BST.\n");
        printf("2.Insert a Node.\n");
        printf("3.Search for a Node.\n");
        printf("4.Inorder.\n");
        printf("5.Preorder.\n");
        printf("6.Postorder.\n");
        printf("7.Exit\n");
        printf("\n\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            int data;
            printf("Enter value: ");
            scanf("%d", &data);
            b = createRoot(data);
        }
        else if (ch == 2)
        {
            int data;
            printf("Enter value: ");
            scanf("%d", &data);
            insert(b, data);
        }
        else if (ch == 3)
        {
            int data;
            printf("Enter value: ");
            scanf("%d", &data);
            search(b, data);
        }
        else if (ch == 4)
        {
            inOrder(b);
        }
        else if (ch == 5)
        {
            preOrder(b);
        }
        else if (ch == 6)
        {
            postOrder(b);
        }
        else if (ch == 7)
        {
            printf("Thank you.");
            break;
        }
        else
        {
            printf("Wrong choice\n\n\n");
            continue;
        }
        printf("\n\n");
    }
    return 0;
}