#include<stdio.h>
int i,j,n,visited[10],queue[10],front=0,rear=-1;
int adj[10][10];

void bfs(int v)
{
	for(i=1;i<=n;i++)
		if(adj[v][i] && !visited[i])
		 queue[++rear]=i;
		if(front<=rear)
		{
			visited[queue[front]]=1;
			bfs(queue[front++]);
		}
}

void main()
{
	int v;
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		queue[i]=0;
		visited[i]=0;
	}
	printf("Enter the graph data in adjacent matrix form \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	bfs(v);
	printf("Traversal:.....");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
		   printf("%d\t",i);
		else
		{
		   printf("BFS not possible\n");
		   break;
	    }
	}
	
}
