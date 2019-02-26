#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fibo(ll n)
{
    ll a=0,b=1,c;
    for(ll i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    ll n;
    cin>>n;
    cout<<fibo(n);
    return 0;

}