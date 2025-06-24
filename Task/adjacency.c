#include <stdio.h>

int main()
{
    int n, edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter edges as pairs (from to):\n");
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", adj[i][j]);
            printf("\n");
        }
    }
}
