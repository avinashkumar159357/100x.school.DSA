//File name:Push Zeros to the End
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (B)
//Description:Practice
//Last Changed:31-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    int n; cin>>n;
    vector<ll>a(n),b;

    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]!=0)b.push_back(a[i]);
    } 
    
    for (int  i = 0; i < b.size(); i++) cout<<b[i]<<" ";

    for (int i = 0; i < (n-b.size()); i++) cout<<"0 ";

    cout<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
}