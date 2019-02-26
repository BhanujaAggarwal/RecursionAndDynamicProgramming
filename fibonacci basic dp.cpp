#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fibo(ll n)
{
    ll fibonacci[n];
    fibonacci[0]=0;
    fibonacci[1]=1;
    for(ll i=2;i<=n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    return fibonacci[n];
}

int main(){
    ll n;
    cin>>n;
    cout<<fibo(n);
    return 0;

}