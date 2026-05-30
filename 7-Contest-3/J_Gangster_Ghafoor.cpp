//File name:Gangster Ghafoor
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:J
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,m; cin>>n>>m;
    
    vector<vector<int>>a(n,vector<int>(m));

    // take the input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) cin>>a[i][j];
    }

    //searching the first column from bottonm to top
    int j=0;
    for (int i =n-1; i >=0; i--)
    {
        if(a[i][j]==-1) return;
        cout<<a[i][j]<<" ";
    }
    
    ///searching the first row from left to right
    int i=0;
    for (int  j = 1; j < m; j++)
    {
        if(a[i][j]==-1) return;
        cout<<a[i][j]<<" ";
    }
    
    //searching last column from top to bottom
    int k=m-1;
    for (int i = 1; i < n; i++)
    {
        if(a[i][k]==-1) return;
        cout<<a[i][k]<<" ";
    }
    
    //searching the last row from right to left
    int l=n-1;
    for (int j = m-2; j >0; j--)
    {
        if(a[l][j]==-1) return;
        cout<<a[l][j]<<" ";
    }
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}