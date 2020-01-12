#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> factors;
int expo(int a,int b)
{
    int res=1;
    while(b)
    {
        if(b&1)
            res*=a;
        b/=2;
        a=a*a;
    }
    return res;
}
void factorise(int n)
{
    int cnt=0;
    while(!(n%2))
    {
        n>>=1;
        cnt++;
    }
    if(cnt)
    {
        factors.push_back(expo(2,cnt));
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        cnt=0;
        while(n%i==0)
        {
            cnt++;
            n/=i;
        }
        if(cnt)
        {
            factors.push_back(expo(i,cnt));
        }
    }
    if(n>2)
    {
        factors.push_back(n);
    }
}
int32_t main()
{
    int x;
    cin>>x;
    factorise(x);
    int n=factors.size();
    int minele=x;
    for(int i=0;i<pow(2,n);i++)
    {
        int proda=1,prodb=1;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                proda*=factors[j];
        }
        prodb=x/proda;
        minele=min(max(proda,prodb),minele);
    }
    cout<<minele<<" "<<x/minele<<endl;
}
