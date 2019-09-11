#include <iostream>

using namespace std; 

int BFS(int adj[20][20],int k,int visited[20],int n)
{
	int queue[20],front,rear,w,v;
	front=0;
	rear=-1;
	queue[++rear]=k;
	while(front<=rear)
	{
		w=queue[front++];
		for(v=1;v<=n;v++)
		{
			if(adj[w][v]==1 && visited[v]==0)
			{
				queue[++rear]=v;
				visited[v]=1;
				cout<<v;
			}
		}
	}
}

int main()
{
	int adj[20][20],i,j,n,S,visited[20];
	cout<<"enter the number of nodes\n";
	cin>>n;
	cout<<"enter the adjacency matrix:\n";
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>adj[i][j];
	for(i=1;i<=n;i++)
		visited[i]=0;
	cout<<"enter the source vertex:\n";
	cin>>S;
	visited[S]=1;
	cout<<"BFS order is: \n"<<S;
	BFS(adj,S,visited,n);
}
