#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ugly_world(ll n){
    
    ll ugly[n],yo=1;
    ugly[0]=1;
    ll mo2=2,mo3=3,mo5=5;
    ll i2=0,i3=0,i5=0;
    for(ll i=1;i<n;i++)
    {
        yo=min(mo2,min(mo3,mo5)); 
        ugly[i]=yo;
        if(yo==mo2){
            i2++;
            mo2=ugly[i2]*2;
        }
        if(yo==mo3){
            i3++;
            mo3=ugly[i3]*3;
        }
        if(yo==mo5){
            i5++;
            mo5=ugly[i5]*5;
        }
    }
    return ugly[n-1];
}

int main(){
    ll n;
    cin>>n;
    cout<<ugly_world(n);
    return 0;
}