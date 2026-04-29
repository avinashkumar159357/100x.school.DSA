//File name:Triplets
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: Array(P)
//Description:Array 
//Last Changed:28-4-2026
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n,x,c=0; cin>>n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin>>x;
    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for(int k=j+1; k<n; k++){
                long long value=a[i]+a[j]+a[k];
                if(value==x) c++;
            }    
        }
    }
    cout<<c;
    cout<<"\n";

}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}