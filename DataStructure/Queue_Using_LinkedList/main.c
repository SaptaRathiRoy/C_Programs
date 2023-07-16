#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct queue{
    struct Node * front;
    struct Node * rear;
};

struct queue * createQueue(){
    struct queue * q = (struct queue *)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}

int isEmpty(struct queue * q){
    return (q->front == NULL && q->rear == NULL);
}

void enque(struct queue * q, int data){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Overflow...");
        return;
    }
    temp->data = data;
    temp->next = NULL;
    if (isEmpty(q))
    {
        q->front = q->rear = temp;
    }
    else{
        q->rear->next = temp;
        q->rear = temp;
    }   
}

void deque(struct queue * q){
    if (isEmpty(q))
    {
        printf("Underflow....\n");
        return;
    }
    struct Node * temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    printf("Dequed element is: %d\n", temp->data);
    free(temp);
}

void front(struct queue * q){
    if (isEmpty(q))
    {
        printf("Empty queue...\n");
        return;
    }
    printf("Front: %d\n", q->front->data);
}

void rear(struct queue * q){
    if (isEmpty(q))
    {
        printf("Empty queue...\n");
        return;
    }
    printf("Rear: %d\n", q->rear->data);
}

int main(){
    struct queue * s = NULL;
    while (1)
    {
        printf("1.Create a Queue.\n");
        printf("2.Front of queue.\n");
        printf("3.Rear of queue.\n");
        printf("4.Enqueue.\n");
        printf("5.Dequeue.\n");
        printf("6.Exit\n");
        printf("\n\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            s = createQueue();
        }
        else if (ch == 2)
        {
            front(s);
        }
        else if (ch == 3)
        {
            rear(s);
        }
        else if (ch == 4)
        {
            int val;
            printf("Enter data: ");
            scanf("%d", &val);
            enque(s, val);
        }
        else if (ch == 5)
        {
            deque(s);
        }
        
        else if (ch == 6)
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