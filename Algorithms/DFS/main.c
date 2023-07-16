#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void DFSRec(int v, int G[][v], int s, bool visited[]){
    visited[s] = true;
    printf("%d ", s);
    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false && G[s][i]){
            DFSRec(v, G, i, visited);
        }
    }
    
}

void DFS(int v, int G[][v], int s){
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    DFSRec(v, G, s, visited);
}

int main(){
    int size;
    printf("Enter number of nodes: ");
    scanf("%d", &size);
    int G[size][size];
    Graph(size, G);
    DFS(size, G, 0);
 
    return 0;
}