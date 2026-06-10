//File name: Union of Two Arrays
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps(E)
//Description:Hashing
//Last Changed:10-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,m; 
    set<ll>st;
    ll x=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x;
        st.insert(x);
    } 
    cin>>m;
    for (int i = 0; i < m; i++){
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<"\n";
    for(ll x:st) cout<<x<<" ";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; //  cin>>TC;
    while (TC--)
    {
        solve();
    }
    
}