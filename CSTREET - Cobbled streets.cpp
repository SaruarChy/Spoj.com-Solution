#include<iostream>
#include<vector>
#include<queue>

using namespace std;
typedef pair<long long , int> pii;
bool marked[1000];
vector< pii > adj[1000];
long long prim(int x)
{
    priority_queue<pii, vector<pii> , greater<pii> > pq;
    int y;
    long long minimumCost=0;
    pii p;
    pq.push(make_pair(0,x));
    while(!pq.empty())
    {
        p = pq.top();
        pq.pop();
        x = p.second;
        if(marked[x]==true)
          continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i=0; i< adj[x].size();i++)
        {
            y = adj[x][i].second;
            if(marked[y]==false)
             pq.push(adj[x][i]);
        }
    }
    return minimumCost;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,p,n,u,v;
    long long m,w,mincost;
    cin>>t;
    while(t--)
    {
        cin>>p>>n>>m;
        for(int i=0; i<m; i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(w,v));
            adj[v].push_back(make_pair(w,u));
        }
        mincost=prim(1);
        cout<<mincost*p<<endl;
    }
    return 0;
}
