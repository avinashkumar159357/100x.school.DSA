//Problem name:Unique Elements
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest (I)
//Description:array
//Last Changed:2-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);


void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    
    for (int i = 0; i < n; i++)cin>>a[i];

    for (int i = 0; i < n; i++)
    {
       int count=0;
       for (int j = 0; j < n; j++)
       {
            if(a[j]==a[i])count++;
       }
       if(count==1) cout<<a[i]<<" ";
    }
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

