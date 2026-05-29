//File name:Diagonal Sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (H)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    int n; cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
            if(i==j)sum+=a[i][j];
        }
    }
    cout<<sum;
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