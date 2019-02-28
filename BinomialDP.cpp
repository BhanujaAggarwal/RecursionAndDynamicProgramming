#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int nck(int n,int k)
{
    int binomial[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(j==0 || j==i)
            {
                binomial[i][j]=1;
            }
            else
            {
                binomial[i][j]=binomial[i-1][j-1]+binomial[i-1][j];
            }
        }
    }
    
    return binomial[n][k];
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<nck(n,k);
    return 0;
}