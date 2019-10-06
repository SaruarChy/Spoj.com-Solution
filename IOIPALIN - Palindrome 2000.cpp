#include<bits/stdc++.h>
using namespace std;
int i,j,t,m,n,c[5001][5001];
string x,y;
void lcs()
{
   int n = t;
   for(i=0;i<=n;i++)
     c[i][0] = 0;
   for(i=0;i<=n;i++)
     c[0][i] = 0;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(x[i-1]==y[j-1])
           {
               c[i][j] = c[i-1][j-1]+1;
           }
           else if(c[i-1][j] >=c[i][j-1])
           {
               c[i][j] = c[i-1][j];
           }
           else
           {
               c[i][j] = c[i][j-1];
           }
       }
   }
}
int main()
{

    cin>>t;
    cin>>x;
    y=x;
    reverse(y.begin(),y.end());
    lcs();
    cout<<t-c[t][t]<<endl;
    return 0;
}
