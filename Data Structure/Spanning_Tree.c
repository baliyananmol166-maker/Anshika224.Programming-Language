//Implementation of spanning tree using DFS
#include <stdio.h>
#define MAX 10
int graph[MAX][MAX];
int visited[MAX];
int n;
void DFS(int vertex){
    visited[vertex] = 1;
    for(int i = 0; i < n; i++){
        if(graph[vertex][i] == 1 && !visited[i]){
            printf("%d - %d\n", vertex, i);
            DFS(i);
        }
    }
}
int main(){
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    printf("\nEdges in the Spanning Tree:\n");
    DFS(0);
    return 0;
}