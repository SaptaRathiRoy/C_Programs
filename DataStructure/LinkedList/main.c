#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node * createNode(int data){
    struct Node * next = (struct Node *)malloc(sizeof(struct Node));
    if(next == NULL){
        return NULL;
    }
    next->data = data;
    next->next = NULL;
    return next;
}

void insertBegin(struct Node ** head, int data){
    struct Node * next = (struct Node *)malloc(sizeof(struct Node));
    if (next == NULL)
    {
        printf("Overflow....");
    }
    next->data = data;
    next->next = *head;
    *head = next;

}

void insertEnd(struct Node * head, int data){
    struct Node * next = (struct Node *)malloc(sizeof(struct Node));
    if (next == NULL)
    {
        printf("Overflow....");
    }
    next->data = data;
    next->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    
    head->next = next;
}

void insertBefore(struct Node * head, int data, int before){
    struct Node * next = (struct Node *)malloc(sizeof(struct Node));
    if (next == NULL)
    {
        printf("Overflow....");
    }
    next->data = data;
    struct Node * pre = head;
    head = head->next;
    while (head->data != before)
    {
        pre = pre->next;
        head = head->next;
    }
    pre->next = next;
    next->next = head;
}

void delHead(struct Node ** head){
    if (*head == NULL)
    {
        printf("Underflow...");
    }
    struct Node * temp = *head;
    *head = (*head)->next;
    free(temp);
}

void delAfter(struct Node * head, int val){
    if (head == NULL)
    {
        printf("Underflow...");
    }
    while (head->data != val)
    {
        head = head->next;
    }
    struct Node * temp = head->next;
    head->next = head->next->next;
    free(temp);
}

void * delLast(struct Node * head){
    if (head == NULL)
    {
        printf("Underflow...");
    }
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

void countNodes(struct Node * head){
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    printf("The count is: %d\n", count);    
}

struct Node * search(struct Node * head, int val){
    struct Node * pos = NULL;
    while (head != NULL)
    {
        if(head->data == val){
            pos = head;
            break;
        }
        else{
            head = head->next;
        }
    }
    return pos;
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
        printf("1.Create a Linked list.\n");
        printf("2.Traverse Linked list.\n");
        printf("3.Search for a node.\n");
        printf("4.Count no. of nodes.\n");
        printf("5.Insert node at Begin\n");
        printf("6.Insert node at end\n");
        printf("7.Insert node before a node\n");
        printf("8.Delete node at begin.\n");
        printf("9.Delete node at end.\n");
        printf("10.Delete node after a node.\n");
        printf("11.Exit\n");
        printf("\n\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            int data;
            printf("Enter value: ");
            scanf("%d", &data);
            s = createNode(data);
        }
        else if (ch == 2)
        {
            traversal(s);
        }
        else if (ch == 3)
        {
            int val;
            printf("Enter data to be searched: ");
            scanf("%d", &val);
            struct Node * pos = search(s, val);
            if (pos != NULL)
            {
                printf("Item found %d\n", pos->data);
            }
            else
            {
                printf("Item not found\n");
            }
        }
        else if (ch == 4)
        {
            countNodes(s);
        }
        else if (ch == 5)
        {
            int data;
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertBegin(&s, data);
        }
        else if (ch == 6)
        {
            int data;
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertEnd(s, data);
        }
        else if (ch == 7)
        {
            int data, before;
            printf("Enter data to be insert: ");
            scanf("%d", &data);
            printf("Enter value before which data to be insert: ");
            scanf("%d", &before);
            insertBefore(s, data, before);
        }
        else if(ch == 8){
            delHead(&s);
        }
        else if (ch == 9)
        {
            delLast(s);
        }
        else if (ch == 10)
        {
            int after;
            printf("Enter element after which data should be deleted: ");
            scanf("%d", &after);
            delAfter(s, after);
        }
        else if (ch == 11)
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