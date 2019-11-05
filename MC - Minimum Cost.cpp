#include<bits/stdc++.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;
int i,j,m,n;
int dp[1001][1001];
string x,y;
void lcs()
{
    n=x.length();
    m=y.length();
    for(i=0; i<=n; i++)
        dp[i][0]=0;
    for(i=1; i<=m; i++)
        dp[0][i]=0;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else if(dp[i-1][j] >= dp[i][j-1])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i][j-1];

        }

}

Copy_maris_nah
{
    int ans;
    while(1)
    {
        ans=0;
        cin>>x;
        if(x[0]=='#')
            break;
        else
        {
            cin>>y;
            lcs();
            n=x.length();
            m=y.length();

            ans=(((n-dp[n][m])*15) + ((m-dp[n][m])*30));
            cout<<ans<<endl;
        }
    }
    Okay_bye;
}
