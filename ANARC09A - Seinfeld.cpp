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
    int n,test = 1;
    string s;
    while(1){
        cin>>s;
        n = s.length();
        if(s[0] == '-'){
            break;
        }
        stack<char>st;
        for(int i=0; i<n; i++){
            if(s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        cout<<test<<". ";
        test++;
        int c = 0;
        while(!st.empty()){
            char a,b;
            a = st.top(),st.pop();
            b = st.top(),st.pop();
            if(a == '{' && b == '}')c+=2;
            else{
                c++;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}

