//File name:Counting Intervals
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (C)
//Description:practicing to write code with constraint on time and space
//Last Changed:31-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){  //1<=N<=2*10^9
    ll t,l,r; cin>>t>>l>>r;
    ll ans=0;
    if(t==1) ans=(r-l-1);
    if(t==2) ans=(r-l);
    if(t==3) ans=(r-l);
    if(t==4) ans=(r-l+1);

    cout<< max(0LL,ans) <<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q;  cin>>q;
    while (q--)
    {
        solve();
    }
    
}