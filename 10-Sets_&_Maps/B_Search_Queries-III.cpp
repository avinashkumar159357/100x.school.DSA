//File name:Search Queries - III
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (B)
//Description:Hashing
//Last Changed:7-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,q; cin>>n>>q;
    ll x;
    vector<ll>a(n);
    unordered_map<ll,ll>mp;

    //taking the input
    for (int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]]=i; 
    } 

    // start to execute the queries
    while (q--)
    {
        cin>>x;
        if(mp.count(x)) cout<<mp[x]+1<<"\n";
        else cout<<"-1\n";
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}