//File name: Print All Subarrays
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (H)
//Description:prefix sum
//Last Changed:5-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<int>a(n);
    
    for (int i = 0; i < n; i++) cin>>a[i];


    //printing all the sub arrays 
    for(int k=0; k<n; k++)
    {
        for (int  i = k; i < n; i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<"\n";
        }
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}