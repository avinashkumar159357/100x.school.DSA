//Problem name:RCB wins again
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest (G)
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    
    for (int  i = 0; i <n; i++) cin>>a[i];

    int i=(n/2)-1,j=(n/2);

    while (i>0 || j<n)
    {
        cout<<a[i]<<" "<<a[j]<<" ";
        i--;
        j++;
    }
    
    
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    