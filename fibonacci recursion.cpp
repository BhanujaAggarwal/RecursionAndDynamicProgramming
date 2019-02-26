#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fibo(ll n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    ll n;
    cin>>n;
    cout<<fibo(n);
    return 0;

}