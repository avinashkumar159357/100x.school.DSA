//File name:Rotate Image
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (I)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    int n; cin>>n;
    vector<vector<ll>>a(n,vector<ll>(n));
    
    for (int  i =0; i<n; i++)
    {
        for (int j = 0; j < n; j++) cin>>a[i][j];
    }
    
    for (int  i =0; i<n; i++)
    {
        for (int j = n-1; j >=0; j--) cout<<a[j][i]<<" ";
        cout<<"\n";
    }
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while (t--)
    {
        solve();
    }
    
}