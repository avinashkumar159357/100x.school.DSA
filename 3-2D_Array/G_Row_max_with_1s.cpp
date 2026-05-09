//File name:Row with max 1s
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2D Array (G)
//Description:getting familiar with 2D array
//Last Changed:9-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ,m; cin>>n>>m;
    bool flag=false;
    vector<vector<int>> a(n,vector<int>(m));
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ;j++)
        {
            if(a[i][j]==1)count++;
        }
        b.push_back(count);
        count=0;
    }

    int ind=0;
    int maximum_1s=b[0];
    for (int i = 1; i <b.size(); i++)
    {
        if(b[i]>maximum_1s){
            maximum_1s=b[i];
            ind=i;
        }
    }

    for (auto x : b)
    {
        if(x!=0){
            flag=true;
            break;
        }
    }
    if(flag) cout<<ind;
    else cout<<"-1";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}