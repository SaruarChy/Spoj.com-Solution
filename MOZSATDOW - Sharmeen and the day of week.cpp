#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s[]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    cin>>n;
    cout<<s[n%7]<<endl;
    return 0;
}
