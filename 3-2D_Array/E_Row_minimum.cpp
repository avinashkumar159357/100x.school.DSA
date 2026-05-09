//File name:Row Minimum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2D Array (E)
//Description:getting familiar with 2D array
//Last Changed:9-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ,m; cin>>n>>m;
    
    vector<vector<int>>a(n,vector<int>(m));
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans=min(ans,a[i][j]);
        }
        b.push_back(ans);
        if(i!=n-1) ans=a[i+1][0];
    }
    
    for (auto z : b) cout<<z<<" ";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}