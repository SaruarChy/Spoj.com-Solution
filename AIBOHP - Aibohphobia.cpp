#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,c[10000][10000],b[10000][10000];
string x,y;
void lcs()
{
   m = x.length();
   n = y.length();
   for(i=0;i<=m;i++)
     c[i][0] = 0;
   for(i=0;i<=n;i++)
     c[0][i] = 0;

   for(i=1;i<=m;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(x[i-1]==y[j-1])
           {
               c[i][j] = c[i-1][j-1]+1;
               b[i][j] = 'c';
           }
           else if(c[i-1][j] >=c[i][j-1])
           {
               c[i][j] = c[i-1][j];
               b[i][j] = 'u';
           }
           else
           {
               c[i][j] = c[i][j-1];
               b[i][j] = 'l';
           }
       }
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        y=x;
        reverse(y.begin(),y.end());
        lcs();
        cout<<n-c[m][n]<<endl;
    }
    return 0;
}
