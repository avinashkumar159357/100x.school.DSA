//File name:Two Sum - III
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (J)
//Description:Hashing
//Last Changed:11-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   //using map
    int n; cin>>n;
    ll x; cin>>x;

    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    map<ll,ll>mp;
    ll count_pair=0;
    for (int  i = 0; i < n; i++)
    {
        ll need =x-a[i];
        if(mp.count(need)){
            count_pair+=mp[need];
        }
        mp[a[i]]++;
    }
    cout<<count_pair;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}