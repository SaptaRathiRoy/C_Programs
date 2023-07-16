#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

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

bool isEmpty(struct queue * q){
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

int deque(struct queue * q){
    if (isEmpty(q))
    {
        printf("Underflow....\n");
        return INT_MIN;
    }
    struct Node * temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    int data = temp->data;
    free(temp);
    return data;
}

void Graph(int v, int G[][v]){
    printf("Enter values for G: \n");
    for (int i = 0; i < v; i++)
    {
        int j = 0;
        do
        {
            scanf("%d", &G[i][j++]);
        } while (getchar() != '\n');
        
    }
}

void BFS(int v, int G[][v], int s){
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    struct queue * q = createQueue();
    visited[s] = true;
    enque(q, s);
    while (isEmpty(q) == false)
    {
        int u = deque(q);
        printf("%d ", u);
        for (int i = 0; i < v; i++)
        {
            if(visited[i] == false && G[u][i]){
                visited[i] = true;
                enque(q, i);
            }
        }
    }
}

int main(){
    int size;
    printf("Enter number of nodes: ");
    scanf("%d", &size);
    int G[size][size];
    Graph(size, G);
    BFS(size, G, 0);

    return 0;
}