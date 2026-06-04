//File name: Range Sum of Squares
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (D)
//Description:prefix sum
//Last Changed:4-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    ll n,q; cin>>n>>q;
    vector<ll>a(n);
    vector<ll>pref(n+1,0);
    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=(a[i]*a[i]);
        pref[i+1]=sum;
    } 

    int l,r; 
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