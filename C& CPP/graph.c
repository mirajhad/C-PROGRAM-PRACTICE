#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define MAX_VERTICES 50
#define MAX_DEGREE 50

struct graph
{
    int V;
    int E;
    int **adjMatrix;
};

struct edge
{
    int source;
    int destination;
};

void rand_init(void)
{
    time_t t;
    srand((unsigned)time(&t));
}

/* GRAPH CREATION */
struct graph *createGraph(const int numVertices)
{
    assert(numVertices >= 0);

    int i, j;

    struct graph *G = (struct graph *)malloc(sizeof(struct graph));

    G->V = numVertices;
    G->E = 0;
    G->adjMatrix = malloc(numVertices * sizeof(int *));
    assert(G != NULL);
    for (i = 0; i < numVertices; i++)
    {
        G->adjMatrix[i] = calloc(numVertices, sizeof(int));
        assert(G->adjMatrix[i] != NULL);
    }
    return G;
};

/* DISPLAY */
void displayGraph(const struct graph *G)
{
    int i, j, v;
    v = G->V;
    printf("%d vertices; %d edges\n", G->V, G->E);
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
            printf("%3d", (G->adjMatrix)[i][j]);
        printf("\n");
    }
}

void main(void)
{
    struct graph *G = randomGraph(10, 0.15);
    displayGraph(G);
    // return 0;
}