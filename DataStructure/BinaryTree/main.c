#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int data){
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return NULL;
    }
    n->data = data;
    n->left = n->right = NULL;
    return n;
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
    struct Node * root = createNode(12);
    struct Node * p1 = createNode(1);
    struct Node * p2 = createNode(4);
    struct Node *p3 = createNode(6);
    struct Node *p4 = createNode(42);
    struct Node *p5 = createNode(22);
    struct Node *p6 = createNode(33);
    struct Node *p7 = createNode(8);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p5->right = p6;
    p4->left = p7;
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
}