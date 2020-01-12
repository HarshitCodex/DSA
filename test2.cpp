#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int32_t main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> w;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            w.push_back(s);
        }
        sort(w.begin(),w.end());
        vector<string> rem;
        int res=0;
        string temp;
        for(int i=0;i<n-1;i++)
        {
            if(w[i]==w[i+1])
            {
                res+=(w[i].length()*w[i].length());
                i++;
            }
            else
                rem.push_back(w[i]);
        }
        int l=rem.size();
        for(int i=0;i<l;i++)
        {

        }
        cout<<res<<endl;
    }
}
