#include <stdio.h>
#include <string.h>

#define MAX 20

// Stores airport names
char airports[MAX][30];

// Adjacency matrix representation of graph
int graph[MAX][MAX];

// Current number of airports
int count = 0;


// Returns index of airport if found
int getIndex(char name[])
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(airports[i],name)==0)
            return i;
    }
    return -1;
}


// Adds a new airport to the graph
void addAirport()
{
    ...
}


// Creates a route between two airports
void addRoute()
{
    ...
}


// Displays complete airline network
void display()
{
    ...
}


// Checks whether a direct route exists
void directRoute()
{
    ...
}


// Performs Breadth First Search traversal
void BFS()
{
    // Queue for BFS
    char start[30];
    int queue[MAX],visited[MAX]={0};
    int front=0,rear=0;

    ...

    // Mark source airport as visited
    visited[s]=1;

    // Insert source into queue
    queue[rear++]=s;

    while(front<rear)
    {
        // Remove airport from queue
        int cur=queue[front++];

        ...

        // Visit all adjacent airports
        for(int i=0;i<count;i++)
        {
            if(graph[cur][i]&&!visited[i])
            {
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}


// Recursive helper function for DFS
void DFSUtil(int v,int visited[])
{
    // Mark current airport visited
    visited[v]=1;

    printf("%s ",airports[v]);

    // Visit all connected airports
    for(int i=0;i<count;i++)
    {
        if(graph[v][i]&&!visited[i])
            DFSUtil(i,visited);
    }
}


// Performs Depth First Search traversal
void DFS()
{
    ...
}


// Main menu-driven program
int main()
{
    int ch;

    while(1)
    {
        // Display menu options

        ...

        switch(ch)
        {
            case 1:addAirport();break;
            case 2:addRoute();break;
            case 3:display();break;
            case 4:directRoute();break;
            case 5:BFS();break;
            case 6:DFS();break;
            case 7:return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}