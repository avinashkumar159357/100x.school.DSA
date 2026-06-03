//File name:Range Sum Query
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (A)
//Description:prefix sum
//Last Changed:3-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    ll n; cin>>n;
    vector<ll>a(n),pref(n+1,0);

    for (int i = 0; i < n; i++) cin>>a[i];

    for (int i = 0; i < n; i++) pref[i+1]=pref[i]+a[i];
    
    int q,l,r; cin>>q;
    while (q--)
    {
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<"\n";
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}