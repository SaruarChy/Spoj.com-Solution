#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int len;
    char a[5001];
    long long int dp[5001];
    while(1)
    {
        cin>>a;
        if(a[0]=='0')
            break;
        len=strlen(a);
        dp[0]=dp[1]=1;
        for(int i=2; i<=len; i++)
        {
            dp[i]=0;
            char s=a[i-2]-'0';
            char t=a[i-1]-'0';

			if(s==1 || (s==2 && t<=6))
                dp[i] += dp[i-2];
			if(t!=0)
                dp[i] += dp[i-1];
        }
        cout<<dp[len]<<endl;
    }
    return 0;
}
