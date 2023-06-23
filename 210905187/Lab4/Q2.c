#include<stdio.h>
#include<stdlib.h>

int g[10][10];
int V;
int visited[10];
void dfsv(int v)
{
	printf("Visiting %d\n",(v+1));
	visited[v]=1;
	int i;
	for(i=0;i<V;++i)
	{
		if (!(visited[i]) && (g[v][i]==1) && (i != v))	
		{
			dfsv(i);
		}	
	}
}

void dfs()
{
	int i;
	for(i=0;i<V;++i )
	{
		if(!visited[i])
		{
			dfsv(i);
		}
	}
}

int main()
{
	int i,j;
	printf("Enter the number of vertices: \n");
	scanf("%d",&V);
	printf("Enter the adjacency matrix: \n ");
	for(i=0;i<V;++i)
	{
		for(j=0;j<V;++j)
		{
			scanf("%d",&g[i][j]);
		}
	}
	dfs();
	return 0;
}