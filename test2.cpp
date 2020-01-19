#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/*Find largest palindromic substring at each point in the array*/
int fact[1100];
int modexpo(int a,int b)
{
    int res=1;
    a=a%mod;
    while(b)
    {
        if(b&1)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
int modinverse(int a)
{
    int res=modexpo(a,mod-2);
    return res;
}
void modfacto(int n)
{
    fact[0]=1;
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result = (result * i)%mod;
        fact[i]=result;
    }
}
int32_t main()
{
    modfacto(1099);
    int n,m;
    cin>>n>>m;
    int subres = fact[2*m + n -1 ]%mod;
    int inv = modinverse(fact[2*m])%mod;
    int inv2 = modinverse(fact[n-1])%mod;
    int res = (((subres*inv)%mod)*inv2)%mod;
    cout<<res<<endl;
}
