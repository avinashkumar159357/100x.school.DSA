//Problem name:Compare Factorials
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    ll a,b; cin>>a>>b;
    if((a==0 || a==1) && (b==0 || b==1) || (a==b)) cout<<"Yes";
    else cout<<"No";
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    