#include<stdio.h>
#include<stdlib.h>

int g[10][10];
int V;
int visited[10];
int queue[10],f=0,r=0;

void enqueue(int v)
{
	queue[r++] = v;

}

int dequeue()
{
	if(f==r)
	{
		return -1;
	}
	return queue[f++];
}

void bfsv(int v)
{
	printf("Visiting %d\n",(v+1));
	visited[v]=1;
	int i;
	for(i=0;i<V;++i)
	{
		if(!visited[i] && (g[v][i]) && (i !=v))
		{
			enqueue(i);
		}
	}
}

void bfs()
{
	int i,x;
	enqueue(0);
	do
	{
		x=dequeue();
		if (x != -1 && !visited[x])
		{
			bfsv(x);
		}
	}while(x != -1);
}

int main()
{
	int i,j;
	printf("Enter the number of vertices: \n");
	scanf("%d",&V);
	printf("Enter the adjacency matrix: \n");
	for(i=0;i<V;++i)
	{
		for(j=0;j<V;++j)
		{
			scanf("%d",&g[i][j]);
		}
	}
	bfs();
	return 0;

}