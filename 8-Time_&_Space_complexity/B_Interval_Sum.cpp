//File name:Interval Sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (B)
//Description:practicing to write code with constraint on time and space
//Last Changed:31-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){  //1<=N<=2*10^9
    ll l,r; cin>>l>>r;
    cout<<(r*(r+1))/2-((l-1)*(l))/2<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
}