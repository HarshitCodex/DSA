#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
pair<int,int> dp[10000][10000];
int32_t main()
{
    fastio;
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        dp[i][i].first = a[i];
        dp[i][i].second = 0;
    }
    for(int i=0;i<n-1;i++)
    {
        dp[i][i+1].first = max(a[i],a[i+1]);
        dp[i][i+1].second = abs(a[i]-a[i+1]);
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"("<<dp[i][j].first<<","<<dp[i][j].second<<") ";
        }
        cout<<endl;
    }*/

}
