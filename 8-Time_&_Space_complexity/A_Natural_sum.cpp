//File name:Natural Sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (A)
//Description:practicing to write code with constraint on time and space
//Last Changed:31-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){  //1<=N<=2*10^9
    ll n; cin>>n;
    cout<<(n*(n+1))/2;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1; // cin>>t;
    while (t--)
    {
        solve();
    }
    
}