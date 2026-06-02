//File name:Kth Factor
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (H)
//Description:practicing to write code with constraint on time and space
//Last Changed:2-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ // 1<=N<=10^12
    ll n,k; cin>>n>>k;
    vector<ll>a;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            a.push_back(i);
            if(i!=(n/i))a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());

    if(k<=a.size())cout<<a[k-1];
    else cout<<"-1";
    
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