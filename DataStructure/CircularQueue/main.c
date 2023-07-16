#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

struct queue * createQueue(){
    struct queue * q = (struct queue *)malloc(sizeof(struct queue));
    int size;
    printf("Enter size of stack: ");
    scanf("%d", &size);
    q->size = size;
    q->rear = -1;
    q->front = -1;
    q->arr = (int *)malloc(size*sizeof(int));
    return q;
}

bool isFull(struct queue * s){
    if((s->rear == s->size - 1 && s->front == 0) || (s->rear == s->front - 1)){
        return true;
    }
    return false;
}

bool isEmpty(struct queue * s){
    if(s->front == -1){
        return true;
    }
    return false;
}

void enqueue(struct queue * s, int key){
    
    if(!isFull(s)){
        if(s->front == -1 && s->rear == -1){
            s->front++;
            s->rear++;
        }
        else if(s->rear == s->size-1 && s->front != 0){
            s->rear = 0;
        }
        else{
            s->rear++;
        }
        s->arr[s->rear] = key;
        printf("Enqueued %d\n", key);
        return;
    }
    printf("Queue is full\n");
}

void dequeue(struct queue * s){
    if(!isEmpty(s)){
        int key = s->arr[s->front];
        if (s->front == s->rear)
        {
            s->front = s->rear = -1;
        }
        else if (s->front == s->size - 1)
        {
            s->front = -1;
        }
        else
        {
            s->front++;
        }
        printf("Dequeued element is: %d\n", key);
        return;
    }
    printf("The queue is empty\n");
}

void front(struct queue * s){
    if (isEmpty(s))
    {
        printf("The queue is empty.\n");
        return;
    }
    printf("Front element is %d", s->arr[s->front]);
}

int main(){
    struct queue * s = NULL;
    while (1)
    {
        printf("1.Create a Queue.\n");
        printf("2.Front of queue.\n");
        printf("3.Enqueue.\n");
        printf("4.Dequeue.\n");
        printf("5.Exit\n");
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
            int val;
            printf("Enter data: ");
            scanf("%d", &val);
            enqueue(s, val);
        }
        else if (ch == 4)
        {
            dequeue(s);
        }
        
        else if (ch == 5)
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