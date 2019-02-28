#include<bits/stdc++.h>
using namespace std;

int npk(int n,int k)
{
    int p[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0)
            p[i][j]=1;
            else
            p[i][j]= j*p[i-1][j-1]+p[i-1][j];
            p[i][j+1]=0;
        }
    }
    return p[n][k];
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<npk(n,k);
}