//File name:Count Distinct
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (A)
//Description:Hashing
//Last Changed:6-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    ll n; cin>>n;
    vector<ll>a(n);
    unordered_set<ll>st;

    //taking the input
    for (int i = 0; i < n; i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    cout<<st.size();
   
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