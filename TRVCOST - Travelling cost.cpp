#include<iostream>
#define MAXN 505
#define INT_MAX 9999999
using namespace std;
int graph[MAXN+1][MAXN+1];
int e,s,q;
void null()
{
    for(int i=0; i<MAXN; i++)
        for(int j=0; j<MAXN; j++)
        {
            if(i!=j)
                graph[i][j]=INT_MAX;
            else
                graph[i][j]=0;
        }
}
int main()
{
    int ans;
    int node=1;
    int e,i,j,k,u,v,w;
    cin>>e;
    null();
    for(i=0; i<e; i++)
    {
        cin>>u>>v>>w;
        node=max(node,max(u,v));
        graph[u][v]=min(graph[u][v],w);
        graph[v][u]=min(graph[v][u],w);
    }
    for(k=0; k<=node; k++)
        for(i=0; i<=node; i++)
            for(j=0; j<=node; j++)
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
    int s,q,t;
    cin>>s;
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>t;
        ans=min(graph[s][t],graph[t][s]);
        if(ans==INT_MAX)
            cout<<"NO PATH"<<endl;
        else
            cout<<ans<<endl;
    }
}
