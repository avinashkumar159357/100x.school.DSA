//Problem name:Sort 0 1 2
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest(C)
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
        
    sort(a.begin(),a.end(),greater<int>());

    for(int x:a) cout<<x<<" ";
    
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    