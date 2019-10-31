#include<iostream>
#include<stdio.h>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;


int knapsack(int n,int m,int w[],int p[])
{
    int b[2000][2000],i,j;
    for(i=0; i<=n; i++)
        b[i][0]=0;
    for(j=0; j<=m; j++)
        b[0][j]=0;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if(w[i]<=j)
            {
                if(p[i]+b[i-1][j-w[i]]>b[i-1][j])
                    b[i][j]=p[i]+b[i-1][j-w[i]];
                else
                    b[i][j]=b[i-1][j];
            }
            else
                b[i][j]=b[i-1][j];
        }
    }
    return (b[n][m]);
}
Copy_maris_nah
{

    int n,m;
    int t,maxi;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int w[210],p[210];
        for(int i=1; i<=n; i++){
            cin>>w[i]>>p[i];
        }
        maxi=knapsack(n,m,w,p);
        cout<<"Hey stupid robber, you can get "<<maxi<<"."<<endl;
    }
    Okay_bye;
}
