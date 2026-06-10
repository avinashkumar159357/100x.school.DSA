//File name:Intersection of Two Arrays
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps(F)
//Description:Hashing
//Last Changed:10-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,m; 
    set<ll>st,st1;

    cin>>n;
    vector<ll>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        st.insert(a[i]);
    } 
    
    cin>>m;
    vector<ll>b(m);
    for (int i = 0; i < m; i++){
        cin>>b[i];
        if(st.count(b[i])!=0)st1.insert(b[i]);
    } 
    cout<<st1.size()<<"\n";
    for(auto x: st1) cout<<x<<" ";
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