#include<bits/stdc++.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;

int knapsack(int n,int m,int w[],int p[]);

Copy_maris_nah
{
    int t,n,m,r,i,sum,max,w[210],p[210];
    cin>>t;
    while(t--)
    {
        int item;
        max=0;
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            sum=0;
            cin>>r;
            while(r--)
            {
                cin>>item;
                sum+=item;
            }
            w[i]=p[i]=sum;
        }
        max=knapsack(n,m,w,p);
        cout<<max<<endl;
    }
    Okay_bye;
}
int knapsack(int n,int m,int w[],int p[])
{
    int b[300][300],i,j;
    for(i=0; i<=n; i++)
        b[i][0]=0;
    for(j=0; j<=m; j++)
        b[0][i]=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            if(w[i]<=j)
            {
                if(p[i]+b[i-1][j-w[i]] > b[i-1][j])
                    b[i][j]=p[i]+b[i-1][j-w[i]];
                else
                    b[i][j]=b[i-1][j];
            }
            else
                b[i][j]=b[i-1][j];
        }

    return (b[n][m]);
}
