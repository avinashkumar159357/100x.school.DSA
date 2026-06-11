//File name:Two Sum - I
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (H)
//Description:Hashing
//Last Changed:10-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    ll x ; cin>>x;
    set<ll>st;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    for (int i = 0; i < n; i++)
    {
        int need =x-a[i];
        if(st.find(need)!=st.end()){
            cout<<"TRUE";
            return;
        }else st.insert(a[i]);
    }
    cout<<"FALSE";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}