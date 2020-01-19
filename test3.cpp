#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int i=10;
        int cnt=0;
        for(i=i-1;i<=b;i=(i+1)*10 - 1)
        {
            cnt+=a;
        }
        cout<<cnt<<endl;
    }
}
