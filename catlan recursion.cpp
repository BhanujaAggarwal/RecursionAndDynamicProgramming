#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll catlan(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    ll result=0;
    for(ll i=0;i<n;i++)
    {
        result=result+(catlan(i)*catlan(n-i-1));
    }
    return result;
}

int main(){
    ll n;
    cin>>n;
    cout<<catlan(n-1);
    return 0;

}