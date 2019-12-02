#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,e,t,m;
	cin>>n>>e>>t>>m;
	long adj[n][n];
	memset(adj,100100,sizeof(adj[0][0])*n*n);
	while(m--){
		int u,v,w;
		cin>>u>>v>>w;
		adj[u-1][v-1]=w;
	}
		for(int i=0;i<n;i++)
			adj[i][i]=0;

		for(int k=0;k<n;k++)
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);

		int count=0;
		for(int i=0;i<n;i++)
			if(adj[i][e-1]<=t)
				count++;
		printf("%d\n",count);
	return 0;
}
