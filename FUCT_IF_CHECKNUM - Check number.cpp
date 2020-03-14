#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0){
            cout<<"n is zero";
        }
        else if(n>0){
            cout<<n<<" is positive number";
        }
        else
            cout<<n<<" is negative number";
        cout<<endl;
    }
    return 0;
}
