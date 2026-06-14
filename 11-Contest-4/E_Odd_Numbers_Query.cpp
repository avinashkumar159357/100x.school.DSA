//File name: Odd Numbers Query
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (E)
//Description:
//Last Changed:14-06-2026

#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,q; cin>>n>>q;
    vector<ll>a(n),pref(n+1,0);
    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
        pref[i+1]=sum;    
    }
    while (q--)
    {
        int l,r; cin>>l>>r;
        ll query_sum=pref[r]-pref[l-1];
        ll sum_left=sum-query_sum;
        if(sum_left%2==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    