#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int nck(int n,int k)
{
    if(k==0 || k==n)
    return 1;
    
    return nck(n-1,k-1)+nck(n-1,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<nck(n,k);
    return 0;
}