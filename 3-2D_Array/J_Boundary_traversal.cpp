//File name:Boundary Traversal
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2D Array (J)
//Description:getting familiar with 2D array
//Last Changed:9-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ,m; cin>>n>>m;
    
    vector<vector<long long>> a(n,vector<long long>(m));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) cin>>a[i][j];
    }

    //for n==1
    if(n==1){
        for (int j = 0; j < m; j++)cout<<a[0][j]<<" "; 
        return;
    }

    //for m==1
    if(m==1){
        for (int i = 0; i < n; i++) cout<<a[i][0]<<" ";
        return;
    }

     // left to right (1st row covering all the elements)
    for (int j = 0; j < m; j++) cout<<a[0][j]<<" ";
    
     //top to bottom of last column avoiding the first and the last element
    if(m>1){
     for (int i = 1; i <n-1; i++) cout<<a[i][m-1]<<" ";
    }

    if(n>1){// last row from right to left
        for (int j = m-1; j >= 0; j--) cout<<a[n-1][j]<<" ";
    }

    if(m>1){ //bottom to top of first column avoiding the first and the last element
        for (int i =n-2; i >0; i--) cout<<a[i][0]<<" ";
    }
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}