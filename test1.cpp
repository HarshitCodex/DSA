#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define mod 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int32_t main()
{
    long long int a,p,q,b;

int t;

scanf("%d",&t);

while(t--)   {

scanf("%lld %lld",&a,&b);

p=a%10;

q=b%4;

if(b==0)

    printf("1\n");

else if(p==1||p==0||p==5||p==6)

printf("%d\n",p);

else if(q==1)

    printf("%d\n",p);

else if(q==2)

    printf("%d\n",((p*p)%10));

else if(q==3)

    printf("%d\n",((p*p*p)%10));

else if(q==0)

    printf("%d\n",((p*p*p*p)%10));

}

return 0;
}
//Just added another line to whie using git
