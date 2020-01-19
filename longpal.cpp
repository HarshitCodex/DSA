#include<bits/stdc++.h>
using namespace std;
int longplasubstr(string str)
{
    int n=str.size();
    bool table[n][n];
    memset(table,0,sizeof(table));
    int maxlength =1;

    for(int i=0;i<n;i++)
    {
        table[i][i]=true;
    }
    int start=0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            table[i][i+1]=true;
            start=i;
            maxlength=2;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(str[i]==str[j]&&table[i+1][j-1])
            {
                table[i][j]=true;
                 if(k>maxlength)
                {
                    maxlength=k;
                    start=i;
                }
            }
        }
    }
    cout<<"Longest pal is "<<str.substr(start,maxlength)<<endl;
    return maxlength;
}
int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: " << longplasubstr( str );
    return 0;
}
