#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;
};

struct Node * createLL(int data){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp->prev = NULL;
}

void insertBegin(struct Node ** head, int data){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Overflow...");
        return;
    }
    temp->data = data;
    temp->prev = NULL;
    temp->next = *head;
    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    (*head)->prev = temp;
    (*head) = temp;
}

void insertEnd(struct Node *head, int data){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Overflow...");
        return;
    }
    temp->data = data;
    temp->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    temp->prev = head;
    head->next = temp;
}

void deleteHead(struct Node ** head){
    struct Node * temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}

void deleteLast(struct Node *head){
    struct Node * pre = head;
    head = head->next;
    while (head->next != NULL)
    {
        pre = pre->next;
        head = head->next;
    }
    free(head);
    pre->next = NULL;
}

void traversal(struct Node * head){
    while (head != NULL)
    {
        printf("%d-", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    struct Node * s = NULL;
    while (1)
    {
        printf("1.Create a DLL.\n");
        printf("2.Traversal.\n");
        printf("3.Insert at begin.\n");
        printf("4.Insert at end.\n");
        printf("5.Delete first node.\n");
        printf("6.Delete last node.\n");
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
            s = createLL(data);
        }
        else if (ch == 2)
        {
            traversal(s);
        }
        else if (ch == 3)
        {
            int data;
            printf("Enter value: ");
            scanf("%d", &data);
            insertBegin(&s, data);
        }
        else if (ch == 4)
        {
            int val;
            printf("Enter data: ");
            scanf("%d", &val);
            insertEnd(s, val);
        }
        else if (ch == 5)
        {
            deleteHead(&s);
        }
        
        else if (ch == 6)
        {
            deleteLast(s);
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