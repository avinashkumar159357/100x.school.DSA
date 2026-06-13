//Problem name:Equilibrium Points
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (D)
//Description:
//Last Changed:13-06-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n),pref(n);
    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
        pref[i]=sum;
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(pref[i]==(sum-pref[i]+a[i])) cnt++;
    }
    cout<<cnt;
}

int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {
        solve();
    }

}    

    