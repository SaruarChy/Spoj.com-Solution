#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int , int > arr[100000];
    int i,j,t;
    cin>>t;
    while(t--)
    {
    int c=0,s,t,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>t;
        arr[i] = make_pair(t,s);
    }
    sort(arr,arr+n);
    i=0,c=1;
    for(j=1; j<n;j++)
    {
        if(arr[j].second >= arr[i].first)
        {
           c++;
           i=j;
        }
    }
    cout<<c<<endl;
    }
    return 0;
}

