#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll catlan(ll n)
{
    ll cat[n+1];
    cat[0]=1,cat[1]=1;
    for(ll i=2;i<=n;i++)
    {
        cat[i]=0;
        for(ll j=0;j<i;j++)
        {
            cat[i]+=cat[j]*cat[i-j-1];
        }
    }
    return cat[n];
}

int main(){
    ll n;
    cin>>n;
    cout<<catlan(n-1);
    return 0;

}