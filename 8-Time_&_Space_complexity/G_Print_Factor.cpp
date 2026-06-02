//File name:Print Factors
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (G)
//Description:practicing to write code with constraint on time and space
//Last Changed:2-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ // 1<=N<=10^12
    ll n; cin>>n;
    vector<ll>a;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i))a.push_back(n/i);
        }
    }
    for (int i = a.size()-1; i >=0; i--) cout<<a[i]<<" ";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; // cin>>q;
    while (q--)
    {
        solve();
    }
    
}