#include <bits/stdc++.h>
using namespace std;
int Knapsack01(int W, int weight[],int value[] ,int n)
{
   int Ks[n+1][W+1];

   for(int i=0; i<=n; i++)
      for(int w=0; w<=W ; w++)
      {

         if(i==0 || w==0)
            Ks[i][w]=0;

         else if(weight[i-1]<=w)
            Ks[i][w]=max(Ks[i-1][w],Ks[i-1][w-weight[i-1]] + value[i-1]);

         else
            Ks[i][w]=Ks[i-1][w];
      }
   return Ks[n][W];
}
int main()
{
    int  W,n;

    cin>>W>>n;
    int value[n],weight[n];
    for(int i=0; i<n ;++i)
       cin>>weight[i]>>value[i];
    cout<<Knapsack01(W, weight, value, n);
    return 0;
}
