#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int item,money,i,j,u,v;
    pair<int,int>bag[101];

    while(1)
    {
        cin>>money>>item;
        if(money==0)
            break;
        for(i=0; i<item; i++)
        {
            cin>>u>>v;
            bag[i]=make_pair(u,v);
        }
        int dp[item+1][money+1];
        for(i=0; i<=item; i++)
            for(j=0; j<=money; j++)
                dp[i][j]=0;
        for(i=0; i<=item; i++)
            dp[i][0]=0;
        for(j=0; j<=money; j++)
            dp[0][i]=0;

        //selection of item;
        for(i=1; i<=item; i++)
            for(j=1; j<=money; j++)
            {
                if(bag[i-1].first<=j)
                    dp[i][j]=max(bag[i-1].second+dp[i-1][j-bag[i-1].first],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        int maxfun=dp[item][money];
        int minmoney=0;
        for(i=0; i<=money; i++)
        {
            if(dp[item][i]==maxfun)
            {
                minmoney=i;
                break;
            }
        }
        cout<<minmoney<<" "<<maxfun<<endl;
    }
    return 0;
}
