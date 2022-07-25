#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main()
{
    cin>>n;
    for(ll i=2;i*i<=n;++i)
    if(n%i==0)
    {
        ll e=0;
        while(n%i==0)
            ++e,n/=i;
        cout<<i<<"^"<<e<<'\n';
    }
    if(n>1)
        cout<<n<<"^"<<1<<'\n';
    return 0;
}