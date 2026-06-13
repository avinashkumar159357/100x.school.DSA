//Problem name:Factors Battle
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (A)
//Description:
//Last Changed:13-06-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

ll count_factor(ll n){
    ll cnt=0;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            ll j=n/i;
            if(i==j)cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}
void solve() {
    ll a,b; cin>>a>>b;
    ll x=count_factor(a);
    ll y=count_factor(b);
    
    if(x>y)cout<<"A";
    else if(x<y)cout<<"B";
    else cout<<"DRAW";
}

int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {
        solve();
    }

}    

    