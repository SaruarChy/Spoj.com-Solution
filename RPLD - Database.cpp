//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,test = 1;
    ll n,r,I,c;
    cin>>t;
    while(t--){
        cin>>n>>r;
        vector< pair <ll,ll> > v;
        map<ll,ll>mp;
        for(ll i=0; i<r; i++){
            cin>>I>>c;
            v.pb(make_pair(I,c));
        }
        int flag = 0;
        sort(v.begin(),v.end());
        for(ll i=0; i<v.size(); i++){
            if(v[i].first == v[i+1].first && v[i].second == v[i+1].second){
                flag = 1;
                break;
            }
        }
        cout<<"Scenario #"<<test<<": ";
        if(flag == 0){
            cout<<"possible\n";
        }
        else{
            cout<<"impossible\n";
        }
        test++;
    }

    return 0;
}

